# Gesture Controlled Car

This project demonstrates a two-part gesture-controlled car system:
- **Transmitter**: Reads hand gestures using MPU6050 and transmits commands (e.g., FORWARD, LEFT).
- **Receiver**: Receives commands and drives motors using L293D.

## 🧠 Working Principle
- Tilting the hand triggers gesture commands.
- Commands are sent wirelessly (RF/HC-12).
- The receiver controls DC motors via L293D IC based on the received commands.

## 🧰 Components Used
- Arduino UNO ×2
- MPU6050
- RF433 or HC-12 Tx/Rx
- L293D Motor Driver
- DC Motors ×2
- Battery (9V or more)
- Tinkercad for receiver simulation

## 🔌 Circuit (Receiver - Tinkercad)

- IN1 → D5  
- IN2 → D6  
- IN3 → D9  
- IN4 → D10  
- EN1, EN2 → 5V  
- VCC2 → 9V  
- VCC1 → 5V  
- GND → GND

## 🧪 Simulation

Open this link and run the simulation in Serial Monitor:  
📎 [Tinkercad Simulation](https://www.tinkercad.com/things/9jCWzKPQQnl-gesture-controlled-car)

## 🔄 Commands via Serial
- `FORWARD`
- `BACKWARD`
- `LEFT`
- `RIGHT`

## 📸 Real Circuit

Transmitter with MPU6050 + RF module:  
![Circuit](circuit_image.jpg)