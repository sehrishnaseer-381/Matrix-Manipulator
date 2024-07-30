#include<iostream>
using namespace std;

void menu();
void SelectOption();
void CreateMatrix(int**& array, int& rows, int& columns);
void DisplayMatrix(int**& array, int& rows, int& columns);
void ContinueProgram();
void SumofMatrix();
void ProductofMatrix();
void AverageofwholeMatrix();
void ScalarMatrixAddition();
void AdditionoftwoMatrices();
void ScalarMatrixSubtraction();
void SubtractionoftwoMatrices();
void ScalarMatrixMultiplication();
void MultiplicationoftwoMatrices();
void MatrixTranspose();
void MatrixDeterminant();
void DeleteMatrix(int**& array, int& n);
void ExitProgram();

int main()
{
	menu();
	SelectOption();
	do
	{
		ContinueProgram();
		SelectOption();
	} while (true);
	system("pause");
	return 0;
}

void menu()
{
	cout << "\n\t\t\t\t\t|======================================|";
	cout << "\n\t\t\t\t\t|                                      |";
	cout << "\n\t\t\t\t\t|          Matrix Manipulator          |";
	cout << "\n\t\t\t\t\t|                                      |";
	cout << "\n\t\t\t\t\t|======================================|";
	cout << "\n\n\n\n\t\t\t\t\t\t|--- Operation Menu ---|" << endl;
	cout << "\n\n\t\t\t\t     1.\tSum of Matrix (sum of all values)";
	cout << "\n\t\t\t\t     2.\tProduct of Matrix(product of all values) ";
	cout << "\n\t\t\t\t     3.\tAverage or whole Matrix";
	cout << "\n\t\t\t\t     4.\tScalar Matrix Addition";
	cout << "\n\t\t\t\t     5.\tAddition of two Matrices";
	cout << "\n\t\t\t\t     6.\tScalar Matrix Subtraction";
	cout << "\n\t\t\t\t     7.\tSubtraction of two Matrices";
	cout << "\n\t\t\t\t     8.\tScalar Matrix Multiplication";
	cout << "\n\t\t\t\t     9.\tMultiplication of two Matrices";
	cout << "\n\t\t\t\t     10.Matrix transpose";
	cout << "\n\t\t\t\t     11.Matrix determinant";
	cout << "\n\t\t\t\t     12.Exit Program";
}

void ContinueProgram()
{
	char choice;
	cout << "\n\n To Continue the Program Press Y and if not Press N ";
	cout << endl << "Enter your choice : ";
	cin >> choice;
	if (choice == 'Y' || choice == 'y')
	{
		system("cls");
		menu();
	}
	else if (choice == 'N' || choice == 'n')
	{
		ExitProgram();
	}
}

void SelectOption()
{
	int option;
	cout << "\n\n\n\t\t Enter which operation you want to manipulate: ";
	cin >> option;
	if (option == 1)
	{
		SumofMatrix();
	}
	else if (option == 2)
	{
		ProductofMatrix();
	}
	else if (option == 3)
	{
		AverageofwholeMatrix();
	}
	else if (option == 4)
	{
		ScalarMatrixAddition();
	}
	else if (option == 5)
	{
		AdditionoftwoMatrices();
	}
	else if (option == 6)
	{
		ScalarMatrixSubtraction();
	}
	else if (option == 7)
	{
		SubtractionoftwoMatrices();
	}
	else if (option == 8)
	{
		ScalarMatrixMultiplication();
	}
	else if (option == 9)
	{
		MultiplicationoftwoMatrices();
	}
	else if (option == 10)
	{
		MatrixTranspose();
	}
	else if (option == 11)
	{
		MatrixDeterminant();
	}
	else if (option == 12)
	{
		ExitProgram();
	}
}

void CreateMatrix(int**& array, int& rows, int& columns)
{
	cout << "\n Enter size of rows: ";
	cin >> rows;
	cout << " Enter size of columns: ";
	cin >> columns;
	array = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[columns];
	}
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << " Element of array [" << i << "] [" << j << "] : ";
			cin >> array[i][j];
		}
	}
	cout << "\n Array:" << endl;
	DisplayMatrix(array, rows, columns);
}

