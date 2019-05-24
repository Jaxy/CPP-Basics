#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int num = 9;
    long int longNum = 12345678812345;
    short int shortNum = 1234;
    unsigned int unsignedNum = 1111111111;
    cout << "Max int val: " << INT_MAX << endl;
    cout << "Min int val: " << INT_MIN << endl;
    cout << "Long int val: " << longNum << endl;
    cout << "Short int val: " << shortNum << endl;
    cout << "Unsigned int val: " << unsignedNum << endl;
    return 0;
}