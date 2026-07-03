# voice-controlled-pattern-reconfigurable-wlan-antenna
Voice Controlled Pattern Reconfigurable WLAN Antenna using ESP32, Bluetooth, NRF24L01 and Microstrip Patch Antennas.
# 🎙️ Voice Controlled Pattern Reconfigurable WLAN Antenna

> A Low-Cost Smart Directional Antenna using **ESP32**, **Bluetooth**, **NRF24L01**, and **Electronically Switched Microstrip Patch Antennas**.

<img width="651" height="378" alt="ANTENNA REPORT FINAL 1_removed pdf-image-011" src="https://github.com/user-attachments/assets/fa9775d7-9e4f-46f8-926e-2b767f8bff24" />

<img width="720" height="651" alt="PROTOYPE" src="https://github.com/user-attachments/assets/7b369c2a-1849-4ff0-81e6-50cb7cf94867" />




# 📖 Overview

This project presents a **Voice Controlled Pattern Reconfigurable WLAN Antenna** capable of dynamically changing its radiation direction using simple voice commands.

Unlike conventional antennas with fixed radiation patterns, this system electronically switches between multiple antenna configurations through relay-based switching, enabling directional communication without expensive beamforming hardware.

The ESP32 microcontroller receives Bluetooth voice commands from a mobile application and controls relay modules to activate the desired antenna configuration. An OLED display provides real-time operating mode feedback while the NRF24L01 module enables wireless communication.

---

# 🚀 Features

- 🎤 Voice Controlled Antenna Switching
- 📶 Pattern Reconfigurable WLAN Antenna
- 📱 Bluetooth Communication
- ⚡ ESP32 Based Embedded System
- 🔀 Relay Based Electronic Switching
- 📡 NRF24L01 Wireless Communication
- 🖥 OLED Status Display
- 💰 Low Cost Implementation
- ⚙ Real-Time Operation

---

# 🛠 Hardware Components

| Component | Description |
|------------|------------|
| ESP32 DevKit | Main Controller |
| NRF24L01 | 2.4 GHz RF Transceiver |
| Relay Module | Electronic Antenna Switching |
| OLED SSD1306 | Status Display |
| Dual Patch Antennas | Pattern Reconfiguration |
| LM2596 Buck Converter | Power Supply |
| SMA Connector | RF Interface |
| Battery | Portable Power Source |

---

# 💻 Software Used

- Arduino IDE
- Embedded C++
- ANSYS HFSS
- Bluetooth Voice Control Application

---

# 📡 Antenna Specifications

| Parameter | Value |
|------------|-------|
| Antenna Type | Rectangular Microstrip Patch |
| Operating Frequency | 2.40 GHz |
| WLAN Band | ISM Band |
| Substrate | FR4 Epoxy |
| Dielectric Constant | 4.4 |
| Thickness | 1.6 mm |
| Feed Technique | Inset Feed |
| Input Impedance | 50 Ω |
| Polarization | Linear |
| Radiation | Broadside |
| Simulation Software | ANSYS HFSS |

---

# 📊 Antenna Performance

| Parameter | Result |
|------------|---------|
| Return Loss (S11) | -19.89 dB |
| VSWR | 1.225 |
| Peak Gain | ≈3.2 dB |
| Radiation Pattern | Broadside |

---

# ⚙ Working Principle

```
Voice Command
      │
      ▼
Bluetooth Communication
      │
      ▼
ESP32 Controller
      │
      ▼
Relay Switching
      │
      ▼
Selected Patch Antenna
      │
      ▼
NRF24L01 RF Transmission
      │
      ▼
OLED Status Display
```

---

# 📁 Repository Structure

```
Voice-Controlled-Pattern-Reconfigurable-WLAN-Antenna
│
├── Firmware
│   └── Smart_Antenna.ino
│
├── Hardware
│   ├── Circuit_Diagram.png
│   ├── Prototype.jpg
│   ├── Left_Mode.jpg
│   ├── Right_Mode.jpg
│   └── Center_Mode.jpg
│
├── Antenna_Design
│   ├── Patch_Antenna.aedtz
│   ├── Return_Loss.png
│   ├── VSWR.png
│   ├── Gain.png
│   ├── Radiation_Pattern.png
│   ├── Smith_Chart.png
│   └── E_Field.png
│
├── Documentation
│   ├── Final_Report.pdf
│   └── Presentation.pptx
│
├── Images
│   ├── Cover.jpg
│   ├── Architecture.png
│   ├── Prototype.jpg
│   └── Working.png
│
└── README.md
```

---

# 🔄 Firmware Workflow

1. Initialize ESP32 peripherals.
2. Initialize Bluetooth.
3. Initialize OLED Display.
4. Initialize NRF24L01 Module.
5. Wait for Bluetooth Voice Command.
6. Process LEFT / RIGHT / CENTER.
7. Activate Relay Module.
8. Display Current Mode.
9. Transmit RF Data.
10. Repeat Continuously.

---

# 📶 Operating Modes

## LEFT Mode

- Relay 1 ON
- Relay 2 OFF
- Left Patch Antenna Active
- OLED Displays LEFT

---

## RIGHT Mode

- Relay 1 OFF
- Relay 2 ON
- Right Patch Antenna Active
- OLED Displays RIGHT

---

## CENTER Mode

- Relay Switching Logic Enabled
- Wider Coverage
- OLED Displays CENTER

---


# 🎯 Applications

- Smart WLAN Networks
- Wireless Sensor Networks
- Smart Buildings
- IoT Communication
- Industrial Automation
- Defense Communication
- Directional Wireless Links

---

# 🔮 Future Scope

- PIN Diode Switching
- RF MEMS Switching
- 360° Beam Steering
- AI-Based Beam Selection
- 5G mmWave Communication
- Massive MIMO Systems

---

# 📂 Documentation

The repository includes:

- Complete Arduino Firmware
- ANSYS HFSS Design Files
- Circuit Diagram
- Hardware Prototype
- Simulation Results
- Final Project Report
- PowerPoint Presentation

---

# 🤝 Contributing

Contributions are welcome.

Feel free to fork the repository, improve the project, and submit pull requests.

---

# 📜 License

This project is licensed under the MIT License.

---

# 👨‍💻 Author

**Himanshu Pawar**

Electronics & Telecommunication Engineer

### Skills

- Embedded Systems
- ESP32
- IoT
- RF Engineering
- Antenna Design
- Arduino
- C++
- PCB Design

📧 Email: himanshupawar259@gmail.com


💼 LinkedIn:
https://www.linkedin.com/in/himanshu-pawar-a74b732a9/

🌐 GitHub:
https://github.com/himanshu17890/

---

⭐ If you found this project useful, please consider giving it a Star!
