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
