
# ESP32 Hardware Fundamentals

A structured engineering notes and firmware repository documenting how electronic components work from first principles—covering physics, circuit behavior, signal timing, and C/C++ implementations on **ESP32** and **Arduino**.

> **Author:** Gabriel — Computer Engineering & Systems Analysis and Development student at Universidade Veiga de Almeida (Brazil). Focused on embedded systems, hardware, automation, and robotics.

---

## Goals & Approach

Rather than treating hardware modules as black boxes, each folder in this repository breaks down:

1. **How It Works:** Physical principles, internal mechanics/electronics, and signal behavior.
2. **Wiring & Power Considerations:** Voltage levels, current draw, protection, and common ground practices.
3. **C/C++ Firmware:** Clean, readable code using hardware peripherals or explicit timing rather than opaque abstractions.
4. **Bench Verification:** Schematics, captures, and real-world observations.

---

## Repository Structure

```text
esp32-hardware-fundamentals/
├── README.md
├── .gitignore
└── 01-sg90-micro-servo/
    ├── README.md
    ├── docs/
    └── src/
