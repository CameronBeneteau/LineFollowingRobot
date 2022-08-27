# Line Following Robot

Exploring self-driving with Arduino and C++

![Robot Gif](assets/Robot_Gif.gif)

<!-- ![Robot Image](assets/Robot_Pic.jpg)  -->

## Table of Contents
[1. Project Information](#Project-Information)  
[2. Materials](#Materials)  
[3. Design Process](#Design-Process)  
[4. Software](#Software)  
[5. Results](#Results)  
[6. Next Steps](#Next-Steps)  

## Project Information

Computer Engineering project to design and build a robot that follows a black line.

### Objectives
- Robot wheels must always stay on opposite sides of the black line
- Robot must brake/stop when it detects an object within 20cm from its front edge

## Materials
- Arduino Uno Microcontroller
- Ultrasonic Sensor
- Servos Motors
- QTR Sensor
- Metal Chassis

## Design Process
Our first step was to test the individual components to understand how they worked and explore the various types and ranges readings we should look for while using them.

For example: A QTR sensor measures the reflectiveness of a surface with a value from 0 to 1000 (0 for white (most reflective), and 1000 for black (least reflective).
Using these measurements, we were able to develop unit test programs using Arduino and C++ for each sensor.

After each component was thoroughly tested, we proceeded to mount them on the metal chassis and wire them with one another.

![Robot Image](assets/Robot_Pic.jpg)

## Software
### Arduino_Robot_Code.ino

## Results

On our final day of testing, our robot was able to sucessfully complete all 5 paths for a **grade of 100%**.

It was exteremly cool to see this success from our hard work.

We built our very own Tesla!

## Next Steps
Some fun things I would like to build on or explore relating to this project would be:
- Attempting to follow much more jagged, colourful (instead of black/white) and complicated paths
- Incorporate more sensors to generate higher amounts of data for movement decisions
- Explore the effects and efficiencies for various positions of each sensor on the chassis
- Build a more sophisticated self-driving algorithm
