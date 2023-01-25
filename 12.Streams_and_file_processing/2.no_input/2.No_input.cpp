/*
 *if the user keeps on pressing enter 
 *we do not want consider enter a valid input
 * we want to ignore enter 
 */

#include<iostream>
using namespace std;

int main()
{
 int i;
 cout <<endl;
 cout<<"enter the integer :"<<endl;
 cin.unsetf(ios::skipws);
 cin >>i;
 if( cin.good() )
 {
 	cout << "" <<endl;
	return 0;
  }
 
 cout << "Error" <<endl;
 return 0;
}
