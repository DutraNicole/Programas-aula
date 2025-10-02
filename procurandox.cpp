#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// linha de numeros do vetor
	// elemento x
	int num, X;
	int n = 0;
	int vetor[100];
	cin >> num;
// vetor não pode conter 0
// se digitar zero indica final do vetor
	while (num != 0)
	{
		// montando o vetor
		vetor[n] = num;
		n++;
		cin >> num;
	}
	cin >> X;
//verificando a posição de X no vetor
	int posicao = -1;
	for(int i = 0; i < n; i++)
	{
		if ( vetor[i] == X)
		{
			posicao = i;
		}
	}
	if (posicao == -1)
	{
		cout << "elemento " << X << " nao foi encontrado" << endl;
	}
	else
	{
		cout << "elemento " << X << " encontrado na posicao " << posicao << endl;
	}

	return 0;
}
