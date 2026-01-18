# Line Follower Robot

## Overview
This repository contains my line follower robot project built using Arduino, DC motors, and IR sensors.  
The project is developed in iterations (versions), with each version focusing on improving stability, power reliability, and control.

---

## Version History

### V1 – Basic Line Follower
- Digital IR sensor–based line following
- Binary control logic
- Initial hardware assembly and wiring
- Basic movement on a predefined track

Demo (V1):  
(https://www.linkedin.com/posts/kavyansh-sharma-1a746a268_line-follower-robot-v1-demo-heres-a-short-activity-7414006846119710720-CSzP?utm_source=social_share_send&utm_medium=member_desktop_web&rcm=ACoAAEGQWo8BEAPg9pwDfiDaMB64gHmRUGEUqzU)

---

### V2 – Stability and Power Improvements (Current)
This version focuses on improving real-world performance rather than adding new features.

#### Improvements in V2:
- Power system upgrade  
  - Switched from AA cells and a 9V battery to two Li-ion cells  
  - Reduced voltage drops and Arduino resets  
  - Improved motor torque and consistency
- Motor speed calibration  
  - Applied a small speed offset between left and right motors  
  - Reduced wobble and improved straight-line movement
- IR sensor tuning  
  - Minor adjustments to sensor positioning and thresholds  
  - More consistent line detection

Demo (V2):  
https://www.linkedin.com/posts/kavyansh-sharma-1a746a268_line-follower-robot-v2-update-in-this-activity-7418566819449425921-kPgB?utm_source=social_share_send&utm_medium=member_desktop_web&rcm=ACoAAEGQWo8BEAPg9pwDfiDaMB64gHmRUGEUqzU

Note: An ultrasonic sensor is mounted on the robot but is not used in the current V2 implementation. It is planned for future obstacle avoidance integration.

---

## Current Features
- Digital IR sensor–based line following
- Open-loop motor control with calibrated speeds
- Stable battery-powered operation

---

## Planned Improvements
- V3: PID control using analog IR sensors
- V4: Obstacle avoidance using ultrasonic sensor
- Further chassis and mechanical optimizations

---

## Folder Structure
/code -> Arduino source code
/media -> demo videos
/images -> build photos

---

## Components Used
- Arduino with motor shield
- DC geared motors
- Digital IR sensors
- Li-ion batteries
- Ultrasonic sensor (planned use)

---

## Status
Project under active development and improvement.
