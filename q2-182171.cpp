#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
void input(int size,int array[])
 {
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	} 
 }
 void output(int size,int array[])
 {
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<endl;
	} 
 }
	 
void ascend(int size ,int array[])
{
	int x=size;
	for(int j=0;j<x;j++)
	{
		int index=0;
		int max=array[0];
		for(int i=0;i<size;i++)
		{
			if(array[i]>max)
			{
				max=array[i];
				index=i;
			}
		}
		swap(array[index],array[size-1]);
		size--;
	}
}

int main ()
{
	int size;
	cout<<"Input size=";cin>>size;
	int *array=new int[size];
	input(size,array);
	ascend(size,array);
	cout<<"Output in ascending order"<<endl;
	output(size,array);
}
