#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3, media_p;

    cout << " Digite o valor da primeira nota: ";
    cin >> n1;

    cout << " Digite o valor da segunda nota: ";
    cin >> n2;

    cout << " Digite o valor da terceira nota: ";
    cin >> n3;

    //peso das notas: 2, 4, 6

    media_p = (n1*2 + n2*4 + n3*6) / 12;

    cout << " A media ponderada das notas foi: " << media_p << endl;
}
