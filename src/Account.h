#include <string>
#ifndef ACCOUNT_H
#define ACCOUNT_H

// create account class
class Account
{
public:
    /* Account class should have the following properties
    1. account number(int)
    2. acccount holder name(string)
    3. account type(string)
    4. account balance(int)
    */
    int accountNumber;
    string accountHolderName;
    string accountType;
    double accountBalance;

    /* Account class should have the following methods
    1. creating accounts(void)
    2. deposit money(double)
    3. withdrawing money(double)
    4. checking account balance(double)
    */
    void deposit();
    void withdraw();
    void getBalance();
    void displayAccountInformation();
    void createAccount();
    void exitProgram();

protected:
private:
};

#endif // ACCOUNT_H
