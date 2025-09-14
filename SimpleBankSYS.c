#include <stdio.h>
#define CHECK_BALANCE 1
#define DEPOSIT 2
#define WITHDRAW 3

int main() {
	int account , operation;
	double balance = 1000;
	float amount;
	int choice;

  // Prompt user for banking operation choice

  printf("Enter the banking operation (1: Check Balance, 2: Deposit, 3: Withdraw): ");

  scanf("%d", &choice);



  // Perform the banking operation based on the user's choice

  if (choice == CHECK_BALANCE) {

    printf("Your current balance is: $%.2f\n", balance);

  } else if (choice == DEPOSIT) {

    printf("Enter the amount to deposit: ");

    scanf("%f", &amount);

    balance += amount;

    printf("Your new balance is: $%.2f\n", balance);

  } else if (choice == WITHDRAW) {

    printf("Enter the amount to withdraw: ");

    scanf("%f", &amount);

    if (amount > balance) {

      printf("Insufficient balance.\n");

    } else {

      balance -= amount;

      printf("Your new balance is: $%.2f\n", balance);

    }

  } else {

    printf("Invalid operation entered.\n");

  }



  return 0;

}
