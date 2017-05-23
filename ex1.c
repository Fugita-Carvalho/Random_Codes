#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	int cont_p = 0;
	string palavra;
	vector< pair<int,int> > cont;

	cout << "Digite uma palavra qualquer: ";
	cin >> palavra;

	for (int i=33; i<129; i++)
	{
		for (int j=0; j<palavra.size(); j++)
			if ((int)palavra[j] == i)
				cont_p++;

		if(cont_p != 0)
		{
			cont.push_back(make_pair(cont_p, i));
			cont_p = 0;
		}
	}

	sort(cont.begin(), cont.end());

	for(int i = cont.size()-1; i >= 0; i--)
		cout << cont[i].second << " " << cont[i].first << endl;

	return 0;
}