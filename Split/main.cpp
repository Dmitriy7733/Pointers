#include<iostream>
#include<stdlib.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n = 0;
	cout << "Введите размер массива: "; cin >> n;
	
	int* arr = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;

	}
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
	int* even_Arr = new int[n];
	int* old_Arr = new int[n];
	int even_x = 0, old_x = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(arr+i) % 2 == 0)
		{
			*(even_Arr + even_x) = *(arr + i);
			even_x++;
		}
		else
		{
			*(old_Arr + old_x) = *(arr+i);
			old_x++;
		}
	}
	
	cout << "Массив с выделенными четными числами: " << endl;
	
	for (int i = 0; i < even_x; i++)
	{
		cout << *(even_Arr + i) << "\t";
	}
	cout << endl << "Массив с выделенными не четными числами: " << endl;
	
	for (int i = 0; i < old_x; i++)
	{
		cout << *(old_Arr + i) << "\t";
	}
	cout << endl;
	delete[] arr;
	delete[] even_Arr;
	delete[] old_Arr;
	
}