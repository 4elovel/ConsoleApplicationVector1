
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	srand(time(NULL));


	vector<int>vec1;
	vector<int>vec2;
	vector<int>vec3;

	cout << "vector 1:\n";
	for (size_t i = 0; i < 5; i++)
	{
		int buf = (rand() % 199)-99;
		vec1.push_back(buf);
		cout << buf << " ";
	}
	cout << endl;
	cout << endl;
	cout << "vector 2:\n";
	for (size_t i = 0; i < 5; i++)
	{
		int buf = (rand() % 199) - 99;
		vec2.push_back(buf);
		cout << buf << " ";
	}
	cout << endl;
	cout << endl;
	cout << "vector 3:\n";
	for (auto i = vec1.begin(); i != vec1.end(); ++i) {
		vec3.push_back(*i);
		cout << *i << " ";
	}
	for (auto i = vec2.begin(); i != vec2.end(); ++i) {
		vec3.push_back(*i);
		cout << *i << " ";
	}

}

