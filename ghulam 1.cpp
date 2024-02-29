#include<iostream>
using namespace std;
class student
{
	protected:
		string Name;
		int Roll_No;
		int Avg;
		
		public:
			void set_data()
			{
				Name = "Ghulam Nabi";
				Roll_No = 71;
				Avg = 18;
			}
			void print_data()
			{
				cout<<" Name of student "<<Name<<endl;
				
				cout<<" Roll No of student "<<Roll_No<<endl;
				
				cout<<" Avg of student "<<Avg<<endl;
			}
};
class graduate_student:public student
{
	protected:
		int semester;
		int year;
		public:
			void set_data1()
			{
				set_data1();
				semester = 4;
				year = 2;
			}
			void print_data1()
			{
				print_data();
				
				cout<<" semester of student is = "<<semester<<endl;
				
				cout<<" year of student "<<year<<endl;
			}
};
class MS_student:public graduate_student
{
	int newid;
	public:
		void set_data2()
		{
			set_data1();
			newid = 123456;
		}
		void print_data2()
		{
			print_data1();
			
			cout<<" newid of student "<<newid<<endl;
		}
};
int main ()
{
	student Ghulam;
	Ghulam.set_data ();
	Ghulam.print_data ();
	
	cout<<"----------------"<<endl;
	cout<<"             "<<endl;
	
	MS_student Ghulam
	Ghulam.set_data2 ();
	Ghulam.print_data2 ();
	
}

