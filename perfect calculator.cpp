#include<iostream>
using namespace std;
int main()
{
	cout<<"WELCOME TO YOUR CALCULATOR"<<endl;
	char value;
	cout<<"ENTER ANY OPERATOR:(onlny in sign)";
	cin>>value;
	int num1,num2;
	cout<<"ENTER FIRST NUMBER:";
	cin>>num1;
	cout<<"ENTER SECOND NUMBER:";
	cin>>num2;
	if (value=='+')
	cout<<"YOUR ANSWER IS"<<num1+num2<<endl;
	if (value=='-')
	cout<<"YOUR ANSWER IS"<<num1-num2<<endl;
	if (value=='x')
	cout<<"YOUR ANSWER IS"<<num1*num2<<endl;
	if (value=='/')
	cout<<"YOUR ANSWER IS :"<<num1/num2<<endl;
	return 0;
}

