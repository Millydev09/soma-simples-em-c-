//somasimplesex1.cpp

#include <iostream>
#include <cmath>

using namespace std;

int main (void){
  int a,b,r;
  cout << "informe o valor da primeira variavel:"; cin >> a;
  cin.ignore(80,'\n');

  cout << "informe o segundo valor:"; cin >> b;
  cin.ignore (80,'\n');

  r= a+b;

  cout  << "a soma resultou em:" << r << endl;
  cout << endl;

  cout << "tecle <enter> para encerrar...";
  cin.get();

  return 0;

}
