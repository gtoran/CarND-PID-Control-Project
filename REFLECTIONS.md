# Reflections CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

I was able to successfully drive the car around the lap at a standard speed (throttle value <= 0.4). Higher speeds cause track departure due to over-compensation in the first curves.

The P, I, D parameters were determining through manual tuning. I will revisit this project to apply the twiddling technique that Sebsatian outlines in the lesson, but I wanted to approximate these values manually to really understand how they affected the self-steering.

I also left the appropriate scaffolding in place for the throttle value to be determined via PID as well. If I apply twiddling to both PIDs, I should be able to increase the speed without the vehicle departing the track.