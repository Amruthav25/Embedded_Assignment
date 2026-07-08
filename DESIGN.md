# Design Notes

## Question 1 - LED Toggle Firmware

### Objective
Blink an LED continuously.

### Approach
- Initialize GPIO
- Configure LED pin
- Toggle LED state
- Add software delay
- Repeat forever

### Functions
- GPIO_Init()
- LED_On()
- LED_Off()
- LED_Toggle()
- Delay()

---

## Question 2 - Missing Number

### Problem
Find the missing number in an array.

### Algorithm

Expected Sum = n(n+1)/2

Actual Sum = Sum of array elements

Missing Number = Expected Sum - Actual Sum

### Complexity

Time Complexity : O(n)

Space Complexity : O(1)

---

## Coding Practices

- Modular functions
- Readable naming
- Constant-time memory usage
- Embedded firmware style coding
