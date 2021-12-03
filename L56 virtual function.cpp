#include<iostream>
using namespace std;
class Base{
	public:
		int base;
		void virtual display()
		{
			cout<<"Value of Base : "<<base<<endl;
		}
};
class Derived:public Base{
	public:
		int drived;
		void display()
		{
			cout<<"Value of Base : "<<base<<endl;
			cout<<"Value of Derived : "<<drived<<endl;
		}
};
int main()
{
	Base b;
	Base *ptr_b;
	Derived d;
	d.drived=90;
	ptr_b=&d;
	ptr_b->base=87;
	ptr_b->display();//pointer point to object call to that object function because of virtual function of pointer 
}
