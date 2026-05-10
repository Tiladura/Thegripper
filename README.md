# roboarm-gripper

A personal robotic arm and gripper project focused on designing, building, and documenting a compact servo-driven robot arm with a functional gripper, Arduino Uno control system, and a mixed-servo actuation layout using three MG996R servos and two SG90 servos.

## Motivation

I wanted to build a compact robotic arm that can sit on a desk, move through multiple joints, and grip small objects using a simple servo-powered mechanism. 

The goal of roboarm-gripper is to create a small robotic manipulation platform that can be improved over time with smoother joint motion, better gripper control, inverse kinematics and more stable mechanical movement.

## Project Overview

roboarm-gripper is designed as a compact desktop robotic arm platform that includes:

- 3D-printed arm structure
- three MG996R servos for main arm joints
- two SG90 servos for lighter gripper or wrist movement
- Arduino Uno control board



## Arduino Uno Control System

The Arduino Uno is used as the main controller. It will generate the PWM control signals for all five servos and run the basic arm movement logic.

The Arduino Uno was chosen because it is simple, reliable, easy to program through USB, and well supported by the Arduino Servo library.

## Powering

The Arduino Uno and the servos will be powered separately.

The **Arduino Uno** will be powered by a simple battery. This battery will be used only for the Arduino logic, control pins, and code execution.

The **servos** will be powered by my own power bank. The power bank will supply 5V to the servo power wires.

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
<img width="678" height="585" alt="image" src="https://github.com/user-attachments/assets/7b43d92e-f66d-4417-9182-486238dc514a" />


<!--
<img width="" height="" alt="wiring diagram" src="" />
-->





## BOM List
| Part | Description | Qty | Total Cost (USD) | Distributor | Link |
|---|---|---:|---:|---|---|
| M2×22 Hex Socket Cap Screws | Black DIN 912 steel screws, grade 12.9, full thread. Pack of 10. | 1 pack | $2.93 | Ozon | [Link](https://ozon.kz/product/vint-din912-m2-h-22-mm-imbus-s-vnutrennim-shestigrannikom-i-tsilindricheskoy-golovkoy-stal-klassa-12-1766329524/?from_sku=1769491454&oos_search=false) |
| 25T Aluminum Round Servo Horn | Silver round servo horn for 25T servos. Used to attach linkages to a servo shaft. | 3 | $6.28 | Ozon | [Link](https://ozon.kz/product/kruglyy-rychazhnyy-mehanizm-alyuminievyy-servoprivoda-25t-serebro-3044135484/) |
| MG996R Servo Motor | High-torque servo motor for robotics, RC models, and mechanical projects. | 3 | $8.43 | Ozon | [Link](https://ozon.kz/product/servoprivod-mg995-mg996r-3248477282/) |
| SG90 180° Micro Servo | Small 4.8–6V plastic-gear servo. Torque: 1.2–1.4 kg·cm. | 2 | $4.40 | Ozon | [Link](https://ozon.kz/product/servoprivod-sg90-180-grad-plastikovyy-reduktor-krutyashchiy-moment-1-2-kg-sm-4-8-v-1-4-kg-sm-6-0-3075849940/) |
| **Total** |  |  | **$22.04** |  |  |


## Estimated Total Cost

Total: 
