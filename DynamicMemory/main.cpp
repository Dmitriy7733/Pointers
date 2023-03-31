#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
	int x = 7;//добавляемое значение
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
	int* newArr = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		newArr[i] = arr[i];
	}
	newArr[n] = x;
	delete[] arr;
	arr = newArr;
	n += 1;
	cout << "Массив с добавленным элементом: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	delete[] arr;
}
