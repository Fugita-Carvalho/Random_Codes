#include <iostream>
#include <list>
#include <string>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	list<int> clientes;
	vector<int> caixas;

	do
	{
		
		cout << "Digite o número de caixas: " << endl;
		cout << "n ==> ";
		cin >> n;

	}while((n <= 0) || (n >= 10000));

	do
	{

		cout << "Digite o número de clientes: " << endl;
		cout << "m ==> ";
		cin >> m;

	}while((m <= 0) || (m >= 10000) || (m > n));

	for(int i=0; i<n; i++)
		caixas.push_back(i+1);

	return 0;
}