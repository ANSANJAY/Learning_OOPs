/*
 *demonstrate the usage of good bit 
 */

#include<iostream>
using namespace std;

int main()
{
	int i;
	while(true)
	{
	cout<<"Enter an integer :";
	cin >> i;
	if( cin.good() )
	{
		{
			cin.ignore(10,'\n');
			break;
		}
	}
	cin.clear();
	cout<<"Incorrect output"<<endl;
	cin.ignore(10,'\n');
	}
	cout<<"integer is"<<i<<endl;
	return 0;
}
