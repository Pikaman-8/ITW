#include <iostream>
using namespace std;

class Test1
{
	int a,b;
	public:
		friend class Test2;
		void getab()
		{
			cout<<"Enter a,b values";
			cin>>a>>b;
		}
};

class Test2
{
	public:
		void putab(Test1 t1)
		{
			cout<<"a="<<t1.a<<endl;
			cout<<"b="<<t1.b<<endl;
		}
};

void main()
{
	Test T1;
	Test T2;
	T1.getab();
	T1.putab(t1);
	getch();
}