# Wiring Notes

Keep this updated as the electronics come together — it's much easier
to reference this than to trace wires by eye months from now.

## Pin Assignments (Arduino)

| Arduino Pin | Connected To       | Notes                          |
|-------------|--------------------|---------------------------------|
| e.g. D9     | Servo 1 (shoulder) | PWM                             |
| e.g. A0     | Mux SIG output      | Reads all potentiometers        |
| e.g. D2-D4  | Mux select lines    | S0/S1/S2                        |

## Multiplexer Logic
- Mux model: [fill in, e.g. CD74HC4051]
- Number of channels used: [fill in] of [fill in]
- Select line truth table (or link to datasheet):

## Servo Driver
- Driver model: [fill in, e.g. PCA9685]
- Communication protocol: [fill in, e.g. I2C]
- Power supply notes: [fill in — voltage, current budget, separate supply for servos?]

## Stepper Motor
- Driver model: [fill in]
- Wiring notes: [fill in]

## Power Distribution
- [Notes on how power is split between Arduino, servos, stepper — e.g.
  separate power rail for servos to avoid brownouts]

## Known Issues / Gotchas
- [Running list of quirks — e.g. "Servo 4 needs a slight delay after
  power-up or it jitters"]
