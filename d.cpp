//iv. Write a function calculateBill(Item i) that takes a structure Item (name, price) and
//returns the total bill with a 10% tax. Test it with one item.

#include <iostream>
using namespace std;


struct Item {
    string name;
    float price;
};


float calculateBill(Item i) {
    return i.price + (0.10 * i.price);
}

int main() {
    Item i;

    cout << "Enter item name: ";
    cin >> i.name;

    cout << "Enter item price: ";
    cin >> i.price;

  
    cout << "Total bill with 10% tax = "
         << calculateBill(i);

    return 0;
}