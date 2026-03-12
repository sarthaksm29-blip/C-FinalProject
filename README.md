# Shopping Cart Billing System

## Overview

The **Shopping Cart Billing System** is a console-based application developed in **C++** that simulates the billing process used in retail stores. The program allows users to enter item names, prices, and quantities, calculates the subtotal for each item, applies **18% GST**, and generates a formatted invoice. This project demonstrates the practical use of core C++ programming concepts such as loops, variables, arithmetic operations, and formatted output.

---

## Features

* Accepts multiple items from the user
* Calculates subtotal for each item (price × quantity)
* Maintains a running total of all items
* Automatically applies **18% GST**
* Generates a clean and formatted console invoice
* Uses **iomanip formatting** for aligned output

---

## Technologies Used

* **Language:** C++
* **Libraries:**

  * `<iostream>` – input/output operations
  * `<iomanip>` – formatted console output
  * `<string>` – handling item names
* **Compiler:** GCC / G++
* **IDE (optional):** Visual Studio Code / Code::Blocks / Dev-C++

---

## File Structure

```
ShoppingCartBillingSystem
│
├── billing.cpp              # Main C++ source code
├── README.md                # Project documentation
├── CaseStudyReport.docx     # Case study report
└── Presentation.pptx        # Project presentation slides
```

---

## How the Program Works

1. The program asks the user to enter the **number of items**.
2. For each item, the user inputs:

   * Item name
   * Price
   * Quantity
3. The program calculates the **subtotal** for each item.
4. All subtotals are added to obtain the **total amount**.
5. The program applies **18% GST** to the total.
6. A formatted **invoice** is displayed with the final bill amount.

---

## Example Output

```
=====================================
       SHOPPING CART BILLING SYSTEM
=====================================

Enter number of items: 3

Item Name             Price     Qty     Subtotal
------------------------------------------------------
Rice                  50        1       50
Wheat                 70        2       140
Sugar                 40        1       40

------------------------------------------------------
Subtotal: 230
GST (18%): 41.4
------------------------------------------------------
FINAL BILL: 271.4
=====================================
```

---

## Learning Outcomes

This project helped in understanding:

* C++ program structure
* Input and output operations (`cin` / `cout`)
* Loop implementation using `for`
* Arithmetic calculations in programming
* Formatted console output using `iomanip`
* Translating a real-world billing process into code

---

## Student Information

**Name:** Sarthak Mhatre
**Roll Number:** 150096725214
**Course:** B.Tech Computer Science & Engineering
**University:** ITM Skills University
**Academic Year:** 2025–2026

---

## Conclusion

The Shopping Cart Billing System demonstrates how basic C++ programming concepts can be used to solve real-world problems such as retail billing. The project successfully implements item processing, tax calculation, and formatted invoice generation in a simple console-based application.
