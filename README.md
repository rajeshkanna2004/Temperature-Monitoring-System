# Temperature Monitoring System 🔥🌡️

This Arduino project reads ambient temperature using an **LM35** temperature sensor and displays it on a **16x2 LCD**. A **buzzer** alerts if the temperature exceeds a defined threshold.

---

## 🧰 Components Used
| Component        | Quantity |
|------------------|----------|
| Arduino UNO      | 1        |
| LM35 Temperature Sensor | 1        |
| 16x2 LCD Display | 1        |
| Buzzer / LED     | 1        |
| 10k Potentiometer| 1        |
| Breadboard       | 1        |
| Jumper Wires     | As needed |

---

## 🔌 Circuit Connections

### LM35 to Arduino:
| LM35 Pin | Arduino |
|----------|---------|
| VCC      | 5V      |
| GND      | GND     |
| OUT      | A0      |

---

### 16x2 LCD to Arduino:
| LCD Pin | Arduino Pin |
|---------|-------------|
| VSS     | GND         |
| VDD     | 5V          |
| V0      | Middle pin of potentiometer |
| RS      | D12         |
| RW      | GND         |
| E       | D11         |
| D4      | D5          |
| D5      | D4          |
| D6      | D3          |
| D7      | D2          |
| A (LED+) | 5V         |
| K (LED-) | GND        |

---

### Buzzer to Arduino:
| Buzzer Pin | Arduino |
|------------|---------|
| +          | D8      |
| -          | GND     |

---

## 💡 Features
- Real-time temperature display in Celsius
- High temperature alert (above 35°C)
- Expandable for IoT/cloud monitoring

---

## 🔁 Code
See [`temperature_monitor.ino`](temperature_monitor.ino)

---

## 📸 Circuit Diagram
*Coming soon — use Tinkercad or Fritzing to simulate circuit.*

---

## 📦 How to Run
1. Connect the circuit as described above.
2. Upload the `.ino` file to Arduino using Arduino IDE.
3. Power the Arduino board.
4. Observe temperature on the LCD. Alert will trigger if it exceeds the threshold.

---

## 📌 Future Upgrades
- Send data to Blynk/ThingSpeak/MQTT
- Add temperature logging via SD card
- Add DHT11 for humidity sensing

---

## 👨‍💻 Author
**Rajesh Kanna PB**  
  
