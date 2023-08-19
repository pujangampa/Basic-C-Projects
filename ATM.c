#include <stdio.h>

// Initial balance
double balance = 0;

// Function to display the main menu
void displayMenu() {
    printf("\nATM Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Make Deposit\n");
    printf("3. Make Withdrawal\n");
    printf("4. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int choice;
    
    printf("Welcome to the ATM!\n");
    
    while (1) {
        displayMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Your balance: $%.2lf\n", balance);
                break;
                
            case 2:
                printf("Enter amount to deposit: ");
                double depositAmount;
                scanf("%lf", &depositAmount);
                
                if (depositAmount > 0) {
                    balance += depositAmount;
                    printf("Deposit successful. Your new balance: $%.2lf\n", balance);
                } else {
                    printf("Invalid amount for deposit.\n");
                }
                break;
                
            case 3:
                printf("Enter amount to withdraw: ");
                double withdrawalAmount;
                scanf("%lf", &withdrawalAmount);
                
                if (withdrawalAmount > 0 && withdrawalAmount <= balance) {
                    balance -= withdrawalAmount;
                    printf("Withdrawal successful. Your new balance: $%.2lf\n", balance);
                } else {
                    printf("Insufficient funds or invalid withdrawal amount.\n");
                }
                break;
                
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
                
            default:
                printf("Invalid choice.\n");
        }
    }
    
    return 0;
}
