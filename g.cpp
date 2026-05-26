//Define a structure Expense with fields description, amount, and category. Write a
//program using functions:
//addExpense(Expense expenses[], int &count) to add an
//expense.totalByCategory(Expense expenses[], int count, string category) to calculate
//total expenses for a specific category.

#include <iostream>
using namespace std;


struct Expense {
    string description;
    float amount;
    string category;
};


void addExpense(Expense expenses[], int &count) {
    cout << "Enter description: ";
    cin >> expenses[count].description;

    cout << "Enter amount: ";
    cin >> expenses[count].amount;

    cout << "Enter category: ";
    cin >> expenses[count].category;

    count++;
}


float totalByCategory(Expense expenses[], int count, string category) {
    float total = 0;

    for (int i = 0; i < count; i++) {
        if (expenses[i].category == category) {
            total += expenses[i].amount;
        }
    }

    return total;
}

int main() {
    Expense expenses[10];
    int count = 0;
    string searchCategory;


    addExpense(expenses, count);
    addExpense(expenses, count);
    addExpense(expenses, count);

    cout << "\nEnter category to find total expense: ";
    cin >> searchCategory;

    cout << "Total expense in "
         << searchCategory << " = "
         << totalByCategory(expenses, count, searchCategory);

    return 0;
}