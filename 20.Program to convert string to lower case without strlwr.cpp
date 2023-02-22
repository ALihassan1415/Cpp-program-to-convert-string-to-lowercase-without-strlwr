#include<iostream>
#include<string>
#include<string.h>
using namespace std;
main()
{
	string s1;
	cout<<"Enter the string  : ";
	getline(cin,s1);
	cout<<"String in Lowercase is : "<<endl;
	for( int i=0 ; i<s1.length() ; i++ )
	{
	if(s1[i]>='A' && s1[i]<='Z')
	s1[i]=s1[i]+32;
	}
	cout<<s1;
	return 0;
}