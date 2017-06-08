#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	vector<int> v;
	vector<int> u;
	set<int> w;
	set<int>::iterator it;
	int val;

	cout << "Insert the elements of the first set: " << endl;
	for(int i = 0; i < 3; i++)
	{
		cout << "Element " << i+1 << ": ";
		cin >> val;
		v.push_back(val);
	}

	cout << endl;

	cout << "Insert the elements of the second set: " << endl;
	for(int i = 0; i < 3; i++)
	{
		cout << "Element " << i+1 << ": ";
		cin >> val;
		v.push_back(val);
	}

	w.insert(v.begin(), v.end());
	w.insert(u.begin(), u.end());

	cout << endl;

	cout << "u U v (u union v):" << endl;
	for(it = w.begin(); it != w.end(); it++)
		cout << *it << ", ";

	cout << endl;

	return 0;
}