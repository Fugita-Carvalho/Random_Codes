#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
	string word;

	cout << "Digite uma palavra: " << endl;
	cout << "==> ";
	cin >> word;

	for(int i = 0; i < word.size(); i++)
		cout << (int)word[i] << endl;

	return 0;
}