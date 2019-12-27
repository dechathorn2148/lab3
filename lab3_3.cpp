#include <iostream>
using namespace std;

int main()
{
    int number = 19;
    float sum=0.0;
    float number1=1;
    float number2=6;
    while(number2<=number)
    {
        number1=1/number2;
        number2 = number2+1;
        sum = sum +number1;
    }
    cout << sum; 
    return 0;
}