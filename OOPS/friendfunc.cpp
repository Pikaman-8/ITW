#include <iostream>
using namespace std;

class Test2;
class Test1
{
	int a;
	friend void big(Test1, Test2);
};

class Test2
{
	int b;
	friend void big(Test1, Test2);
};

void big(Test1 T1, Test2 T2)
{
	T1.a = 5; 
	T2.b = 7;
	if(T1.a > T2.b)
	cout<<"a is greater."<<endl;
	else
	cout<<"b is greater."<<endl;
}

int main()
{
	Test1 T1;
	Test2 T2;
	big(T1, T2);
}
