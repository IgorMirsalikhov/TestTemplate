# Problem 1
Design a program to manage the balance of a sample wallet. 

### Note:
- The starting balance is $150.75.
- Ensure dollar amounts are displayed with 2 points of decimal precision. Use the following conversion specifier `"%.2f"`

### Instructions:
0. Go to `problem_1` folder and modify `p1.c` file.
1. Display the initial balance of the wallet to the user.
2. A prompt should ask the user if they want to add funds (denoted by the character 'A') or spend funds (denoted by the character 'S') from the wallet.
3. The user should then be prompted for the amount of money they wish to add or spend.
4. Update the wallet balance based on the user's input.
5. Display the updated balance to the user.
6. If the user is spending money and the amount is greater than the current balance, display the message: "Insufficient funds! Please reconsider your spending amount."


### Sample run 1:
<img width="560" alt="p1_out3" src="https://github.com/user-attachments/assets/5e8c3a0e-e97c-4a32-858f-353f1321d6b7" />

### Sample run 2:
<img width="717" alt="p1_out2" src="https://github.com/user-attachments/assets/56f02557-0455-4519-90ab-151112e3ff6c" />

### Sample run 3:
<img width="562" alt="p1_out1" src="https://github.com/user-attachments/assets/1bc65e4c-2afa-4a3c-9ecd-a27d4d81d30e" />

# Problem 2 

### Problem Description
This program determines the most suitable outdoor activity based on the current temperature. The user is prompted to input the temperature, and the program then suggests an activity according to the following rules:

- If the temperature is **80 degrees or higher**, the suggested activity is **Swimming**.
- If the temperature is **between 60 and 79 degrees** (inclusive), the suggested activity is **Soccer**.
- If the temperature is **between 40 and 59 degrees** (inclusive), the suggested activity is **Volleyball**.
- If the temperature is **below 40 degrees**, the suggested activity is **Skiing**.

### How It Works
1. The program prompts the user to enter the temperature.
2. The input is read and stored in the `temp` variable.
3. A series of conditional statements (`if-else, else if`) determines which activity to recommend based on the entered temperature.
4. The program then prints the corresponding activity to the console.

### Instructions:
0. Go to `problem_2` folder and modify `p2.c` file.

### Sample run 1:
<img width="398" alt="Screenshot 2025-01-30 at 10 06 28 PM" src="https://github.com/user-attachments/assets/406523e4-c589-4b2d-b2ff-a8c3ae007887" />

### Sample run 2:
<img width="395" alt="Screenshot 2025-01-30 at 10 06 20 PM" src="https://github.com/user-attachments/assets/3c75d7b2-a7ac-4acb-9772-0254cdbd3280" />

### Sample run 3:
<img width="402" alt="Screenshot 2025-01-30 at 10 06 12 PM" src="https://github.com/user-attachments/assets/2340ca12-9d38-4c63-9026-c2088d93aef2" />

# Problem 3

### Task Description
Write a C function that converts a temperature given in degrees Fahrenheit to the Kelvin scale. The program should:
- Accept an integer input representing the temperature in Fahrenheit.
- Use a function to perform the conversion.

### Instructions:
0. Go to `problem_3` folder and modify `p3.c` file.
1. **IMPORTANT!** Submit only the function implementation. Do not submit the `main` function.
   
### Function Prototype
```c
double fahrenheitToKelvin(int fahrenheit);
```

### Conversion Formula
To convert Fahrenheit to Kelvin, use the following formula:

$`K = \frac{(F - 32) \times 5}{9} + 273.15`$

Where:
- **F** is the temperature in degrees Fahrenheit.
- **K** is the temperature in Kelvin.

