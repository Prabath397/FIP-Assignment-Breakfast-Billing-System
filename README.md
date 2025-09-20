\# Meal Hut - Breakfast Billing System



A C++ console application designed to automate the breakfast billing process for the "Meal Hut" restaurant. This program allows customers to view the menu, select multiple items, and generates a detailed bill including tax.



\## 📋 Table of Contents



\- \[Project Overview](#-project-overview)

\- \[Features](#-features)

\- \[Menu](#-menu)

\- \[How to Use](#-how-to-use)

\- \[System Requirements \& Design](#-system-requirements--design)

\- \[Modular Design \& Functions](#-modular-design--functions)

\- \[Technical Implementation](#-technical-implementation)

\- \[Testing](#-testing)

\- \[Installation \& Compilation](#-installation--compilation)



---



\## 🎯 Project Overview



This project was developed as part of the \*\*CSE4002 - Fundamentals in Programming\*\* module. The main objective is to replace the manual cash book system with a fast, reliable, and user-friendly software solution that calculates bills accurately, including a 5% tax.



\## ✨ Features



\*   \*\*User-Friendly Menu:\*\* Displays all available breakfast items with their codes and prices.

\*   \*\*Multi-Item Ordering:\*\* Allows customers to select multiple items in a single order.

\*   \*\*Input Validation:\*\* Checks for invalid item numbers during ordering.

\*   \*\*Automatic Tax Calculation:\*\* Calculates a 5% tax on the subtotal.

\*   \*\*Detailed Receipt:\*\* Prints a clear and formatted bill listing all items, the tax amount, and the total amount due.

\*   \*\*Menu-Driven Interface:\*\* Provides an intuitive loop for the user to navigate between viewing the menu, ordering, and printing the bill.



\## 📖 Menu



The restaurant offers the following items:

| Item No | Menu Item     | Price |

| :------ | :------------ | :---- |

| 111     | Plain Egg     | $1.45 |

| 112     | Bacon and Egg | $2.45 |

| 113     | Muffin        | $0.99 |

| 114     | French Toast  | $1.99 |

| 115     | Fruit Basket  | $2.49 |

| 116     | Cereal        | $0.69 |

| 117     | Coffee        | $0.50 |

| 118     | Tea           | $0.75 |



\## 🖱️ How to Use



1\.  Upon running the program, you will be greeted with a main menu.

2\.  \*\*Select Option 1:\*\* `Show Menu` to view the available items.

3\.  \*\*Select Option 2:\*\* `Order Items` to begin your order.

&nbsp;   \*   Enter the item number for each item you wish to purchase.

&nbsp;   \*   Type `-1` and press Enter when you are finished ordering.

&nbsp;   \*   The system will alert you if you enter an invalid item number.

4\.  \*\*Select Option 3:\*\* `Print Bill` to generate and view your receipt. The bill will show all selected items, the calculated tax (5%), and the final amount due.

5\.  \*\*Select Option 4:\*\* `Exit` to close the application.



\## ⚙️ System Requirements \& Design



\*   \*\*Assumptions:\*\*

&nbsp;   \*   The menu is fixed and pre-defined within the program.

&nbsp;   \*   A 5% sales tax is applied to the total cost of the order.

&nbsp;   \*   The program runs in a console/terminal environment.

\*   \*\*Design:\*\* The system was designed using a top-down approach with flowcharts for core functions (`getData`, `showMenu`, `printCheck`) to ensure logical flow and reduce complexity. The design emphasizes modularity and data passing between functions.



\## 🧩 Modular Design \& Functions



The program is structured into several functions for clarity and maintainability:

\*   `main()`: Acts as the program controller, displaying the main menu and handling user navigation.

\*   `getData(MenuItem\[], int\&)`: Initializes the array of `MenuItem` structures with the restaurant's menu data.

\*   `showMenu(const MenuItem\[], int)`: Displays the formatted menu to the user.

\*   `printCheck(const MenuItem\[], int, int\[], int)`: Calculates the subtotal, tax, and total, then prints the final bill.



\## 💻 Technical Implementation



\*   \*\*Language:\*\* C++

\*   \*\*Data Structures:\*\* Utilizes an array of `struct` to efficiently store and manage menu data (Item Number, Name, Price).

\*   \*\*Control Structures:\*\*

&nbsp;   \*   \*\*Sequence:\*\* The logical flow of function calls.

&nbsp;   \*   \*\*Selection:\*\* `switch` statement for the main menu and `if-else` statements for input validation.

&nbsp;   \*   \*\*Repetition:\*\* `do-while` loop for the main menu and a `while` loop for continuous item input.

\*   \*\*Data Passing:\*\* Data is passed between modules (functions) using parameters. Arrays are passed by reference, and sizes are passed by value or reference as needed to maintain data integrity.

\*   \*\*Storage:\*\* The menu is stored in-memory using an array of structures for fast access. For a persistent storage solution (e.g., saving order history), file handling (`fstream`) would be the next step.



\## 🧪 Testing



A comprehensive test plan was executed to ensure system reliability:

\*   \*\*Unit Testing:\*\* Each function (`showMenu`, order logic, `printCheck`) was tested individually.

\*   \*\*Integration Testing:\*\* The flow between selecting items and generating a bill was verified.

\*   \*\*User Acceptance Testing (UAT):\*\* The program was tested against the initial requirements to ensure it meets the restaurant's needs for speed and accuracy.

\*   \*\*Test Cases included:\*\*

&nbsp;   \*   Ordering a single valid item.

&nbsp;   \*   Ordering multiple valid items.

&nbsp;   \*   Entering an invalid item number (handled gracefully).

&nbsp;   \*   Attempting to print a bill with no items selected (handled gracefully).

&nbsp;   \*   Verifying correct tax and total calculations.



\## 🔧 Installation \& Compilation



1\.  \*\*Ensure you have a C++ compiler\*\* (e.g., GCC for Linux, MinGW for Windows, or Xcode for macOS).

2\.  \*\*Clone or download\*\* the source code file (`main.cpp`) from this repository.

3\.  \*\*Compile the code\*\* using your compiler. For example, with GCC:

&nbsp;   ```bash

&nbsp;   g++ -o meal\_hut\_billing main.cpp

&nbsp;   ```

4\.  \*\*Run the executable:\*\*

&nbsp;   ```bash

&nbsp;   ./meal\_hut\_billing

&nbsp;   ```



---



\*\*Developer:\*\* \[Your Name]

\*\*Module:\*\* CSE4002 - Fundamentals in Programming

\*\*Academic Year:\*\* 2024, Semester 1# Meal Hut - Breakfast Billing System



A C++ console application designed to automate the breakfast billing process for the "Meal Hut" restaurant. This program allows customers to view the menu, select multiple items, and generates a detailed bill including tax.



\## 📋 Table of Contents



\- \[Project Overview](#-project-overview)

\- \[Features](#-features)

\- \[Menu](#-menu)

\- \[How to Use](#-how-to-use)

\- \[System Requirements \& Design](#-system-requirements--design)

\- \[Modular Design \& Functions](#-modular-design--functions)

\- \[Technical Implementation](#-technical-implementation)

\- \[Testing](#-testing)

\- \[Installation \& Compilation](#-installation--compilation)



---



\## 🎯 Project Overview



This project was developed as part of the \*\*CSE4002 - Fundamentals in Programming\*\* module. The main objective is to replace the manual cash book system with a fast, reliable, and user-friendly software solution that calculates bills accurately, including a 5% tax.



\## ✨ Features



\*   \*\*User-Friendly Menu:\*\* Displays all available breakfast items with their codes and prices.

\*   \*\*Multi-Item Ordering:\*\* Allows customers to select multiple items in a single order.

\*   \*\*Input Validation:\*\* Checks for invalid item numbers during ordering.

\*   \*\*Automatic Tax Calculation:\*\* Calculates a 5% tax on the subtotal.

\*   \*\*Detailed Receipt:\*\* Prints a clear and formatted bill listing all items, the tax amount, and the total amount due.

\*   \*\*Menu-Driven Interface:\*\* Provides an intuitive loop for the user to navigate between viewing the menu, ordering, and printing the bill.



\## 📖 Menu



The restaurant offers the following items:

| Item No | Menu Item     | Price |

| :------ | :------------ | :---- |

| 111     | Plain Egg     | $1.45 |

| 112     | Bacon and Egg | $2.45 |

| 113     | Muffin        | $0.99 |

| 114     | French Toast  | $1.99 |

| 115     | Fruit Basket  | $2.49 |

| 116     | Cereal        | $0.69 |

| 117     | Coffee        | $0.50 |

| 118     | Tea           | $0.75 |



\## 🖱️ How to Use



1\.  Upon running the program, you will be greeted with a main menu.

2\.  \*\*Select Option 1:\*\* `Show Menu` to view the available items.

3\.  \*\*Select Option 2:\*\* `Order Items` to begin your order.

&nbsp;   \*   Enter the item number for each item you wish to purchase.

&nbsp;   \*   Type `-1` and press Enter when you are finished ordering.

&nbsp;   \*   The system will alert you if you enter an invalid item number.

4\.  \*\*Select Option 3:\*\* `Print Bill` to generate and view your receipt. The bill will show all selected items, the calculated tax (5%), and the final amount due.

5\.  \*\*Select Option 4:\*\* `Exit` to close the application.



\## ⚙️ System Requirements \& Design



\*   \*\*Assumptions:\*\*

&nbsp;   \*   The menu is fixed and pre-defined within the program.

&nbsp;   \*   A 5% sales tax is applied to the total cost of the order.

&nbsp;   \*   The program runs in a console/terminal environment.

\*   \*\*Design:\*\* The system was designed using a top-down approach with flowcharts for core functions (`getData`, `showMenu`, `printCheck`) to ensure logical flow and reduce complexity. The design emphasizes modularity and data passing between functions.



\## 🧩 Modular Design \& Functions



The program is structured into several functions for clarity and maintainability:

\*   `main()`: Acts as the program controller, displaying the main menu and handling user navigation.

\*   `getData(MenuItem\[], int\&)`: Initializes the array of `MenuItem` structures with the restaurant's menu data.

\*   `showMenu(const MenuItem\[], int)`: Displays the formatted menu to the user.

\*   `printCheck(const MenuItem\[], int, int\[], int)`: Calculates the subtotal, tax, and total, then prints the final bill.



\## 💻 Technical Implementation



\*   \*\*Language:\*\* C++

\*   \*\*Data Structures:\*\* Utilizes an array of `struct` to efficiently store and manage menu data (Item Number, Name, Price).

\*   \*\*Control Structures:\*\*

&nbsp;   \*   \*\*Sequence:\*\* The logical flow of function calls.

&nbsp;   \*   \*\*Selection:\*\* `switch` statement for the main menu and `if-else` statements for input validation.

&nbsp;   \*   \*\*Repetition:\*\* `do-while` loop for the main menu and a `while` loop for continuous item input.

\*   \*\*Data Passing:\*\* Data is passed between modules (functions) using parameters. Arrays are passed by reference, and sizes are passed by value or reference as needed to maintain data integrity.

\*   \*\*Storage:\*\* The menu is stored in-memory using an array of structures for fast access. For a persistent storage solution (e.g., saving order history), file handling (`fstream`) would be the next step.



\## 🧪 Testing



A comprehensive test plan was executed to ensure system reliability:

\*   \*\*Unit Testing:\*\* Each function (`showMenu`, order logic, `printCheck`) was tested individually.

\*   \*\*Integration Testing:\*\* The flow between selecting items and generating a bill was verified.

\*   \*\*User Acceptance Testing (UAT):\*\* The program was tested against the initial requirements to ensure it meets the restaurant's needs for speed and accuracy.

\*   \*\*Test Cases included:\*\*

&nbsp;   \*   Ordering a single valid item.

&nbsp;   \*   Ordering multiple valid items.

&nbsp;   \*   Entering an invalid item number (handled gracefully).

&nbsp;   \*   Attempting to print a bill with no items selected (handled gracefully).

&nbsp;   \*   Verifying correct tax and total calculations.



\## 🔧 Installation \& Compilation



1\.  \*\*Ensure you have a C++ compiler\*\* (e.g., GCC for Linux, MinGW for Windows, or Xcode for macOS).

2\.  \*\*Clone or download\*\* the source code file (`main.cpp`) from this repository.

3\.  \*\*Compile the code\*\* using your compiler. For example, with GCC:

&nbsp;   ```bash

&nbsp;   g++ -o meal\_hut\_billing main.cpp

&nbsp;   ```

4\.  \*\*Run the executable:\*\*

&nbsp;   ```bash

&nbsp;   ./meal\_hut\_billing

&nbsp;   ```



---



\*\*Developer:\*\* Prabath Jayasuriya

\*\*Module:\*\* CSE4002 - Fundamentals in Programming

\*\*Academic Year:\*\* 2025, Semester 1

