#include <iostream>
using namespace std;

int main()
{
    int opcao;
    int a, b;

    do {
        cout << "\n\n[1] SOMAR\n[2] SUBTRAIR\n[3] MULTIPLICAR\n[4] DIVIDIR\n[5] SAIR";
        cin >> opcao;

        system("clear");
        cout << "INFORME UM NÚMERO: ";
        cin >> a;

        cout << "INFORME OUTRO NÚMERO: ";
        cin >> b;

        system("clear");
        switch (opcao) {
            case 1:
                cout << a << " + " << b << " = " << a + b;
                break;

            case 2:
                cout << a << " - " << b << " = " << a - b;
                break;

            case 3:
                cout << a << " x " << b << " = " << a * b;
                break;

            case 4:
                cout << a << " / " << b << " = " << a / b;
                break;

            case 5:
                cout << "FINALIZANDO...";
                break;

            default:
                cout << "OPÇÃO INVÁLIDA";
        }
    } while (opcao != 5);


    return 0;
}
