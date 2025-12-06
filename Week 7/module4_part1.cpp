#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "====== MENU ======\n";
    cout << "1. Add Item\n";
    cout << "2. View Items\n";
    cout << "3. Exit\n";
    cout << "Choose an option: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Item added!\n";
    }
    else if (choice == 2) {
        cout << "Displaying items...\n";
    }
    else if (choice == 3) {
        cout << "Exiting...\n";
    }
    else {
        cout << "Invalid option.\n";
    }

    return 0;
}
