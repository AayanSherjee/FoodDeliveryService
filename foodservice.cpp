#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice, order, quantity;
    char delivery, confirm;
    string address, payment;
    string category;


    cout << "Our Restaurant's Menu:\n";
    cout << "1. Appetizers\n";
    cout << "2. Mains\n";
    cout << "3. Desserts\n";
    cout << "4. Beverages\n";
    cout << "Enter the number corresponding to your choice (1-4): ";
    cin >> choice;

    cin.ignore();

    if (choice < 1 || choice > 4) {
        cout << "Invalid choice." << endl;
        return 1;  
    }

    switch (choice) {
        case 1: category = "Appetizer"; break;
        case 2: category = "Main"; break;
        case 3: category = "Dessert"; break;
        case 4: category = "Beverage"; break;
    }

    cout << "Items in Category " << choice << ": \n";
    cout << "1. " << category << " 1\n";
    cout << "2. " << category << " 2\n";
    cout << "3. " << category << " 3\n";
    cout << "Enter your choice (1-3): ";
    cin >> order;

    if (order < 1 || order > 3) {
        cout << "Invalid Choice." << endl;
        return 1;  
    }

    cout << "Enter quantity (1-10): ";
    cin >> quantity;

    if (quantity < 1 || quantity > 10) {
        cout << "Invalid quantity." << endl;
        return 1;  
    }

    cout << "Choose Delivery (D) or Pickup (P): ";
    cin >> delivery;

    if (delivery != 'D' && delivery != 'P' && delivery != 'd' && delivery != 'p') {
        cout << "Invalid choice for delivery." << endl;
        return 1; 
    }

    cout << "Enter Delivery Address: ";
    cin.ignore(); 
    getline(cin, address);

    cout << "Choose Payment Method (Cash, Credit Card, Online Payment): ";
    getline(cin, payment);

    if (payment != "Cash" && payment != "cash" && payment != "Credit Card" &&
        payment != "credit card" && payment != "Online Payment" && payment != "online payment" && payment != "Online" 
        && payment != "online") {
        cout << "Invalid payment method." << endl;
        return 1;  
    }

    cout <<"\n";
    cout << "ORDER SUMMARY: \n";
    cout << category << " " << order << " x" << quantity << endl;
    cout << "Delivery Option: " ;
    if (delivery == 'D' || delivery == 'd'){
        cout << "Delivery" << endl;
    }
     if (delivery == 'P' || delivery == 'p'){
        cout << "Pickup" << endl;
    }
    cout << "Delivery Address: " << address << endl;
    cout << "Payment Method: " << payment << endl;

    cout << "Confirm Order (Y/N): ";
    cin >> confirm;

    if (confirm == 'y' || confirm == 'Y') {
        cout << "Order confirmed. Thank You!" << endl;
    } else if (confirm == 'n' || confirm == 'N') {
        cout << "Order canceled." << endl;
    } else {
        cout << "Invalid choice." << endl;
        return 1;  
    }

    return 0;
}
