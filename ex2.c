#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<int> teste;
	list<int>::iterator it;

	teste.push_back(0);
	teste.push_back(12);
	teste.push_back(133);
	teste.push_back(1);
	teste.push_back(17);
	teste.push_back(7);

	it = teste.begin();

	for(it; it != teste.end(); it++)
		cout << *it << endl;

	cout << "-----------------------------------" << endl;

	teste.push_front(777);

	teste.sort(greater<int>());

	it = teste.begin();

	for(it; it != teste.end(); it++)
		cout << *it << endl;

	return 0;
}