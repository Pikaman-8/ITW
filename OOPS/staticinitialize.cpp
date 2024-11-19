#include <bits/stdc++.h>
using namespace std;

class Test
{
	public:
		//static int a;
		int a;   //opt
		void get()
		{
			a=10;    //opt
			cout<<"a="<<a<<endl;
		}
};
//int Test::a=10;

int main()
{
	Test T;
	//Test::a=100;
	//cout<<"a="<<Test::a<<endl;
	T.a=100;  //opt
	cout<<"a="<<T.a<<endl;
	T.get();
}
