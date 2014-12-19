//You are given an integer N. Find the digits in this number that exactly divide N and display their count. For N = 24, there are 2 digits - 2 & 4. Both these digits exactly divide 24. So our answer is 2.

#include<iostream>
#include "conio.h"
#include <new>
using namespace std;
int main()
{
	int T;
	int temp1, temp2, val = 0;
	cin >> T;										//No. of Test Cases
	int* N = new (nothrow) int[T];					//Dynamic Allocation of memory
	for (int i = 0; i < T; i++)
	{
		cin >> N[i];
		temp1 = N[i];
		while (temp1)
		{
			temp2 = temp1 % 10;
			if (temp2 != 0){
				if (N[i] % temp2 == 0)
				{
					val += 1;
				}
			}
			temp1 = temp1 / 10;
		}
		cout << val << endl;
		val = 0;
	}
	delete[] N;
	return 0;
}

