#include "Checkers.h"

bool checkBox(int rowIndex, int columnIndex, int matrix[9][9])
{
	// Check if the element being checked isn't filld
	if (matrix[rowIndex][columnIndex] == 0)
		return true;


	// Need to get which square to check
	int row = rowIndex / 3;
	int column = columnIndex / 3;

	for (int i = row; i < row + 3; i++)
	{
		for (int j = column; j < column + 3; j++)
		{
			// Skip over the element that is being checked
			if (i == rowIndex && j == columnIndex)
				continue;

			if (matrix[rowIndex][columnIndex] == matrix[i][j])
				return false;
		}
	}
	return true;
}


bool checkRow(int rowIndex, int columnIndex, int matrix[9][9])
{
	// Cycle through the 9 elements in the row
	for (int i = 0; i < 9; i++)
	{
		// Skip over the element that is being checked
		if (i == columnIndex)
			continue;

		if (matrix[rowIndex][columnIndex] == matrix[rowIndex][i])
			return false;
	}

	return true;
}


bool checkColumn(int rowIndex, int columnIndex, int matrix[9][9])
{
	// Cycle through the 9 elements in the row
	for (int i = 0; i < 9; i++)
	{
		// Skip over the element that is being checked
		if (i == rowIndex)
			continue;

		if (matrix[rowIndex][columnIndex] == matrix[i][columnIndex])
			return false;
	}
	
	return true;
}

bool checkTotal(int rowIndex, int columnIndex, int matrix[9][9])
{
	bool check1 = checkBox(rowIndex, columnIndex, matrix);
	bool check2 = checkRow(rowIndex, columnIndex, matrix);
	bool check3 = checkColumn(rowIndex, columnIndex, matrix);

	if (check1 == true && check2 == true && check3 == true)
		return true;
	else
		return false;
}


