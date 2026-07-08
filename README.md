# Nosh Robotics Embedded Firmware Assignment

This repository contains my solutions for the Nosh Robotics Embedded Firmware Assignment.

## Contents

### Question 1 - STM32 LED Driver

Location:
```
Q1_STM32/main.c
```

Implemented functions:
- GPIO_Init()
- LED_On()
- LED_Off()
- LED_Toggle()

Features:
- Modular firmware
- Simple GPIO abstraction
- Readable Embedded C code
- Easy to port to STM32 HAL

---

### Question 2 - Missing Number in Array

Location:
```
Q1_STM32/Q2_C/main.c
```

Algorithm:
- Calculate expected sum
- Calculate actual array sum
- Missing Number = Expected Sum - Actual Sum

Complexity:
- Time Complexity: O(n)
- Space Complexity: O(1)

---

## Design Notes

Refer to:

```
DESIGN.md
```

This document explains:
- Design decisions
- Algorithm
- Complexity
- Coding practices

---

## Repository Structure

```
Embedded_Assignment/
│
├── README.md
├── DESIGN.md
└── Q1_STM32/
    ├── main.c
    └── Q2_C/
        └── main.c
```

---

## Author

**Amrutha V**