void DisplayMatrix(int**& array, int& rows, int& columns)
{
	for (int i = 0; i < rows; i++)
	{
		cout << " | ";
		for (int j = 0; j < columns; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << "| " << endl;
	}
}

void SumofMatrix()
{
	system("cls");
	cout << "\n\t\t\t\t\t\t|---Sum of Matrix ---|" << endl<< endl;
	int row = 0, col = 0;
	int** array;
	cout << "\n\n Enter array: " << endl;
	CreateMatrix(array, row, col); // creating array through funtion
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum = sum + array[i][j];
		}
	}
	cout << "\n Sum of all values of array : " << sum << endl << endl;
	DeleteMatrix(array, row); // deleting array through funtion
}

void ProductofMatrix()
{
	system("cls");
	cout << "\n\t\t\t\t\t\t|--- Product of Matrix ---|"<<endl << endl;
	int row = 0, col = 0;
	int** array;
	cout << "\n\n Enter array: " << endl;
	CreateMatrix(array, row, col); // creating array through funtion
	int mul = 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			mul = mul * array[i][j];
		}
	}
	cout << "\n Product of all values of array : " << mul << endl << endl;
	DeleteMatrix(array, row); // deleting array through funtion
}

void AverageofwholeMatrix()
{
	system("cls");
	cout << "\n\t\t\t\t\t|--- Average of Matrix ---|"<<endl << endl;
	int row = 0, col = 0;
	int** array;
	int count = 0;
	double avg;
	cout << "\n\n Enter array: " << endl;
	CreateMatrix(array, row, col); // creating array through funtion
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum = sum + array[i][j];
			count++;
		}
	}
	avg = sum / count; // taking average of all values of matrix
	cout << " Average of the array : " << avg << endl << endl;
	DeleteMatrix(array, row); // deleting array through funtion
}

void ScalarMatrixAddition()
{
	system("cls");
	cout << "\n\t\t\t\t\t|--- Scalar Matrix Addition ---|"<<endl << endl;
	int row = 0, col = 0;
	int** array;
	cout << "\n\n Enter array: " << endl;
	CreateMatrix(array, row, col); // creating array through funtion
	int sum;
	cout << endl << endl;
	cout << "Enter Number you want to Add(to whole matrix): ";
	cin >> sum; // number to add to all values of matrix
	for (int i = 0; i < row; i++)
	{
		cout << " | ";
		for (int j = 0; j < col; j++)
		{
			 cout<< sum + array[i][j]<<" ";
		}
		cout << "| " << endl;
	}
	DeleteMatrix(array, row); // deleting array through funtion
}

void AdditionoftwoMatrices()
{
	system("cls");
	cout << "\n\t\t\t\t\t|--- Addition of two Matrices ---|"<<endl;
	cout << endl << endl;
	cout << "\n For Addition of two matrices size of Rows and Columns of both arrays must be equal !!" << endl;
	int** array1;
	int row1;
	int col1;
	int** array2;
	int row2;
	int col2;
	cout << "\n\n Array 1: ";
	cout << endl;
	CreateMatrix(array1, row1, col1); // creating array1 through funtion
	cout << "\n\n Array 2: ";
	cout << endl;
	CreateMatrix(array2, row2, col2); // creating array2 through funtion
	if (row1 == row2 && col1 == col2) // check for addition of matrices
	{
		int** addarray = new int* [row1];
		for (int i = 0; i < row1; i++)
		{
			addarray[i] = new int[col1];
		}
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < col1; j++)
			{
				addarray[i][j] = array1[i][j] + array2[i][j];
			}
		}
		cout << endl << endl;
		cout << " Addition of array:" << endl;
		DisplayMatrix(addarray,row1,col1); // dispaly of added matrix
		DeleteMatrix(addarray, row1); // deleting added array through funtion
	}
	else
	{	
		cout << "\n\n   Invalid Array sizes for Addition "<<endl;
		cout << "  !! Sizes of rows and columns should be same !!";
	}
	DeleteMatrix(array1, row1); // deleting array through funtion
	DeleteMatrix(array2, row2); // deleting array through funtion
}

