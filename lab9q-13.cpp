/*  Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. */

#include<iostream>
using namespace std;
int main()
{
	int l=10,i;
	int arr[l]={1,2,3,4,5,6,7,8,9,10};
	int *p;
	p=arr;

	for(i=0;i<l;i++)
	{
		cout<<*(p+i);
	}
	
	return 0;
}
