#include<iostream>
using namespace std;
class Base{
	public:
		int base;
		void display()
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
	Base *ptr_base;
	//Base *ptr_base=&b;just revision
	Derived d;
	ptr_base=&d;//pointer point derived obj but display func call of base class ,this is late binding
	//run time polymorphism
	ptr_base->base=990;
	ptr_base->display();
	Derived *ptr_derived;
	ptr_derived=&d;
	ptr_derived->base=67;
	ptr_derived->drived=23;
	ptr_derived->display();//as derived_pointer point to derived so derived display() will call
}
