/* Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof ) */

#include<iostream>
using namespace std;
int main()
{
	int a;
	int* b=&a;

	float p;
	float* q=&p;

	char c;
	char* d=&c;

	bool x;
	bool* y=&x;

	double m;
	double* n=&m;

	long r;
	long* s=&r;

	cout<<sizeof(a)<<endl;
	cout<<b<<endl;
	cout<<sizeof(b)<<endl;

	cout<<sizeof(p)<<endl;
	cout<<q<<endl;
	cout<<sizeof(q)<<endl;
	
	cout<<sizeof(c)<<endl;
	cout<<d<<endl;
	cout<<sizeof(d)<<endl;

	cout<<sizeof(x)<<endl;
	cout<<y<<endl;
	cout<<sizeof(y)<<endl;

	cout<<sizeof(m)<<endl;
	cout<<n<<endl;
	cout<<sizeof(n)<<endl;

	cout<<sizeof(r)<<endl;
	cout<<s<<endl;
	cout<<sizeof(s)<<endl;

	return 0;
}

	
