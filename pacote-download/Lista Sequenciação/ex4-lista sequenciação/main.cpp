#include <iostream>

using namespace std;

int main()
{
    float F, celsius;

    cout << " Digite o valor da temperatura em Fahrenheit para ser transformada em Celsius: ";
    cin >> F;

    celsius = 0.5*(F-32);

    cout << " O valor digitado em celsius vale: " << celsius << endl;
}
