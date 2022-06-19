#include <iostream>

using namespace std;

int main()
{
    float mp1, mp2, mt1, mt2, me1, me2, MP, MT, ME, MF;

    cout << " Digite sua primeira nota na prova: ";
    cin >> mp1;

    cout << " Digite sua segunda nota na prova: ";
    cin >> mp2;

    MP = (mp1+mp2) / 2;

    cout << " Sua media nas provas foi: " << MP << endl;

    cout << " ------------------------------------------ " << endl;

    cout << " Digite sua primeira nota no trabalho: ";
    cin >> mt1;

    cout << " Digite sua segunda nota no trabalho: ";
    cin >> mt2;

    MT = (mt1+mt2) / 2;

    cout << " Sua media no trabalho foi: " << MT << endl;

    cout << " ------------------------------------------ " << endl;

    cout << " Digite sua primeira nota nos exercicios: ";
    cin >> me1;

    cout << " Digite sua segunda nota nos exercicios: ";
    cin >> me2;

    ME = (me1+me2) / 2;

    cout << " Sua media nos exercicios foi: " << ME << endl;

    cout << " ------------------------------------------ " << endl;

    MF = (0.7 * MP + 0.2 * MT + 0.1 * ME);

    cout << " Sua media final foi: " << MF << endl;
}
