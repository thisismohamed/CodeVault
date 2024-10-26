#include <iostream>
using namespace std;

double add(double num1, double num2) {
  return num1 + num2;
}

double subtract(double num1, double num2) {
  return num1 - num2;
}

double multiply(double num1, double num2) {
  return num1 * num2;
}

double divide(double num1, double num2) {
  if (num2 == 0) {
    cout << "Cannot divide by zero" << endl;
    return 0;
  } else {
    return num1 / num2;
  }
}

int main() {
  double num1, num2;
  char operation;
  
  cout << "Calculator program" << endl;
  cout << "Enter first number: " << endl;
  cin >> num1;
  cout << "Enter operation (+,-,*,/): " << endl;
  cin >> operation;
  cout << "Enter second number: " << endl;
  cin >> num2;
  
  double result = 0;
  
  switch (operation) {
    case '+':
    result = add(num1, num2);
    break;
    case '-':
    result = subtract(num1, num2);
    break;
    case '*':
    result = multiply(num1, num2);
    break;
    case '/':
    result = divide(num1, num2);
    break;
    default:
    cout << "Error operaion" << endl;
    break;
  }
  
  if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
    cout << "Error operation" << endl;
  } else {
    cout << "Result: " << result << endl;
  }
  return 0;
}
