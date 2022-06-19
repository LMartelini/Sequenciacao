#include <iostream>

using namespace std;

int main()
{
    int quantidade1, quantidade2, quantidade3;
    float subtotal_1, subtotal_2, subtotal_3, total;

    cout << "\t PRODUTOS " << " \t " << " PRECOS " << endl;
    cout << "-----------------------------------------" << endl;

    cout << "\n\t REFRIGERANTE " << " \t " << " 5.40 " << endl;
    cout << "\n\t ARROZ " << " \t " << " 12.67 " << endl;
    cout << "\n\t LENTILHA " << " \t " << " 8.90 " << endl;


    cout << " \n ESCREVA A QUANTIDADE QUE DESEJA DE REFRIGERANTE: " << endl;
    cin >> quantidade1;

    cout << " \n ESCREVA A QUANTIDADE QUE DESEJA DE ARROZ: " << endl;
    cin >> quantidade2;

    cout << " \n ESCREVA A QUANTIDADE QUE DESEJA DE LENTILHA: " << endl;
    cin >> quantidade3;

    subtotal_1 = quantidade1 * 5.40;
    subtotal_2 = quantidade2 * 12.67;
    subtotal_3 = quantidade3 * 8.90;

    total = subtotal_1 + subtotal_2 + subtotal_3;

    cout << "\t PRODUTOS " << " \t " << " QUANTIDADE " << " \t " << " PRECOS " << " \t " << " SUBTOTAL " << " \t " << " TOTAL " << endl;
    cout << "-------------------------------------------------------------------------------" << endl;

    cout << "\n\t REFRIGERANTE " << " \t\t " << quantidade1 << " \t " << " 5.40 " << " \t " << subtotal_1 << endl;
    cout << "\n\t ARROZ " << " \t\t " << quantidade2 << " \t " << " 12.67 " << " \t " << subtotal_2 << endl;
    cout << "\n\t LENTILHA " << " \t\t " << quantidade3 << " \t " << " 8.90 " << " \t " << subtotal_3 << endl;

    cout << " \t\t\t\t\t\t\t\t\t" << total << endl;

}
