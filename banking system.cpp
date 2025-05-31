#include <iostream>
using namespace std;

class BankUser {
public:
    string name;
    int accountNumber;
    double balance;

    BankUser() {
        name = "";
        accountNumber = 0;
        balance = 0.0;
    }

    void createAccount(string n, int accNum, double initialBalance) {
        name = n;
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << name << " deposited $" << amount << ". New balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << name << " withdrew $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << name << " has insufficient balance!" << endl;
        }
    }

    void FDR(double amount, int years) {
        double rate = 0.08;
        double result = amount + (amount * rate * years);
        cout << name << "'s FDR after " << years << " years: $" << result << endl;
    }

    void DPS(double monthly, int months) {
        double rate = 0.06;
        double total = monthly * months;
        double interest = total * rate;
        cout << name << "'s DPS after " << months << " months: $" << total + interest << endl;
    }

    void show() {
        cout << "Name: " << name << ", Account No: " << accountNumber << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankUser users[10];

    users[0].createAccount("Alice", 101, 1000);
    users[1].createAccount("Bob", 102, 2000);
    users[2].createAccount("Charlie", 103, 1500);
    users[3].createAccount("David", 104, 1200);
    users[4].createAccount("Eva", 105, 1800);
    users[5].createAccount("Frank", 106, 1600);
    users[6].createAccount("Grace", 107, 2200);
    users[7].createAccount("Hannah", 108, 2500);
    users[8].createAccount("Ivy", 109, 1400);
    users[9].createAccount("Jack", 110, 1700);

    users[0].deposit(500);
    users[1].withdraw(300);
    users[2].FDR(1000, 3);
    users[3].DPS(200, 12);

    for (int i = 0; i < 10; i++) {
        users[i].show();
    }

    return 0;
}
