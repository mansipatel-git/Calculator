# Simple Calculator Program

This program is a command-line-based calculator built in C, allowing users to perform basic arithmetic operations and other functions like modulus, power, and square root. It offers a simple menu interface to guide users through the available operations.

## Table of Contents
- [Features](#features)
- [Operations](#operations)
- [How to Use](#how-to-use)
- [Code Structure](#code-structure)
- [Example Usage](#example-usage)

---

## Features

- **Addition, Subtraction, Multiplication, and Division**: Perform basic arithmetic operations.
- **Modulus Operation**: Computes the remainder when one integer is divided by another.
- **Power Function**: Calculates one number raised to the power of another.
- **Square Root Calculation**: Computes the square root of a non-negative number.
- **Exit Option**: Allows the user to end the program.

---

## Operations

1. **Addition**
2. **Subtraction**
3. **Multiplication**
4. **Division**
5. **Modulus**
6. **Power**
7. **Square Root**
8. **Exit**

---

## How to Use

1. Run the program from a terminal or command prompt.
2. The program will display a menu with numbered options corresponding to each operation.
3. Enter the number for the desired operation, then input the required numbers when prompted.
4. The program will display the result or an error message (e.g., division by zero).
5. Continue selecting operations or choose "8" to exit the program.

---

## Error Handling

 **Division by Zero**
 If the user tries to divide by zero, an error message is displayed.
 **Square Root of Negative Number**
 Attempting to compute the square root of a negative number results in an error message.

---

## License
This program is open-source and available under the MIT License.

## Code Structure

The code includes the following main components:

- **Header Files**: 
  - `<stdio.h>`: For input/output functions.
  - `<math.h>`: For advanced mathematical functions (`pow` and `sqrt`).
  
- **Function Declarations**: Declares the functions for all calculator operations.
  
- **Main Function**:
  - A `while` loop that displays the menu and handles user input.
  - Switch case structure to process each calculator operation based on the user’s choice.

- **Helper Functions**:
  - `display_menu()`: Prints the calculator menu.
  - Arithmetic functions (`add`, `subtract`, `multiply`, `divide`) and special operations (`modulus`, `power`, `square_root`) are implemented as separate functions for modularity and readability.

---

## Example Usage

Here’s an example of how the program runs:

```--- Calculator Menu ---

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Exit Choose an operation:
example  -  1 Enter two numbers: 5.5 3.2 Result: 8.70
```