void ScalarMatrixSubtraction()
{
	system("cls");
	cout << "\n\t\t\t\t\t|--- Scalar Matrix Substraction ---|"<<endl << endl;
	int row = 0, col = 0;
	int** array;
	cout << "\n\n Enter array: " << endl;
	CreateMatrix(array, row, col); // creating array through funtion
	int rem;
	cout << endl << endl;
	cout << "Enter Number you want to Remove(from whole matrix): ";
	cin >> rem; // number to remove it from all values of matrix
	for (int i = 0; i < row; i++)
	{
		cout << " | ";
		for (int j = 0; j < col; j++)
		{
			cout << array[i][j] - rem << " ";
		}
		cout << "| " << endl;
	}
	DeleteMatrix(array, row); // deleting array through funtion
}

void SubtractionoftwoMatrices()
{
	system("cls");
	cout << "\n\t\t\t\t\t|--- Substraction of two Matrices ---|"<<endl;
	cout << endl << endl;
	cout << "\n For Substraction of two matrices size of Rows and Columns of both arrays must be equal !!" << endl;
	int** array1;
	int row1;
	int col1;
	int** array2;
	int row2;
	int col2;
	cout << "\n\n Array 1: ";
	cout << endl;
	CreateMatrix(array1, row1, col1); // creating array1 through funtion
	cout << "\n\n Array 2: ";
	cout << endl;
	CreateMatrix(array2, row2, col2); // creating array2 through funtion
	if (row1 == row2 && col1 == col2)
	{
		int** subarray = new int* [row1];
		for (int i = 0; i < row1; i++)
		{
			subarray[i] = new int[col1];
		}
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < col1; j++)
			{
				subarray[i][j] = array1[i][j] - array2[i][j]; //substracting arrays
			}
		}
		cout << endl << endl;
		cout << " Substraction of array:" << endl;
		DisplayMatrix(subarray, row1, col1);// display of matrix
		DeleteMatrix(subarray, row1); // deleting substracted array through funtion
	}
	else
	{
		cout << "\n\n   Invalid Array sizes for Addition " << endl;
		cout << "  !! Sizes of rows and columns should be same !!";
	}
	DeleteMatrix(array1, row1); // deleting array1 through funtion
	DeleteMatrix(array2, row2); // deleting array2 through funtion
}

void ScalarMatrixMultiplication()
{
	system("cls");
	cout << "\n\t\t\t\t\t|--- Scalar Matrix Mulplication ---|"<<endl << endl;
	int row = 0, col = 0;
	int** array;
	cout << "\n\n Enter array: " << endl;
	CreateMatrix(array, row, col); // creating array through funtion
	int mul;
	cout << endl << endl;
	cout << "Enter Number you want to Multiply(to whole matrix): ";
	cin >> mul;
	for (int i = 0; i < row; i++)
	{
		cout << " | ";
		for (int j = 0; j < col; j++)
		{
			cout << mul * array[i][j] << " ";
		}
		cout << "| " << endl;
	}
	DeleteMatrix(array, row); // deleting array2 through funtion
}

