using namespace std;
#include <iostream>

int main () {

    int Homens, Mulheres;
    string Resposta;

    cout << "Insira a quantidade de Homens: ";
    cin >> Homens;

    cout << "Insira a quantidade de Mulheres: ";
    cin >> Mulheres;

    system("clear");
    cout << "A quantidade de Homens no evento foi de: " << Homens;
    cout << "\nA quantidade de Mulheres no evento foi de: " << Mulheres;

    do {
        cout << "\nOs valores adicionados estão corretos?";
        cout << "\n Digite S para encerrar | Digite N para resetar:";
        cin >> Resposta;
    } while (Resposta != "N" && Resposta != "S");


    while (Resposta == "N") {
        system("clear");
        cout << "Insira a quantidade de Homens: ";
        cin >> Homens;
        cout << "Insira a quantidade de Mulheres: ";
        cin >> Mulheres;

        cout << "A quantidade de Homens no evento foi de: " << Homens;
        cout << "\nA quantidade de Mulheres no evento foi de: " << Mulheres;

        do {
            cout << "\nOs valores adicionados estão corretos?";
            cout << "\n Digite S para encerrar | Digite N para resetar:";
            cin >> Resposta;
        } while (Resposta != "N" && Resposta != "S");
    }

    system("clear");
    cout << "Finalizando...";

    return 0;
    }
