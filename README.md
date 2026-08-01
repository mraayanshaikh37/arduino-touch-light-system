# ✋💡 Arduino Capacitive Touch Sensor Light

> A simple Arduino project demonstrating touch-based LED control with smooth fade-in and fade-out effects.

---

# 📖 About

This project uses a capacitive touch sensor to control an LED connected to an Arduino Uno. Instead of pressing a mechanical button, the LED responds to a simple touch.

The LED gradually increases and decreases in brightness using PWM (Pulse Width Modulation), creating a smooth lighting effect.

This project served as the **proof of concept** for the larger **E-Samai** project.

---

# 🎯 Features

- Touch-controlled LED
- Smooth fade-in effect
- Smooth fade-out effect
- PWM brightness control
- Beginner-friendly Arduino project
- Low-cost implementation

---

# 🛠 Components Used

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Capacitive Touch Sensor | 1 |
| LED | 1 |
| 1 kΩ Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | Several |

---

# 🔌 Circuit Connections

| Arduino Pin | Connected To |
|--------------|-------------|
| D2 | Touch Sensor Output |
| D5 (PWM) | LED |
| 5V | Sensor VCC |
| GND | Sensor GND |

---

# ⚙ Working Principle

1. The capacitive touch sensor detects a finger touch.
2. Arduino reads the sensor output.
3. When touched:
   - LED gradually fades ON.
4. When released:
   - LED gradually fades OFF.
5. PWM is used to control brightness smoothly.

---

# 💻 Arduino Code

The complete Arduino sketch is included in this repository.

---

# 📷 Project Gallery

*(Add project photos here)*

### Breadboard Setup

![Setup](setup.jpg)

---

### Circuit Working

![Working](working.jpg)

---

# 📚 Concepts Learned

- Digital Inputs
- PWM (Pulse Width Modulation)
- Arduino Programming
- Capacitive Touch Sensing
- LED Brightness Control
- Breadboard Wiring
- Hardware Debugging

---

# 🚀 Future Improvements

- RGB LED support
- Multiple touch sensors
- Adjustable brightness
- Battery-powered version
- PCB implementation

---

# 🌟 Future Scope

This project is the foundation of the **E-Samai** project.

The concepts developed here will later be expanded into an electronic ceremonial lamp featuring:

- Magnetic activation
- Multiple LEDs
- Decorative enclosure
- Improved lighting effects
- Safer power circuitry

---

# 🎯 Project Status

✅ Prototype Completed

Future versions will continue as part of the **E-Samai** project.

---

## 📄 License

This project is shared for educational and learning purposes.
