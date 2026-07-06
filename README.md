# 7-DOF Robotic Arm

A 7-degree-of-freedom robotic arm built with a friend, combining mechanical
design/fabrication with custom electronics and closed-loop control.

## Status
🚧 In progress — currently syncing servo control to potentiometer feedback
via multiplexer.

## Overview
This project is split by discipline:
- **Mechanical design & fabrication (CAD, 3D printing):** [Friend's name]
- **Electronics & control systems (coding, soldering):** [Your name]

## Specs
- Actuators: 7x servo motors, 1x stepper motor
- Feedback: potentiometer per joint, read via multiplexer
- Controller: Arduino [model]
- Driver hardware: [fill in]

## Repo Structure
- `/code` — Arduino firmware
- `/cad` — mechanical design files and exports
- `/electronics` — wiring diagrams and notes
- `/docs` — build log and progress media

## Build Log
See [docs/build-log.md](docs/build-log.md) for detailed progress notes
and challenges encountered along the way.

## Next Steps
- [ ] Finish mux/servo driver/perfboard soldering
- [ ] Sync all 7 servos to potentiometer feedback
- [ ] Integrate stepper motor for base rotation
- [ ] (Add more as the project evolves — e.g. inverse kinematics, wireless control)
