#include <iostream>
#include <cstdlib>
using namespace std;

class operations
{
protected:
  void Addition(double n1, double n2)
  {
    cout << "Addition of " << n1 << " & " << n2 << " : " << n1 + n2 << endl;
  }
  void Substraction(double n1, double n2)
  {
    cout << "Substraction of " << n1 << " & " << n2 << " : " << n1 - n2 << endl;
  }
  void Multiplication(double n1, double n2)
  {
    cout << "Multiplication of " << n1 << " & " << n2 << " : " << n1 * n2 << endl;
  }
  void Division(double n1, double n2)
  {
    cout << "Division of " << n1 << " & " << n2 << " : " << n1 / n2 << endl;
  }
};

class calculator : public operations
{
  double num1, num2;
  char ch;

public:
  calculator()
  {
    while (1)
    {
      cout << "\nENTER OPERATION (+,-,*,/ & 0 to exit)" << endl;
      cin >> ch;

      switch (ch)
      {
      case '+':
        cout << "ENTER NUMBER 1: ";
        cin >> num1;
        cout << "ENTER NUMBER 2: ";
        cin >> num2;
        Addition(num1, num2);
        break;
      case '-':
        cout << "ENTER NUMBER 1: ";
        cin >> num1;
        cout << "ENTER NUMBER 2: ";
        cin >> num2;
        Substraction(num1, num2);
        break;
      case '*':
        cout << "ENTER NUMBER 1: ";
        cin >> num1;
        cout << "ENTER NUMBER 2: ";
        cin >> num2;
        Multiplication(num1, num2);
        break;
      case '/':
        cout << "ENTER NUMBER 1: ";
        cin >> num1;
        cout << "ENTER NUMBER 2: ";
        cin >> num2;
        Division(num1, num2);
        break;
      case '0':
        exit(0);
      default:
        cout << "\nOPPS!! You Entered the wrong operation.\n\n"
             << endl;
      }
    }
  }
};

int main()
{
  cout << "\n***SIMPLE CALCULATOR***\n\n"<< endl;
  calculator C1;
}