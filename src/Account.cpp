#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

void Account::createAccount()
{
    /*
1. Write code to prompt the user to enter their account number and the amount to withdraw.
2. Find the account with the given account number.
3. Check if the account has sufficient balance to cover the withdrawal.
If yes, update the balance of the account by subtracting the withdrawn amount.
If no, display an error message.
4. Display a confirmation message if the withdrawal is successful.

*/

    // declare variables for account number and deposit amount
    int accountNumber;
    double withdrawAmount;

    // prompt user to enter account number
    cout << "Enter account number: ";
    cin >> accountNumber;

    // prompt user to enter deposit amount
    cout << "Enter withdraw amount: ";
    cin >> withdrawAmount;

    cout << "You have withdrawed Tsh " << withdrawAmount;
    /* find the account with the given account number */
}

void Account::withdraw()
{
    /*
1. Write code to prompt the user to enter their account number and the amount to withdraw.
2. Find the account with the given account number.
3. Check if the account has sufficient balance to cover the withdrawal.
If yes, update the balance of the account by subtracting the withdrawn amount.
If no, display an error message.
4. Display a confirmation message if the withdrawal is successful.

*/

    // declare variables for account number and deposit amount
    int accountNumber;
    double withdrawAmount;

    // prompt user to enter account number
    cout << "Enter account number: ";
    cin >> accountNumber;

    // prompt user to enter deposit amount
    cout << "Enter withdraw amount: ";
    cin >> withdrawAmount;

    cout << "You have withdrawed Tsh " << withdrawAmount;
    /* find the account with the given account number */
}

void Account::getBalance()
{
    /*
1. Write code to prompt the user to enter their account number.
accountNumber (integer)
2. Find the account with the given account number.
3. Display the current balance of the account
*/
}

void Account::displayAccountInformation()
{
    /* Display accont information should have the following things
1. Display account name, password, age , sex and amount present
*/
    string accountName;
    cout << "Enter account: ";
    cin >> accountName;

    cout << "Your account is: " << accountName;
}

void Account::deposit()
{
    /*
Deposit functionality
1. Write codeto prompt user to enter account number and deposit amount
account number(int)
deposit amount(int)
2. Find the account with the given account number
3. Update the balance of the account by adding the deposited amount
4. Display the confirmation message
*/

    // declare variables for account number and deposit amount
    int accountNumber;
    double depositAmount;

    // prompt user to enter account number
    cout << "Enter account number: ";
    cin >> accountNumber;

    // prompt user to enter deposit amount
    cout << "Enter deposit amount: ";
    cin >> depositAmount;

    cout << "You have deposited " << depositAmount;
    /* find the account with the given account number */
}

void Account::exitProgram()
{
    exit(0);
}