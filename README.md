# roboarm-gripper

A personal robotic arm and gripper project focused on designing, building, and documenting a compact servo-driven robot arm with a functional gripper, Arduino Uno control system, and a mixed-servo actuation layout using three MG996R servos and two SG90 servos.

## Motivation

I wanted to build a compact robotic arm that can sit on a desk, move through multiple joints, and grip small objects using a simple servo-powered mechanism. This project combines mechanical design, electronics, embedded programming, power wiring, and basic robotic motion control into one practical engineering build.

The goal of roboarm-gripper is to create a small robotic manipulation platform that can be improved over time with smoother joint motion, better gripper control, inverse kinematics and more stable mechanical movement.

## Project Overview

roboarm-gripper is designed as a compact desktop robotic arm platform that includes:

- 3D-printed arm structure
- three MG996R servos for main arm joints
- two SG90 servos for lighter gripper or wrist movement
- Arduino Uno control board


## Main Features

## Five-Servo Arm and Gripper System

The robot uses five servos total: three MG996R servos and two SG90 servos.

The MG996R servos are used for the main load-bearing arm joints, such as base rotation, shoulder movement, and elbow movement. These servos provide the main torque needed to move the arm structure.

The SG90 servos are used for lighter mechanisms, such as wrist rotation, wrist tilt, or gripper opening and closing. These servos are smaller and better suited for low-load movement.

## MG996R Main Joint System

The three MG996R servos provide the main actuation for the robot arm.
These servos are selected for the larger mechanical loads in the arm. They should be powered from a dedicated external 5 V to 6 V servo power rail, not directly from the Arduino Uno.

## SG90 Gripper and Wrist System

The two SG90 servos provide lighter movement for the end effector.

Joint assignment:

- SG90 Servo 1: wrist movement
- SG90 Servo 2: gripper opening and closing

The SG90 servos are used where lower torque is acceptable and where compact size is more important than strength.

## Arduino Uno Control System

The Arduino Uno is used as the main controller. It will generate the PWM control signals for all five servos and run the basic arm movement logic.

The Arduino Uno was chosen because it is simple, reliable, easy to program through USB, and well supported by the Arduino Servo library.


## Full Robot CAD Design

Below is the current CAD design of the robot arm and gripper.
<img width="1360" height="410" alt="smthfuckoff_2026-May-09_06-57-23AM-000_CustomizedView19021997782_png" src="https://github.com/user-attachments/assets/2e861d45-6399-4de0-8ff6-4c2c1fb7367f" />

<img width="300" height="300" alt="image" src="https://github.com/user-attachments/assets/72cabd2c-38e2-4426-b656-0ff702b01f1b" />

<!-- Add full robot arm CAD image here -->

<!--
<img width="" height="" alt="robot arm CAD design" src="" />
-->

## Arranged Parts
<img width="300" height="300" alt="image" src="https://github.com/user-attachments/assets/ffe0abe9-7a34-4dfb-a66d-d87bb7015d40" />
<img width="300" height="300" alt="image" src="https://github.com/user-attachments/assets/13f377b9-8e81-4edb-a7eb-15fe912d8234" />

<!-- Add arranged parts image here -->

<!--
<img width="" height="" alt="arranged parts" src="" />
-->

## Component List

- **Arduino Uno**  
  Main controller for the robot arm. It will control all five servos and run the movement logic for the arm and gripper.

- **MG996R Servos**  
  Used for the main robot arm joints. These servos provide higher torque for base, shoulder, and elbow movement.

- **SG90 Servos**  
  Used for lighter movement such as wrist motion or gripper actuation.

- **3D-Printed Arm and Gripper Parts**  
  Used as the mechanical structure for the robot arm, joints, brackets, and gripper mechanism.

## Wiring

<!-- Add wiring diagram image here -->
<img width="500" height="500" alt="image" src="https://github.com/user-attachments/assets/b37e1caf-453a-4d71-b5af-a0c8c1172837" />

<!--
<img width="" height="" alt="wiring diagram" src="" />
-->





## BOM List



## Estimated Total Cost

Total: 
