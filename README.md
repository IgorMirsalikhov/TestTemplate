# TestTemplate
Design a program to manage the balance of a sample wallet. The starting balance is $150.75.

Note:
- Ensure dollar amounts are displayed with 2 points of decimal precision.
- Submit your source code (.c) as a separate file.
- Capture snapshots of your code execution. Attach these outputs in a Word or PDF document.

Instructions:
1. Display the initial balance of the wallet to the user.
2. A prompt should ask the user if they want to add funds (denoted by the character 'A') or spend funds (denoted by the character 'S') from the wallet.
3. The user should then be prompted for the amount of money they wish to add or spend.
4. Update the wallet balance based on the user's input.
5. Display the updated balance to the user.
6. If the user is spending money and the amount is greater than the current balance, display the message: "Insufficient funds! Please reconsider your spending amount."

Example (add funds):
Current Balance: $150.75
Do you want to Add (A) or Spend (S) funds? A
Enter the amount: $20.25
Updated Balance: $171.00

Example (spend funds):
Current Balance: $150.75
Do you want to Add (A) or Spend (S) funds? S
Enter the amount: $155.00
Insufficient funds! Please reconsider your spending amount.

