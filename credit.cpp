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
