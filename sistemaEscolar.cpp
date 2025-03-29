#include <iostream>
using namespace std;

class sistemaEscolar {
public:
    string NOME, IDADE, TURMA, COMPORTAMENTO;
    int MEDIA;
    char COMP;
};

int main() {
    sistemaEscolar aluno[3];

    for (int i = 0; i < 3; i++) {
        cout << "INFORME O NOME DO " << i + 1 << "º ALUNO: ";
        cin >> aluno[i].NOME;

        cout << "INFORME A IDADE DO " << i + 1 << "º ALUNO: ";
        cin >> aluno[i].IDADE;

        cout << "INFORME A TURMA DO " << i + 1 << "º ALUNO: ";
        cin >> aluno[i].TURMA;

        cout << "INFORME A NOTA DO " << i + 1 << "º ALUNO: ";
        cin >> aluno[i].MEDIA;

        cout << "INFORME O COMPORTAMENTO DO " << i + 1 << "º ALUNO (A, B ou C): ";
        cin >> aluno[i].COMP;

        string comportamento;
        switch (aluno[i].COMP) {
            case 'A': comportamento = "Bom"; break;
            case 'B': comportamento = "Médio"; break;
            case 'C': comportamento = "Ruim"; break;
            default: comportamento = "Desconhecido"; break;
        }



    }

    cout << "\n========== RESULTADOS ==========\n";

    for (int i = 0; i < 3; i++) {
        cout << "Aluno: " << aluno[i].NOME << endl;
        cout << "Idade: " << aluno[i].IDADE << endl;
        cout << "Turma: " << aluno[i].TURMA << endl;
        cout << "Nota Média: " << aluno[i].MEDIA << endl;
        cout << "Comportanento: " << aluno[i].COMP << endl;


        if (aluno[i].MEDIA >= 6 && (aluno[i].COMP == 'A' || aluno[i].COMP == 'B')) {
            cout << "Status: APROVADO\n";
        } else {
            cout << "Status: REPROVADO\n";
        }

        cout << "-----------------------------\n";
    }

    return 0;
}
