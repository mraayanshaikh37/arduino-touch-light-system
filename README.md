# ✋💡 Arduino Capacitive Touch Sensor Light

> **Every product begins with a prototype.**  
> This project validates the touch-controlled lighting concept that later evolved into the **E-Samai** electronic ceremonial lamp.

---

# 📖 About

This project demonstrates a touch-controlled lighting system using an Arduino Uno and a capacitive touch sensor.

Instead of pressing a mechanical button, a simple finger touch activates the LED. Using PWM (Pulse Width Modulation), the LED gradually fades in and fades out, creating a smooth lighting effect.

Although simple, this project became the **foundation** for the larger **E-Samai** project by proving that touch-based lighting control could be implemented reliably using Arduino.

---

# 🎯 Features

- ✋ Capacitive touch sensing
- 💡 Smooth LED fade-in
- 🌙 Smooth LED fade-out
- ⚡ PWM brightness control
- 🔌 Simple and beginner-friendly circuit
- 💰 Low-cost implementation
- 🧪 Proof-of-concept prototype

---

# 🛠 Components Used

| Component | Quantity |
|-----------|---------:|
| Arduino Uno | 1 |
| Capacitive Touch Sensor | 1 |
| LED | 1 |
| 1 kΩ Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | Several |

---

# 🔌 Circuit Connections

| Arduino Pin | Connected To |
|-------------|--------------|
| D2 | Touch Sensor Output |
| D5 (PWM) | LED |
| 5V | Sensor VCC |
| GND | Sensor GND |

---

# ⚙ Working Principle

1. The capacitive touch sensor continuously monitors for finger contact.
2. Arduino reads the digital output from the sensor.
3. When a touch is detected:
   - The LED smoothly fades from OFF to full brightness.
4. When the touch is released:
   - The LED smoothly fades back to OFF.
5. PWM (Pulse Width Modulation) is used to generate the gradual brightness transition.

---

# 🧠 Engineering Concepts Demonstrated

This project demonstrates practical concepts such as:

- Digital Inputs
- Capacitive Touch Sensing
- PWM (Pulse Width Modulation)
- Embedded Programming
- LED Brightness Control
- Breadboard Prototyping
- Circuit Debugging
- Arduino Programming

---

# 💻 Arduino Code

The complete Arduino sketch is included in this repository.

---

# 📷 Project Gallery

### Breadboard Setup

![Breadboard Setup](setup.jpg)

---

### LED Working Demonstration

![Working](working.jpg)

---

### Circuit Diagram

*(Circuit diagram will be added in a future update.)*

---

# 🔄 Evolution

This repository represents the **first successful prototype** of the lighting system that later evolved into the **E-Samai** project.

The prototype successfully validated:

- ✅ Capacitive touch sensing
- ✅ Smooth LED fading
- ✅ PWM lighting control
- ✅ Reliable Arduino implementation

The knowledge gained here directly influenced the design of the future E-Samai electronic ceremonial lamp.

---

# 🚀 Future Improvements

- RGB LED support
- Multiple touch sensors
- Adjustable brightness
- Battery-powered version
- PCB implementation
- Better enclosure
- Wireless control

---

# 🌟 Future Project — E-Samai

The concepts explored in this project will later evolve into **E-Samai**, an electronic ceremonial lamp featuring:

- 🧲 Magnetic activation
- 💡 Multiple synchronized LEDs
- 🎨 Decorative enclosure
- ✨ Enhanced lighting effects
- 🔋 Improved power management
- 🛡️ Safer circuit design

---

# 🎯 Project Status

🟢 **Prototype Completed**

This repository documents the successful proof of concept.

Future development will continue under the **E-Samai** project.

---

# 📚 Lessons Learned

Through this project, the following practical skills were developed:

- Understanding capacitive touch sensing
- Reading digital inputs
- PWM-based brightness control
- Embedded programming with Arduino
- Hardware troubleshooting
- Breadboard circuit construction
- Prototype development

---

# 👨‍💻 Author

**Aayan Shaikh**

Electronics & Telecommunication Engineering Student

Building practical embedded systems, IoT prototypes, and hardware projects through experimentation and continuous improvement.

---

# 📄 License

This project is shared for educational and learning purposes.ject is shared for educational and learning 
