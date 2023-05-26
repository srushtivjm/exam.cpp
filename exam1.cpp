#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	
	char id[]="srushti745";
	char password[]="9327838848";
	char i_no[10];
	char i_name[10];
	int quantity;
	int tax;
	int discount;
	int id2;
	char password2[100];
	char solution;
	
	
	cout<<"Enter id=";
	cin>>id2;
	cout<<"Enter passwrod=";
	cin>>password2;
	cout<<"Enter item no.=";
	cin>>i_no;
	cout<<"Enter item name =";
	cin>>i_name;
	cout<<"Enter Quantity=";
	cin>>quantity;
	cout<<"Enter tax=";
	cin>>tax;
	cout<<"Enter discount";
	cin>>discount;
	
	
	try
	{
		if((strcmp(id,id2)==0) && (strcmp(passwrod[],passwrod2[100])==0))
		{
		    throw solution;
		}
		else
		{
			cout<<"Enter correct id or passwrod";
		}
	}
	catch(char n)
	{
			cout<<"Id="<<id2<<endl;
			cout<<"Passwrod="<<passwrod2<<endl;
			cout<<"Item no ="<<i_no<<endl;
			cout<<"Item name ="<<i_name<<endl;
			cout<<"Quantity="<<quantity<<endl;
			cout<<"Tax="<<tax<<endl;
			cout<<"Discount ="<<discount<<endl;
	}
	return 0;
}