void MultiplicationoftwoMatrices()
{
	// If column of first matrix in not equal to row of second matrix,
	// ask the user to enter the size of matrix again.

	system("cls");
	cout << "\n\t\t\t\t\t|--- Multiplication of two Matrices ---|"<<endl;
	int** array1;
	int row1;
	int col1;
	int** array2;
	int row2;
	int col2;
	cout << "\n\n Array 1: ";
	cout << endl;
	CreateMatrix(array1, row1, col1); // creating array1 through funtion
	cout << "\n\n Array 2: ";
	cout << endl;
	CreateMatrix(array2, row2, col2); // creating array2 through funtion
	if (col1 != row2)
	{
		cout << "\n\tInvalid row or column size for multiplication of arrays! ";
		return; // exit the function
	}
	int** mularray = new int* [row1];
	for (int i = 0; i < row1; i++)
	{
		mularray[i] = new int[col1];
	}
	for (int i = 0; i < row1; i++) 
	{
		for (int j = 0; j < col2; j++) 
		{
			mularray[i][j] = 0;
			for (int k = 0; k < col1; k++) {
				mularray[i][j] += array1[i][k] * array2[k][j];
			}
		}
	}
	DisplayMatrix(mularray, row1, col2);
	DeleteMatrix(array1, row1);
	DeleteMatrix(array2, row1);
	DeleteMatrix(mularray, row1);
}

void MatrixTranspose()
{
	system("cls");
	cout << "\n\t\t\t\t\t|--- Matrix Transpose ---|";
	int** array;
	int row;
	int col;
	cout << "\n\n Array : "<<endl<<endl;
	CreateMatrix(array, row, col); // creating array through funtion 
	int** transarray = new int* [col];
	for (int i = 0; i < col; i++)
	{
		transarray[i] = new int[row];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			transarray[j][i] = array[i][j]; // taking transpose of array
		}
	}
	cout << endl << endl;
	cout << " Transpose of array:" << endl;
	for (int i = 0; i < col; i++)
	{
		cout << " | ";
		for (int j = 0; j < row; j++)
		{
			cout << transarray[i][j] << " "; // printing transposed array
		}
		cout << "| " << endl;
	}
	DeleteMatrix(array, row); // deleting array through funtion
	DeleteMatrix(transarray, col); // deleting transposed array through funtion
}

void MatrixDeterminant()
{
	system("cls");
	cout << "\n\t\t\t\t\t|--- Scalar Matrix Mulplication ---|" << endl<<endl<<endl;
	int num,size;
	cout << "\tOptions:" << endl<<endl;
	cout << "\t Press 1		For Determinant of 2x2 Matrix " << endl;
	cout << "\t Press 2		For Determinant of 3x3 Matrix "<<endl;
	cout << "\n Enter your choice		= ";
	cin >> num;
	int determinant = 0;
	if (num == 1) // 2x2 matrix determinant
	{
		const int row = 2;
		const int col = 2;
		int array[row][col];
		cout << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << " Element of array [" << i << "] [" << j << "] : ";
				cin >> array[i][j];
			}
		}
		cout << "\n Array:" << endl;
		for (int i = 0; i < row; i++)
		{
			cout << "| ";
			for (int j = 0; j < col; j++)
			{
				cout << array[i][j] << " ";
			}
			cout << " |" << endl;
		}
		determinant = array[0][0] * array[1][1] - array[0][1] * array[1][0];
	}
	else if (num == 2) // 3x3 matrix determinant
	{
		const int row = 3;
		const int col = 3;
		int array[row][col];
		cout << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << " Element of array [" << i << "] [" << j << "] : ";
				cin >> array[i][j];
				}
			}
			cout << "\n Array:" << endl;
			for (int i = 0; i < row; i++)
			{
				cout << "| ";
				for (int j = 0; j < col; j++)
				{
					cout << array[i][j] << " ";
				}
				cout << " |" << endl;
			}
		determinant = array[0][0]*(array[1][1] * array[2][2] - array[1][2] * array[2][1])- array[0][1]*(array[1][0] * array[2][2] - array[1][2] * array[2][0])+ array[0][2]*(array[1][0] * array[2][1] - array[1][1] * array[2][0]);	
	}
	cout << "\n Determinant of Matrix is		= " << determinant;
}

void DeleteMatrix(int** &array,int &n)
{
	for (int i = 0; i < n; i++)
		delete[] array[i];
	delete[] array;
}

void ExitProgram()
{
	cout << "\n\t\t\t\t\t\t|--- Exiting Program ---|" << endl << endl;
	exit(0);
}