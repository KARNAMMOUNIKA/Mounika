#include<iostream>
using namespace std;
class parent
{
	public:
		void display()
		{
			cout<<"parent called details\n";
		}
		
};
class child:public parent
{
	public:
		void display1()
		{
			cout<<"child called details\n";
		}
};
int main()
{
	parent obj1;
	child obj2;
	obj2.display();
	
	return 0;
}
