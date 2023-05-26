#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
	public :
		
	int id;
	char s_name[100];
	int s_count;
	
	void set()
	{
		this->id=id;
		strcpy(this->s_name,s_name);
		this->s_count=s_count;
		
		cout<<"Enter id =";
		cin>>id;
		cout<<"Enter staff name =";
		cin>>s_name;
		cout<<"Enter staff count=";
		cin>>s_count;
	}
	void get()
	{
		cout<<"id ="<<id<<endl;
		cout<<"staff name ="<<s_name<<endl;
		cout<<"staff count ="<<s_count<<endl;
	}
};
main()
{
	Hotel h1;
	
	h1.set();
	h1.get();
}
