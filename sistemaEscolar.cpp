#include <iostream>
using namespace std;

class sistemaEscolar
{
public:
  string NOME, IDADE, TURMA, COMPORTAMENTO;
  int NOTAS[3];
  float MEDIA;
  char COMP;
};

int main()
{
  sistemaEscolar aluno[3];

  for (int i = 0; i < 3; i++)
  {
    cout << "INFORME O NOME DO " << i + 1 << "º ALUNO: ";
    cin.ignore();
    getline(cin, aluno[i].NOME);

    cout << "INFORME A IDADE DO " << i + 1 << "º ALUNO: ";
    getline(cin, aluno[i].IDADE);

    cout << "INFORME A TURMA DO " << i + 1 << "º ALUNO: ";
    getline(cin, aluno[i].TURMA);

    aluno[i].MEDIA = 0;

    for (int j = 0; j < 3; j++)
    {
      cout << "INFORME A " << j + 1 << "ª NOTA DO " << i + 1 << "º ALUNO: ";
      cin >> aluno[i].NOTAS[j];
      aluno[i].MEDIA += aluno[i].NOTAS[j];
    }

    aluno[i].MEDIA /= 3;

    cin.ignore();

    cout << "INFORME O COMPORTAMENTO DO " << i + 1 << "º ALUNO (A, B ou C): ";
    cin >> aluno[i].COMP;

    switch (aluno[i].COMP)
    {
    case 'A':
      aluno[i].COMPORTAMENTO = "Bom";
      break;
    case 'B':
      aluno[i].COMPORTAMENTO = "Médio";
      break;
    case 'C':
      aluno[i].COMPORTAMENTO = "Ruim";
      break;
    default:
      aluno[i].COMPORTAMENTO = "Desconhecido";
      break;
    }
  }

  cout << "\n========== RESULTADOS ==========\n";
  for (int i = 0; i < 3; i++)
  {
    cout << "Aluno: " << aluno[i].NOME << endl;
    cout << "Idade: " << aluno[i].IDADE << endl;
    cout << "Turma: " << aluno[i].TURMA << endl;
    cout << "Notas: ";
    for (int j = 0; j < 3; j++)
    {
      cout << aluno[i].NOTAS[j] << " ";
    }
    cout << endl;
    cout << "Nota Média: " << aluno[i].MEDIA << endl;
    cout << "Comportamento: " << aluno[i].COMPORTAMENTO << endl;

    if (aluno[i].MEDIA >= 6 && (aluno[i].COMP == 'A' || aluno[i].COMP == 'B'))
    {
      cout << "Status: APROVADO\n";
    }
    else
    {
      cout << "Status: REPROVADO\n";
    }
    cout << "-----------------------------\n";
  }

  return 0;
}
