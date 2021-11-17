#include <iostream>
#include <iomanip>

using namespace std;

void Input(int** a, const int rowCount, const int colCount)
{
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
		cout << endl;
	}
}
void Print(int** a, const int rowCount, const int colCount)
{
	cout << endl;
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0; j < colCount; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
void MinMax(int** a, const int rowCount, const int colCount)
{
	int jmin = 0;
	int jmax = 0;
	int temp = 0;
	for (int i = 0; i < rowCount; i++)
	{

		int jmin = 0;
		int jmax = 0;
		int temp = 0;
		for (int j = 0; j < colCount; j++)
		{
			if (a[i][j] < a[i][jmin])

				jmin = j;

			if (a[i][j] > a[i][jmax])
				jmax = j;

		}
		temp = a[i][jmin];
		a[i][jmin] = a[i][jmax];
		a[i][jmax] = temp;

	}

}
int main()
{
	int k;
	int n;
	cout << "k = ";
	cin >> k;
	cout << endl;
	cout << "n = ";
	cin >> n;

	int** a = new int* [k];
	for (int i = 0; i < k; i++)
		a[i] = new int[n];

	Input(a, k, n);
	Print(a, k, n);
	MinMax(a, k, n);
	Print(a, k, n);
}