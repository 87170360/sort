// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int>& data)
{
	//int count = 0;
	for (size_t i = 0; i < data.size() - 1; ++i)
	{		
		for (size_t j = 0; j < data.size() - i - 1; ++j)
		{
			if (data[j] > data[j + 1])
			{
				int tmp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = tmp;
			}
			//count++;
		}
	}
	//cout << count;
}

void insertSort(vector<int>& data)
{
	for (size_t i = 0; i < data.size(); ++i)
	{
		for (size_t j = i; j > 0; --j)
		{
			if (data[j] < data[j - 1])
			{
				int tmp = data[j];
				data[j] = data[j - 1];
				data[j - 1] = tmp;
			}
		}
	}
}

void selectSort(vector<int>& data)
{	
	for (size_t i = 0; i < data.size(); ++i)
	{
		int min = i;
		for (size_t j = i; j < data.size(); ++j)
		{
			if (data[min] > data[j])
			{
				swap(data[min], data[j]);
			}
		}
	}
}

template<typename T>
void shell_sort(T arr[], int len) {
	int gap, i, j;
	T temp;
	for (gap = len >> 1; gap > 0; gap >>= 1)
	{
		for (i = gap; i < len; i++)
		{
			temp = arr[i];
			for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
			{
				arr[j + gap] = arr[j];
			}
   			arr[j + gap] = temp;
		}
	}
}


void print_vector(vector<int> data)
{
	for (vector<int>::iterator it = data.begin(); it != data.end(); ++it)
	{
		std::cout << ' ' << *it << " ";		
	}
	std::cout << '\n';
}

void print_array(int array[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		std::cout << ' ' << array[i] << " ";
	}
	std::cout << '\n';
}

int _tmain(int argc, _TCHAR* argv[])
{
	//int myints[] = { 16, 2, 77, 29, 1, 3, 3, 5, 5, 1, 2, 3, 9, 7, 6, 4, 3 };
	//vector<int> data(myints, myints + sizeof(myints) / sizeof(int)); 
	//print_vector(data);
	//bubbleSort(data);
	//insertSort(data);
	//selectSort(data);
	//shell_sort(myints, sizeof(myints) / sizeof(int));
	//print_array(myints, sizeof(myints) / sizeof(int));
	//print_vector(data);


	return 0;
}

