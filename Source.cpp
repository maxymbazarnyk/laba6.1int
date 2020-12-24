// Lab_06_1.cpp 
// < Базарник Максим > 
// Лабораторна робота № 6.1 
// Варіант 1
#include <iostream>
#include <time.h>

using namespace std;

void CreateArray(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void PrintArray(int* a, const int size)
{
	cout << "a[n=" << size << "] = {";
	for (int i = 0; i < size; i++)
		cout << (i > 0 ? ", " : "") << a[i];
	cout << "}" << endl;
}

int GetSum(int* a, const int n) 
{
	int s = 0;

	for (int i = 0; i < n; i++)
	{
		if ((a[i] >= 0) && (i % 5 != 0))
		{
			s += a[i];
		}
	}

	return s;
}

int GetAmount(int* a, const int n) 
{
	int am = 0;

	for (int i = 0; i < n; i++) {
		if ((a[i] >= 0) && (i % 5 != 0))
		{
			am++;
		}
	}

	return am;
}

void Set0(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		if ((a[i] >= 0) && (i % 5 != 0))
			a[i] = 0;
}

int main()
{
	srand((unsigned)time(NULL)); 

	const int k = 20;

	int a[k]; 

	int Low = -21;
	int High = 49;
	cout << "Massive :" << endl;
	CreateArray(a, k, Low, High);
	PrintArray(a, k);

	cout << "Sum = " << GetSum(a, k) << endl;
	cout << "Amount = " << GetAmount(a, k) << endl;
	cout << "Replacing :" << endl;
	Set0(a, k);
	PrintArray(a, k);

	return 0;
}
