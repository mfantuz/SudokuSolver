#include "Checkers.h"
#include <iostream>

using namespace std;

void printMatrix(int matrix[9][9]);
void printMatrix(bool matrix[9][9]);

int main()
{
	int sudo[9][9] =
	{
		{ 1, 2, 3, 4, 5, 6, 7, 8, 9 },
		{ 0, 2, 3, 4, 5, 6, 7, 8, 9 },
		{ 0, 2, 3, 4, 5, 6, 7, 8, 9 },

		{ 1, 2, 3, 4, 5, 6, 7, 8, 9 },
		{ 1, 2, 3, 4, 5, 6, 7, 8, 9 },
		{ 1, 2, 3, 4, 5, 6, 7, 8, 9 },

		{ 1, 2, 3, 4, 5, 6, 7, 8, 9 },
		{ 1, 2, 3, 4, 5, 6, 7, 8, 9 },
		{ 1, 2, 3, 4, 5, 6, 7, 8, 9 }
	};

	printMatrix(sudo);

	if (checkBox(1, 0, sudo) == false)
		cout << "box is bad\n";
	else
		cout << "box is good\n";


	if (checkColumn(0, 0, sudo) == false)
		cout << "column is bad\n";
	else
		cout << "column is good\n";

	
	if (checkRow(0, 0, sudo) == false)
		cout << "row is bad\n";
	else
		cout << "row is good\n";

	if (checkTotal(0, 0, sudo) == false)
		cout << "bad\n";
	else
		cout << "good\n";


	//bool id[9][9] = { false };

	//preFilledIds(sudo, id);
	//printMatrix(id);

	cin.get();
	return 0;
}

void printMatrix(int matrix[9][9])
{
	cout << "The matrix to be printed is: \n";
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}

void printMatrix(bool matrix[9][9])
{
	cout << "The matrix to be printed is: \n";
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}