# 🌻 Project Sunflower - Development Log

## 2026-03-17 - Project Setup
**What I did:**
- Created GitHub repository
- Wrote project plan
- Defined system architecture
- Selected and ordered components

**Questions / Problems:**
- How to power and control the LED Matrix
- Whether there are enough pins to control all modules
- How to store the audio files

## 2026-03-29
**What I did:**
- Connected the HUD75 LED Panel to the ESP32 Board with the following Pins:

![Connection](../images/esp32_hub75_wiring.jpg)

```cpp
R1 -> GPIO 25
G1 -> GPIO 27
B1 -> GPIO 26
R2 -> GPIO 14
G2 -> GPIO 12
B2 -> GPIO 13
A -> GPIO 23
B -> GPIO 19
C -> GPIO 5
D -> GPIO 17
E -> GPIO 32 // Not used
LAT -> GPIO 4
OE -> GPIO 15
CLK -> GPIO 16
```
- Wrote a simple test [sketch](../src/components/led_matrix/led_matrix_test/led_matrix_test.ino) to make sure that the LED Panel works

**Problems:**
- Initially, I ran into a problem where only part of the display is on

![Problem](../images/panel_issue.jpg)

- After debugging I found out that one of the wire D to GPIO 17 was disconnected
- So I reconnected it and it works

![After proper wiring](../images/panel_issue_fixed.jpg)

