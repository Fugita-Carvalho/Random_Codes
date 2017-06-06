#include <iostream>
#include <string>
#include <vector>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	vector<int> v;
	int val, aux;

	cout<< "Digite 10 valores para preencher o vetor:" << endl;

	for(int i = 0; i < 10; ++i)
	{
		cout << "Valor " << i+1 << ": ";
		cin >> val;
		v.push_back(val); 
	}

	for(int i = 1; i < 10; i++)
		for(int j = 0; j < 10-1; j++)
		{
			if(v[j] >= v[j+1])
			{
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}

	for(int i = 0; i < 10; i++)
		cout << v[i] << endl;

	return 0;
}