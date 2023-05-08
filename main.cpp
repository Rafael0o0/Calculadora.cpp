#include <iostream>
using namespace std;
int main()
{

  char operador;
  int num1, num2;

  cout << "######################### CALCULADORA ########################" << endl
       << endl;
  cout << "Ingrese un operador: + - * /" << endl
       << endl;
  cin >> operador;
  cout << endl
       << "Ingrese 2 numeros para la operacion: \n";
  cin >> num1 >> num2;

  cout << endl
       << "El resultado de la operacion es: " << endl;

  switch (operador)
  {

  case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2;
    break;

  case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2;
    break;

  case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2;
    break;

  case '/':
    if (num2 == 0)
    {
      cout << "Error: No es posible dividir entre cero";
    }
    else
    {
      cout << num1 << " / " << num2 << " = " << num1 / num2;
    }
    break;

  default:
    cout << "Error: Operador no valido";
    break;
  }

  return 0;
}