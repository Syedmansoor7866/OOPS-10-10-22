#include<iostream>
using namespace std;
int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	else if(n<0)
	{
		return -1;
	}
	else
	{
		return(fib(n-1)+fib(n-2));
	}
}
int main()
{
	int n;
	cout<<"enter n value:";
	cin>>n;
	cout<<"nth term="<<fib(n-1);
	return 0;
}
