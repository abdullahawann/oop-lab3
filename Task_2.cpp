#include <iostream>
#include <fstream>
using namespace std;

class Matrix
{
	int rows, cols;

public :

	// Setters
	void setA(int r)
	{
		rows = r;
	}

	void setB(int c)
	{
		cols = c;
	}

	// Getters
	int getA()
	{
		return rows;
	}

	int getB()
	{
		return cols;
	}

	int** allocate(int r, int c)
	{
		int** matrix = new int*[r];

		for (int i=0; i<rows; i++)
		{
			matrix[i] = new int[c];
		}
		return matrix;
	}

	int** input(int** matrix)
	{
		fstream myfile;
		myfile.open("matrix.txt");
		for (int i=0; i<rows; i++)
		{
			for (int j=0; j<cols; j++)
				myfile >> matrix[i][j];
		}
		return matrix;
	}

	void print(int** matrix)
	{
		for (int i=0; i<rows; i++)
		{
			for (int j=0; j<cols; j++)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}

	}
};

int main()
{
	Matrix obj;

	int rows, cols;
	cout << "Enter number of rows : ";
	cin >> rows;
	cout << "Enter number of columns : ";
	cin >> cols;

	obj.setA(rows);
	obj.setB(cols);
	obj.input(obj.allocate(rows, cols));
	obj.print(obj.input(obj.allocate(rows, cols)));

	system("pause");
	return 0;
}