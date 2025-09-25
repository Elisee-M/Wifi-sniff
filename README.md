# 🛰️ ESP8266 WiFi Sniffer Brrrrrrrrrrrrrrrr

This project turns your **ESP8266** into a tiny WiFi packet sniffer.  
It can capture nearby devices’ MAC addresses and signal strength (RSSI),  
and build a table of devices in range.  
All without **any external components** — just your ESP8266 board.

---

## 🚀 Features
- Sniffs WiFi packets in promiscuous mode  
- Extracts:
  - 📡 **MAC address** of nearby devices
  - 📶 **RSSI** (signal strength, in dBm)
  - ⏱️ Time of first/last seen
  - 🔢 Packet count  
- Maintains a live table of devices in memory  
- Supports channel hopping (scan across WiFi channels)  
- Can be extended to:
  - Upload data to Firebase / MQTT  
  - Host a live web dashboard  
  - Estimate proximity from RSSI  

---

## ⚡ Quick Start
1. Install [Arduino IDE](https://www.arduino.cc/en/software)  
2. Add **ESP8266 board support** via Board Manager  
3. Clone this repo and open the sketch  
4. Select your ESP8266 board (e.g. NodeMCU, Wemos D1 mini)  
5. Flash and open Serial Monitor (115200 baud)  
6. Watch the **brrrrrrrrrrrrrr logs** roll in 🚀  

---

## 🧑‍💻 Example Output
RSSI: -67 dBm, MAC: 3C:5A:B4:8E:1F:22
RSSI: -72 dBm, MAC: 7A:11:42:5D:9C:77
RSSI: -55 dBm, MAC: 48:D2:24:AC:02:9B


---

## 📊 What Can You Do With The Data?
- Count how many devices are nearby (👥 crowd estimation)  
- Track signal strength over time (📶 proximity experiments)  
- Detect when a specific device enters/leaves (🚪 presence alerts)  
- Identify busiest WiFi channels (📡 network analysis)  
- Push logs to Firebase / Web Dashboard for real-time monitoring 🌐  

---

## ⚠️ Disclaimer
This project is for **educational purposes only**.  
Don’t use it to spy on people or collect personal data.  
MAC randomization means many devices change addresses frequently anyway.  

Use responsibly — brrrrrrrrrrrrrr responsibly ⚡  

---

## 🛠️ Future Upgrades
- 🔐 Web dashboard served directly from ESP8266  
- ☁️ Firebase/MQTT integration  
- 📈 Chart.js visualization of RSSI trends  
- 🌍 Vendor lookup from OUI database  

---

## 👨‍💻 Author
Made with **ESP8266, caffeine, and brrrrrrrrrrrrrr**.  

