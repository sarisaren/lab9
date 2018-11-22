/* Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. */

#include<iostream>
using namespace std;
int main()
{
	char str[10];
	cout<<"enter your string"<<endl;
	cin>>str;
	char *p;
	p=str;

	for(int i=0;i<10;i++)
	{
		cout<<*(p+i);
	}
	return 0;
}
