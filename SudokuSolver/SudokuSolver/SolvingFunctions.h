#pragma once
void preFilledIds(int matrix[9][9], bool y[9][9]);

void incRowColumn(int &row, int &column);

void fillSpot(int row, int column, int matrix[9][9], bool ids[9][9], int solvedMat[9][9]);