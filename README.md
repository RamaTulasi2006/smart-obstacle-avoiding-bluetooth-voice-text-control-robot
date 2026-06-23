# 🤖 Smart Obstacle Avoiding Robot with Bluetooth, Voice & Text Control

## 📌 Project Overview
This project is a multi-functional smart robot designed using Arduino that can automatically avoid obstacles and can also be controlled manually using Bluetooth, voice commands, and text inputs.

The robot integrates autonomous navigation with user-controlled modes, making it a versatile embedded system project.

---

## 🚀 Features
- 🛑 Obstacle detection using ultrasonic sensor
- 🔄 Automatic obstacle avoidance
- 📱 Bluetooth control via mobile application
- 🎤 Voice command control
- ⌨️ Text-based control
- ⚡ Real-time movement response

---

## 🛠️ Components Used
- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- Motor Driver Module (L298N)
- DC Motors with wheels
- Bluetooth Module (HC-05)
- Chassis
- Power Supply (Battery)
- Jumper wires

---

## ⚙️ Working Principle

### 🔹 Obstacle Avoidance Mode:
- Ultrasonic sensor detects distance
- If obstacle is close → robot changes direction automatically

### 🔹 Bluetooth Control Mode:
- Mobile app sends commands via HC-05
- Robot moves based on commands (forward, backward, left, right)

### 🔹 Voice Control Mode:
- Voice commands converted to text via mobile
- Commands sent to robot through Bluetooth

### 🔹 Text Control Mode:
- User sends text commands via app
- Robot executes movement accordingly

---

## 💻 Code Logic
- `digitalWrite()` → controls motor direction
- `analogWrite()` → controls motor speed
- `pulseIn()` → measures distance from ultrasonic sensor
- `Serial.read()` → reads Bluetooth commands
- `if-else` conditions → decision making

---

## 📊 Applications
- Smart robotics systems
- Surveillance robots
- Automation systems
- Educational robotics projects
- Industrial inspection

---

## 🔮 Future Enhancements
- Add camera for live streaming
- Integrate IoT for remote control over internet
- Add GPS for navigation tracking
- AI-based obstacle detection

---

## 📸 Circuit Diagram
<img width="298" height="169" alt="image" src="https://github.com/user-attachments/assets/45afa37e-92da-4539-973d-4ae0cb44e99e" />


---

## 🔧 Hardware Setup
<img width="2204" height="1836" alt="image" src="https://github.com/user-attachments/assets/ef3214b8-66a6-4258-9636-a392da526a8e" />


---

## 📊 Output / Working

<img width="700" height="393" alt="image" src="https://github.com/user-attachments/assets/818d31d5-8a8b-4fe0-9a08-f699bb6f746b" />

---

## 👨‍💻 Author
Rama Tulasi
