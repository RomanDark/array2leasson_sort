// ConsoleApplication21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
#pragma region zada4a 1
	
	//int x = 1;
	//int a[5];
	//int min_v = INT_MAX;
	//int max_v = INT_MIN;
	//int min, max;
	//int begin, end;

	//for (int i = 0; i < 5; i++)
	//{
	//	cin >> a[i];

	//	if (a[i] < min_v) { min_v = a[i]; min = i; }
	//	if (a[i] > max_v) { max_v = a[i]; max = i; }
	//}

	//cout << "min = " << min << "\tmax = " << max << endl;

	//min < max ? begin = min, end = max : (begin = max, end = min);

	//cout << "begin = " << begin << "\tend = " << end << endl;

	//for (int i = begin + 1; i < end; i++)
	//{
	//	x = x * a[i];
	//}

	//cout << x << endl;

#pragma endregion


#pragma region  пузырьковая сортировка
	/*const int n = 8;
	double a[n] = { 4, 7, 0 , 20, 17, 11 , 1 , 18 };

	for (int pass = 0; pass < n-1; pass++)
	{
		for (int  i = 0; i < n-1; i++)
		{
			if (a[i] > a[i + 1]) swap(a[i], a[i + 1]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;*/
#pragma endregion

	
#pragma region сортировка со вставкой
	/*const int n = 8;
	double a[n] = { 4, 7, 0 , 20, 17, 11 , 1 , 18 };
	int i = 0;

	for (int pass = 0; pass < n-1; pass++)
	{
		i = pass;
		while ((a[i] < a[i-1]) && i>0)
		{
			swap(a[i], a[i - 1]);
			i--;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}*/
#pragma endregion

#pragma region Бинарный поиск

	const int n = 8;
	double a[n] = { 4, 7, 0 , 20, 17, 11 , 1 , 18 };
	double k = 1; int low, hight, middle;
	int i = 0;
	int key = 18;

	for (int pass = 0; pass < n - 1; pass++)
	{
		i = pass;
		while ((a[i] < a[i - 1]) && i>0)
		{
			swap(a[i], a[i - 1]);
			i--;
		}
	}

	low = 0;
	hight = n - 1;

	while (low<=hight)
	{
		middle = (low + hight) / 2;
		if (key > a[middle]) low = middle + 1; 
		else if (k < a[middle]) hight = middle - 1;
		else break;

	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl << middle << endl;

#pragma endregion




	return 0;
}

