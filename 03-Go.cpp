#include<iostream>
using namespace std;

int main()
{
	int num [] = {1,2,3,4,5};
	int* ptr = num;
	
	for(int i = 1;i<=5;i++)
	{
		cout << *ptr << endl;
		ptr++;
	}
	
}
