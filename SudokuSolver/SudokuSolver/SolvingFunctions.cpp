#include "Checkers.h"
#include "SolvingFunctions.h"


void preFilledIds(int matrix[9][9], bool y[9][9])
{
	int countRow = 0;
	int countColumn = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (matrix[i][j] == 0)
			{
				y[i][j] = true;
			}
		}
	}
}

void incRowColumn(int &row, int &column)
{
	// If the end of a row is reached
	if (column > 9)
	{
		row++;
		column = 0;
	}

	// If not, continue through the row
	else
		column++;

}

void fillSpot(int row, int column, int matrix[9][9], bool ids[9][9], int solvedMat[9][9])
{
	if (row > 9)
		return;

	// Check if the spot is already filled
	if (ids[row][column] == false)
	{
		int newRow;
		int newColumn;

		incRowColumn(newRow, newColumn);
		fillSpot(newColumn, newColumn, matrix, ids, solvedMat);
	}
	//The spot is not filled, now try to fill spot
	else
	{
		for (int i = 0; i < 9; i++)
		{
			solvedMat[row][column] = i;

			// Check to see if this value works
			// If it doesn't continue through for-loop

			if (checkTotal(row, column, solvedMat) == true)
				fillSpot(row, column, matrix, ids, solvedMat);
		}

		// All possible options have been tried, something is wrong with a previous decison

	}
}