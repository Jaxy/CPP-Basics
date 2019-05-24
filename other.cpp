#include <iostream>
using namespace std;

int main() {
    bool boolValue = true;
    char charValue = '7';
    cout << "Size of Bool: " << sizeof(bool) << "\t\tBool var: " << boolValue << endl;
    cout << "Size of Char: " << sizeof(char) << "\t\tChar val: " << charValue << "\tCasting to int: " << (int)charValue << endl;
    return 0;
}