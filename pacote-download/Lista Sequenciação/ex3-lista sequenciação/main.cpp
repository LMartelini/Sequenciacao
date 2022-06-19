#include <iostream>

using namespace std;

int main()
{
    float raio, pi=3, C;

    cout << " Digite o valor do raio para exibir o comprimento da circunferencia: ";
    cin >> raio;

    C = 2*pi*raio;

    cout << " O comprimento da circunferencia vale: " << C << endl;
}
