#include<iostream>
using namespace std;
class wall
{
	double length;
	public:
		wall()
		{
			length=5.5;
			cout<<"creating awall"<<endl;
			cout<<"length"<<length;
		}
};
int main()
{
	wall wall1;
	return 0;
}
