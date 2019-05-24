#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float num = 123.456789;
    double num2 = 123.456789;
    long double num3 = 123.456789456789;
    cout << "Float: " << setprecision(20) << num << endl;
    cout << "Double: " << setprecision(20) << num2 << endl;
    cout << "Long Double: " << setprecision(20) << num3 << endl;
    // cout << "Size of float: " << sizeof(float) << endl;
    // cout << "Precision: " << setprecision(20) << fixed << num << endl;
    // cout << "Fixed float num: " << fixed << num << "\nScientific float num: " << scientific << num << endl;
    return 0;
}