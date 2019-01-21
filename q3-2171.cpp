#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	int array[3]={6,2,1};
	int *arr=array;
	for(int i=0;i<3;i++)
	{
	 *(arr+i)=array[2-i];
	}
	for(int i=0;i<3;i++)
	{
		cout<<*(arr+i)<<endl;
	}
}