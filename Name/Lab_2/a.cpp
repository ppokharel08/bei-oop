//i.Write a program to store daily sales amounts (in an array) for a week (7 days).
//Calculate and display the total and average sales.

#include <iostream>
using namespace std;

int main() {
    float sales[7];
    float total = 0, average;

   
    cout << "Enter sales amount for 7 days:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> sales[i];
        total += sales[i];
    }

    
    average = total / 7;


    cout << "\nTotal sales = " << total;
    cout << "\nAverage sales = " << average;

    return 0;
}