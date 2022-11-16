#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	char op;
	cout<<"enter your first number:";
	cin>>a;
	cout<<"enter your operation:";
	cin>>op;
	cout<<"enter your second number:";
	cin>>b;
	int result;
	if (op == '+' ){
		result = a+b;
	}else if (op =='-' ){
		result = a-b;
	}else if ( op == '*'){
		result = a*b;
	}else if ( op =='/' ){
		result = a/b;
	}
	cout<<"your result is:"<<result;
	return 0;
}
