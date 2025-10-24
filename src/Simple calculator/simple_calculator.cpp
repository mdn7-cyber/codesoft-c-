#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char opert;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose operation (+, -, *, /): ";
    cin >> opert;

    if (opert == '+') {
        result = num1 + num2;
        cout << "Result = " << result << endl;
    } 
    else if (opert == '-') {
        result = num1 - num2;
        cout << "Result = " << result << endl;
    } 
    else if (opert == '*') {
        result = num1 * num2;
        cout << "Result = " << result << endl;
    } 
    else if (opert == '/') {
        if (num2 != 0)
            result = num1 / num2;
        else {
            cout << "Error: Division by zero not allowed!" << endl;
            return 0;
        }
        cout << "Result = " << result << endl;
    } 
    else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}