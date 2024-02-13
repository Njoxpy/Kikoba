#include <iostream>
#include <string>
#include "Account.h"
#include "Account.cpp"

using namespace std;

int main()
{
    Account account;

    string name;
    cout << "Hello Welcome to Kikobar!" << endl;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Here are the list of services we are offering: " << endl;
    cout << "1. Create account: " << endl;
    cout << "2. Deposit money: " << endl;
    cout << "3. Withdrawing Money: " << endl;
    cout << "4. Checking Account Balance: " << endl;
    cout << "4. Checking Account Balance: " << endl;
    cout << "5. Getting account information: " << endl;
    cout << "6. Exiting..." << endl;

    int choice;

    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        account.createAccount();
        break;
    case 2:
        account.deposit();
        break;
    case 3:
        account.withdraw();
        break;
    case 4:
        account.getBalance();
        break;
    case 5:
        account.displayAccountInformation();
        break;
    case 6:
        account.exitProgram();
        break;
    default:
        cout << "Invalid selection" << endl;
        break;
    }
    return 0;
}
