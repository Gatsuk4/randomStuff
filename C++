#include <iostream>
using namespace std;

int main()
{
    int vetor[5]; // de 0 a 4
    int soma, subtracao, multiplicacao;
    soma = subtracao = multiplicacao = 0;

    for (int i = 0; i < 5; i++) {
        cout << "INFORME O " << i + 1 << "º VALOR: ";
        cin >> vetor[i];
    }


    for (int i = 0; i < 5; i++) {
        soma += vetor[i];
        if (i == 0) {
            subtracao = vetor[i];
            multiplicacao = vetor[i];
        } else {
            subtracao -= vetor[i];
            multiplicacao *= vetor[i];
        }
    }

    cout << "A SOMA É IGUAL A: " << soma;
    cout << "\nA SUBTRAÇÃO É IGUAL A: " << subtracao;
    cout << "\nA MULTIPLICAÇÃO É IGUAL A: " << multiplicacao;
    cout << "\nA MÉIDA É IGUAL A: " << soma/5;

    return 0;
}
