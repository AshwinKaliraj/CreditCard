#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Customer {
    string name;
    string cardNumber;
    double balance;
};

vector<Customer> customerDB = {
    {"Virat", "18", 5000.0},
    {"MSD", "7", 20000.0},
    {"Hardik", "33", 1000.0}
};
bool cardValidation(string &cardNumber, double amount) {
    cout << "\nPayment verified by card network" << endl;

    for (auto &c : customerDB) {
        if (c.cardNumber == cardNumber) {
            cout << "Card is valid" << endl;
            if (c.balance >= amount) {
                cout << "Funds available" << endl;
                cout << "Payment verified by bank" << endl;
                return true;
            } else {
                cout << "Insufficient funds" << endl;
                return false;
            }
        }
    }
    cout << "Invalid card" << endl;
    return false;
}
void accountValidity(string cardNumber, double amount) {
    for (auto &c : customerDB) {
        if (c.cardNumber == cardNumber) {
            cout << "Account is valid" << endl;
            c.balance -= amount;
            cout << "Transaction complete" << endl;
            cout << "Customer DB updated" << endl;
            cout << "Card holder will receive statement at the end of the cycle" << endl;
        }
    }
}
int main() {
    string cardNumber;
    double amount;

    cout << "Enter card number: ";
    cin >> cardNumber;
    cout << "Enter amount: ";
    cin >> amount;

    while (!cardValidation(cardNumber, amount)) {
        cout << "\nTry again\n";
        cout << "Enter card number: ";
        cin >> cardNumber;
        cout << "Enter amount: ";
        cin >> amount;
    }

    accountValidity(cardNumber, amount);

    return 0;
}
