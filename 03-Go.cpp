#include<iostream>
using namespace std;

int main()
{
	int num [5];
	int* ptr = num;
	for(int i = 0;i<5;i++)
	{
		cout << i+1 <<".) Enter number : ";
		cin >> num[i];
	}
	
	for(int i=1;i<=5;i++)
	{
		cout << *ptr << endl;
		ptr++;
	}
	
}
