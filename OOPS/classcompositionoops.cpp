#include <bits/stdc++.h>
using namespace std;

class Author
{
	string a_name;
	friend class Book;
};

class Book
{
	string b_name;
	float price;
	Author A;
	public:
	void get()
	{
		cout<<"Enter author's name and book's name respectively:"<<endl;
		cin>>A.a_name>>b_name;
		cout<<"Enter price:"<<endl;
		cin>>price;
	}
	void show()
	{
		cout<<"Author's name:"<<A.a_name<<endl;
		cout<<"Book's name:"<<b_name<<endl;
		cout<<"Price:"<<price<<endl;
	}	
};

int main()
{
	Book B;
	B.get();
	B.show();
}