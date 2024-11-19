#include <iostream>
using namespace std;

class Library
{
	string book;
	int id;
	static int bookcount;
	
	public:
		Library()
		{
			
		}
		Library(int initbooks)
		{
			bookcount = initbooks;
		}
		static void addbook(int amount)
		{
			bookcount = bookcount + amount;
			cout << Total books: << bookcount << endl;
		}
		
};

int main()
{
	
}