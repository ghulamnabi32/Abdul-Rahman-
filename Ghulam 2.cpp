#include<iostream>
using namespace std;
class A

{
protected:
	
	int x;
	public:
		void set_data()
	
		{
			x = 23;
		}


};
class B
{
	protected:
		int y;
		public:
			void set_data1()
			{
				y = 45;
			}
};
class C:public A,publicB
{
	int z;
	public:
		void set_data2()
		{
			set_data ();
			set_data1 ();
			
			z = 65;
		}
		void print_data()
		{
			cout<<"Data in Data Member of A "<<x<<endl;
			cout<<"Data in Data Member of B "<<y<<endl;
			cout<<"Data in Data Member of C "<<z<<endl;
		}
};
int main()
{
	C obj;
	obj.set_data2();
	obj.print_data();
	
}
