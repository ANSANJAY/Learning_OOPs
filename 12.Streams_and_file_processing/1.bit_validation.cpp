#include<iostream>
using namespace std;

int main()
{
	int  i;
	while(true)
		{
			cout<<"\n Enter an integer: ";
			cin >> i;
			if(cin.good())
			{
				cin.ignore(10,'\n');
				break;
			}
			cin.clear();
			cout << "Incorrect input"<<endl;
			cin.ignore(10,'\n');
		}
	cout << "integer is "<<i<<endl;
	return 0;
}
