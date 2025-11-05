#include <iostream>
using namespace std;
int main() {
    int choice;
    do {
        cout << "1. Option 1" << endl;
        cout << "2. Option 2" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Arslan" << endl;
        } 
        else if (choice == 2) {
            cout << "Obaid" << endl;
        } 
        else if (choice == 3) {
            cout << "Bye Bye" << endl;
        } 
        else {
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);
    return 0;
}
