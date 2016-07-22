#include <iostream>
using namespace std;

int main() 
{
int exp;
float base, power = 1;
cout << "Enter base and exponent respectively:  ";
cin >> base >> exp;
while (exp != 0) 
{
power *= base;
--exp;
}
cout << "Result = " << power;
return 0;
}
