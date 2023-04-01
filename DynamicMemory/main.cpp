#include<iostream>
using namespace std;

int* push_Back (int arr[], int n, int value)
void main()
{
	setlocale(LC_ALL, "");
	int n = 0;
	int value;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n + 1];
	cout << "Введите добавляемое значение: "; cin >> value;
	int* buffer = new int[n + 1];
	//int x = 7;//добавляемое значение
}
	int* push_Back(int arr[], int n, int value)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
	//int* newArr = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//newArr[n] = x;
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n ++;
	cout << "Массив с добавленным элементом: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	delete[] arr;
}
