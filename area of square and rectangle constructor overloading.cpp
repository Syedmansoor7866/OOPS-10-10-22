#include<iostream>
using namespace std;
class area
{
	public:
		area(int a)
		{
			cout<<"area of square="<<a*a<<endl;
		}
		area(int a,int b)
		{
			cout<<"area of rectangle="<<a*b<<endl;
		}
};
int main()
{
	area o1(10);
	area o2(2,50);
	return 0;
}
