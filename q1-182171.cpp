#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main ()
{
	int x=5,y=10;
	int*p=&x;
	int*q=&y;
	cout<<"pointer P="<<p<<endl;
	cout<<"pointer Q="<<q<<endl;
	cout<<" X="<<x<<endl;
	cout<<" Y="<<y<<endl;
	int temp1;
	temp1=x;
	x=y;
	y=temp1;
	cout<<"AFTER SWAPPING THE VALUES OF X AND Y"<<endl<<endl;
	cout<<"pointer P="<<p<<endl;
	cout<<"pointer Q="<<q<<endl;
	cout<<" X="<<x<<endl;
	cout<<" Y="<<y<<endl;
	int*temp2;
	temp2=p;
	p=q;
	q=temp2;
	cout<<"AFTER SWAPPING THE VALUES OF P AND Q"<<endl<<endl;
	cout<<"pointer P="<<p<<endl;
	cout<<"pointer Q="<<q<<endl;
	cout<<" X="<<x<<endl;
	cout<<" Y="<<y<<endl;
}