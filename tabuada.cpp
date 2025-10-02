#include <iostream>
using namespace std;

int main()
{
	//numero de quem tabuada vai ser
	int N;
	int tabuada[10];
	cin >> N;
	// for que faz a multiplicação dos numero de 0 até 10
	for(int i = 0; i < 10; i++)
	{
		tabuada[i] = N * (1 + i);
	}
	// for que mostra o resultado
	for(int i = 0; i < 10; i++)
	{
		cout << N << "x" << i << "=" << tabuada[i] << endl;
	}

	return 0;
}
