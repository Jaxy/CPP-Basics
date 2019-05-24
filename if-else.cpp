#include <iostream>
using namespace std;

int main() {
    string password = "hello";
    cout << "1. \tOption 1" << endl;
    cout << "2. \tOption 2" << endl;
    cout << "3. \tOption 3" << endl;
    int input;
    cout << "Enter your selection: " << flush;
    cin >> input;
    if (input == 1) {
        cout << "Option 1 selected" << endl;
    }
    else if (input == 2) {
        cout << "Option 2 selected" << endl;
    }
    else if (input == 3) {
        cout << "Option 3 selected" << endl;
    }
    else {
        cout << "Invalid selection" << endl;
    }
    return 0;
}