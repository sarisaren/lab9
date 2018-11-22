/*  show string repeatedly by shifting top character of string to right. */

#include <iostream>
using namespace std;

int main()
{
	char str[20], *p;

	cout << "Input about 10 characters of string"<<endl;
	cin >> str;

// Pointer variable refers to address of string
	p=str;
// Show string by shifting top character of string to right
	for(int j=0;j<=19;j++)
	{
		for(int i=j;i<20;i++)
		{
			cout<<*(p+i);
		}
		cout<<endl;
	}

return 0;
}
