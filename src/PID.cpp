#include "PID.h"
#include <iostream>
#include <math.h>

using namespace std;

/*
* TODO: Complete the PID class.
*/

// Shouldn't be too hard...! :)

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    
    PID::Kp = Kp;
    PID::Ki = Ki;
    PID::Kd = Kd;
    
    d_error = i_error = p_error = 0;
    
}

void PID::UpdateError(double cte) {

    d_error = cte - p_error;
	p_error = cte;
    i_error = i_error + cte;
    
}

double PID::TotalError() {

    double total_error =- PID::Kp * p_error - PID::Kd * d_error - PID::Ki * i_error;
    
    if (fabs(total_error) > 1.0) {
        if (total_error <= 0) {
            total_error = -1.0;
        } else {
            total_error = 1.0;
        }
    }
    
    return total_error;
}

