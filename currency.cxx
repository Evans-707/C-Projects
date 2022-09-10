#include <iostream>
#include <iomanip>
using namespace std;

// Variables that are being declared here since they are needed in the function below
double newAmount;
double currency;
int choice = 1;


void menu() {
    // displays menu while checking for user input
    while (choice != 0) {
    cout << "Select a currency to convert from US Dollar (USD):" << endl;
    cout << " 1 Japanese Yen (JPY)" << endl;
    cout << " 2 Mexican Peso (MXN)" << endl;
    cout << " 3 Indian Rupee (INR)" << endl;
    cout << " 4 British Pound Sterling (GBP)" << endl;
    cout << " 0 Quit " << endl;
    cout << "Select an option (0 to 4): ";
    cin >> choice;
    // prompts user for USD amount then checks to see if that amount is in which range to add rate value
    if (choice > 0) {
        double amount;
        cout << "Enter USD amount: ";
        cin >> amount;
        if (amount <= 100) {
            newAmount = amount + 3.99;
            cout << "Amount Due: " << newAmount << " USD\n";}
        if (amount > 1000) {
            newAmount = amount + 14.99;
            cout << "Amount Due: " << newAmount << " USD\n";}
        if (amount > 100 && amount <= 1000) {
            newAmount = amount + 7.99;
            cout << "Amount Due: " << newAmount << " USD\n";}
        // checks user input and then based on 1-4 itll convert user amount by the currency they are wanting
        if (choice == 1) {
            currency = newAmount * 139.59;
            cout << fixed << setprecision(2);
            cout << "Amount Recieved: " << currency << " JPY\n";
            }
    
        if (choice == 2) {
            currency = newAmount * 20.21;
            cout << fixed << setprecision(2);
            cout << "Amount Recieved: " << currency << " MXN\n";
            }

        if (choice == 3) {
            currency = newAmount * 79.55;
            cout << fixed << setprecision(2);
            cout << "Amount Recieved: " << currency << " INR\n";
            }

        if (choice == 4) {
            currency = newAmount * 0.86;
            cout << fixed << setprecision(2);
            cout << "Amount Recieved: " << currency << " GBP\n";
            }
        }
    }
}

// main function that calls functions
int main() {
    menu();
    return 0;
}
