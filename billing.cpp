#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, quantity;
    string item;
    float price, total = 0, subtotal;

    cout << "=====================================\n";
    cout << "       SHOPPING CART BILLING SYSTEM\n";
    cout << "=====================================\n\n";

    cout << "Enter number of items: ";
    cin >> n;

    cout << "\n-------------------------------------\n";
    cout << left << setw(15) << "Item"
         << setw(10) << "Price"
         << setw(10) << "Qty"
         << setw(10) << "Total" << endl;
    cout << "-------------------------------------\n";

    for(int i = 1; i <= n; i++) {
        cout << "\nEnter Item " << i << " Name: ";
        cin >> item;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;

        subtotal = price * quantity;
        total += subtotal;

        cout << left << setw(15) << item
             << setw(10) << price
             << setw(10) << quantity
             << setw(10) << subtotal << endl;
    }

    float gst = total * 0.18;
    float finalBill = total + gst;

    cout << "\n-------------------------------------\n";
    cout << "Subtotal: " << total << endl;
    cout << "GST (18%): " << gst << endl;
    cout << "-------------------------------------\n";
    cout << "FINAL BILL: " << finalBill << endl;
    cout << "=====================================\n";

    return 0;
}