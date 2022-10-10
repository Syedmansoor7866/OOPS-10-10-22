#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter the Age:";
	cin>>age;
	if(age>=18)
	{
		cout<<"Eligible to vote";
	}
	else if(age<0)
	{
		cout<<"INVALID INPUT";
	}
	else
	{
		cout<<"Not Eligible to vote until " << 18-age << " years";
	}
	return 0;
}
