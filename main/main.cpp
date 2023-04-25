#include <iostream>
#include <vector>
#include "Point.h"
using namespace std;

int main()
{
	srand(time(0));

	cout << "vector<Point<int>>:\n";

	vector<Point<int>> vec;

	for (int i = 0; i < 5; i++)
	{
		vec.push_back(
			Point<int>(
				rand() % 10, 
				rand() % 10, 
				rand() % 10
			)
		);
	}

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "\n";
	}
	cout << "\n";

	cout << "vector<vector<Point<int>>>:\n";

	vector<vector<Point<int>>> vec2;

	for (int i = 0; i < 3; i++)
	{
		vector<Point<int>> tmp;

		for (int i = 0; i < 5; i++)
		{
			tmp.push_back(
				Point<int>(
					rand() % 10,
					rand() % 10,
					rand() % 10
				)
			);
		}
		vec2.push_back(tmp);
	}

	for (int i = 0; i < vec2.size(); i++)
	{
		for (int j = 0; j < vec2[i].size(); j++)
		{
			cout << vec2[i][j] << ", ";
		}
		cout << "\n";
	}
}
