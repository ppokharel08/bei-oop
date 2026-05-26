//ii.Create a structure Patient with fields name, age, and disease. Input and display
//records for 3 patients using an array of structures.

#include <iostream>
using namespace std;


struct Patient {
    string name;
    int age;
    string disease;
};

int main() {
    Patient p[3];   

   
    for (int i = 0; i < 3; i++) {
        cout << "Enter details of patient " << i + 1 << endl;

        cout << "Name: ";
        cin >> p[i].name;

        cout << "Age: ";
        cin >> p[i].age;

        cout << "Disease: ";
        cin >> p[i].disease;
    }

 
    cout << "\nPatient Records:\n";

    for (int i = 0; i < 3; i++) {
        cout << "\nPatient " << i + 1 << endl;
        cout << "Name: " << p[i].name << endl;
        cout << "Age: " << p[i].age << endl;
        cout << "Disease: " << p[i].disease << endl;
    }

    return 0;
}