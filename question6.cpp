#include<iostream>
#include<string.h>
using namespace std;

class Points
{
	public :
		int a;
		void set(int n)
		{
			this->a=n;
		}
		void get()
		{
			cout<<"A="<<this->a<<endl;
		}
	 Points	operator ++ (int)
		{
			Points temp;
			temp.a=this->a++;
			return temp;
		}
};
class Show
{
	public :
		int b;
		void setdata(int n1)
		{
			this->b=n1;
		}
		void getdata()
		{
			cout<<"B="<<this->b<<endl;
		}
	Show operator -- (int)
		{
			Show temp;
			temp.b=this->b--;
			return temp;
		}
		
};
main()

{
	Points p1;
	p1.set(10);
	p1.get();
	
	p1.a++;
	p1.get();
	
	Show s1;
	s1.setdata(8);
	s1.getdata();
	
	s1.b--;
	s1.getdata();
}
