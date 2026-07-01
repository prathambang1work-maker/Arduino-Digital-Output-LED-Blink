# Arduino LED Blink Starter

## 📌 Overview

This project is a simple introduction to Arduino programming and embedded systems. It demonstrates how to control a digital output by blinking the built-in LED on an Arduino board.

This is often the **first project** for beginners to understand how Arduino interacts with hardware.

---

## 🚀 What I Learned

* Basics of Arduino programming
* Understanding `setup()` and `loop()` functions
* Using digital output pins
* Controlling hardware with code

---

## 🛠️ Components Used

* Arduino Board (Uno / Nano / etc.)
* USB Cable
* Built-in LED (no external components required)

---

## ⚙️ How It Works

* The LED is turned ON using `digitalWrite()`
* A delay of 1 second is applied
* The LED is turned OFF
* This process repeats continuously

---

## 💻 Code

```cpp
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
```

---

## 📷 Output

(Add your project image here)

---

## 📈 Future Improvements

* Control LED blinking speed using a potentiometer
* Add button input to control LED
* Expand to multiple LEDs (patterns)

---

## 📚 Author

**Pratham Bang**
Electrical & Computer Engineering

---

## ⭐ Note

This is part of my hands-on journey into **Arduino, IoT, and Embedded Systems**. More projects coming soon!
