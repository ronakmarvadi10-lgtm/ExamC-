#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string ownerName;
    double balance;

public:
    void setAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Owner Name: ";
        cin >> ownerName;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void credit(double amount)
    {
        balance = balance + amount;
        cout << "Amount Credited: " << amount << endl;
    }

    void debit(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount Debited: " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }

    void displayBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc;
 acc.setAccount();

      acc.credit(1000);
     acc.debit(500);
      acc.displayBalance();
}