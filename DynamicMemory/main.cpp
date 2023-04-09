#include<iostream>
using namespace std;

void FillRand(int arr[], int n);
template<typename T>
void Print(T arr[], int n);

template<typename T>
T* push_Back(T arr[], int& n, T value);
template<typename T>
T* push_front(T arr[], int& n, T value);
template<typename T>
T* pop_back(T arr[], int& n);
template<typename T>
T* pop_front(T arr[], int& n);

template<typename T>
T* insert(T arr[], int& n, int index, T value);
template<typename T>
T* erase(T arr[], int& n, int index);



void main()
{
	setlocale(LC_ALL, "");
	int n;
	int value;
	int index;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_Back(arr, n, value);
	Print(arr, n);

	arr = push_front(arr, n, value);
	Print(arr, n);

	arr = pop_back(arr, n);
	Print(arr, n);

	arr = pop_front(arr, n);
	Print(arr, n);

	cout << " Укажите индекс для вставки нового значения: "; cin >> index;
	arr = insert(arr, n, index, value);
	Print(arr, n);

	cout << " Укажите индекс для удаления значения: "; cin >> index;
	arr = erase(arr, n, index);
	Print(arr, n);
	delete[] arr;

}
template<typename T>
T* push_Back(T arr[], int& n, T value)
{
	T* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
	return arr;
}
template<typename T>
T* push_front(T arr[], int& n, T value)
{
	T* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return buffer;
}
template<typename T>
T* pop_back(T arr[], int& n)
{
	T* buffer = new int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}
template<typename T>
T* pop_front(T arr[], int& n)
{
	T* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i+1];
	delete[] arr;
	return buffer;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;

	}
}
template<typename T>
void Print(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}
template<typename T>
T* insert(T arr[], int &n, int index, T value)
{
	T* buffer = new int[n + 1];
	for (int i = 0; i < index; i++)
	{
		buffer[i] = arr[i];
	}
	
	buffer[index] = value;

	for (int i = index + 1; i < n + 1; i++)
	{
		buffer[i] = arr[i - 1];
	}
	delete[] arr;
		
	arr = buffer;
	n++;
	return arr;
	
}
template<typename T>
T* erase(T arr[], int& n, int index)
{
	T* buffer = new int[n - 1];
	for (int i = 0; i < index; i++)
	{
		buffer[i] = arr[i];
	}

	for (int i = index; i < n - 1; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}
