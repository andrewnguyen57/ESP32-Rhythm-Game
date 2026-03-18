# 🌻 Project Sunflower
ESP32-Based Rhythm Game

🚧 **Status:** In Development  

## 🎯 Overview
Project Sunflower is a real-time rhythm game built on the ESP32-C6.
Audio playback is synchronized with LED matrix animations, while user inputs are handled using GPIO interrupts for low-latency response. The system evaluates timing accuracy to generate scores based on player performance.

## 🚀 Planned Features
- Interrupt-driven input handling for precise timing  
- 64×32 RGB LED matrix for visualization  
- Real-time audio playback through speaker  
- Timing-based scoring system  
- Multiple difficulty levels  
- Support for WAV/MP3 playback  
- Portable  

## 🧠 System Architecture
### Core Modules
**Game Logic Module**
- Central timing engine  
- Controls note generation and synchronization  
- Handles scoring and difficulty scaling  

**Input Handler**
- Processes button and joystick input  
- Uses GPIO interrupts  

**LED Controller**
- Drives 64×32 RGB LED matrix  

**Audio Output Module**
- Generates audio signals  

**Display Module**
- OLED interface for menu and score  

**Feedback System**
- Provides visual/audio feedback based on performance  

## 🔄 System Flow
User Input → GPIO Interrupt → Game Logic → Timing Evaluation → Score Update → LED & Audio Output

## 🔧 Hardware
- ESP32-C6 Microcontroller
- 64×32 RGB LED Matrix (SMD2121)
- 8Ω 3W Mini Speaker
- SSD1306 OLED Display
- Tactile Push Buttons
- Analog Joystick
- Micro SD Card Module

## ⚠️ Key Challenges
- Synchronizing audio playback with LED animation
- Minimizing input latency
- Driving a large LED matrix with limited resources
- Managing tasks in a real-time system
- Limited GPIO availability on ESP32-C6

## 🔮 Future Enhancements
- Battery-powered system (2–3 hours runtime)
- Wireless updates via WiFi
- Bluetooth audio output support

## 📓 Development Log
See docs/devlog.md for progress updates.

## 🎬 Video
(Coming soon)