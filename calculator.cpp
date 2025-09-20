#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose operation (+ , - , * , /): ";
    cin >> op;

    if (op == '+')
        cout << "Result = " << num1 + num2 << endl;
    else if (op == '-')
        cout << "Result = " << num1 - num2 << endl;
    else if (op == '*')
        cout << "Result = " << num1 * num2 << endl;
    else if (op == '/') {
        if (num2 != 0)
            cout << "Result = " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero not allowed.\n";
    } else
        cout << "Invalid operation.\n";

    return 0;
}