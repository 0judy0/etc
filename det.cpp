#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <stdlib.h>
#define MAXSIZE 100
using namespace std;

int main()
{
	int mat_num, plus_num = 0, minus_num = 0, double_plus = 1, double_minus = 1;
	cin >> mat_num;
	int mat[MAXSIZE][MAXSIZE];
	int plus[MAXSIZE];
	int minus[MAXSIZE];

	for (int i = 0; i < mat_num; i++)
	{
		for (int j = 0; j < mat_num; j++)
		{
			cin >> mat[i][j];
		}
	}

	int start_y = 0;
	int start_x = 0;
	for (int k = 0; k < mat_num; k++)
	{
		int i = start_y;
		int j = start_x;
		double_plus = 1;
		for (int l = 0; l < mat_num; l++)
		{
			plus[l] = mat[i][j];
			i++;
			j++;
			if (j == mat_num)
			{
				j = 0;
			}
		
		}

		for (int l = 0; l < mat_num; l++)
		{
			double_plus *= plus[l];
	
		}
		plus_num += double_plus;
		start_x++;
		
		if (mat_num == 2)
		{
			break;
		}
	}

	start_y = 0;
	start_x = 0;
	if (mat_num == 2)
	{
		start_x = 1;
	}
	for (int k = 0; k < mat_num; k++)
	{
		int i = start_y;
		int j = start_x;
		double_minus = 1;
		for (int l = 0; l < mat_num; l++)
		{
			minus[l] = mat[i][j];
			i++;
			j--;
			if (j == -1)
			{
				j = mat_num - 1;
			}
	
		}

		for (int l = 0; l < mat_num; l++)
		{
			double_minus *= minus[l];
	
		}
		minus_num += double_minus;
		start_x++;
		
		if (mat_num == 2)
		{
			break;
		}
	}

	cout << plus_num - minus_num << endl;

	
	return 0;
}