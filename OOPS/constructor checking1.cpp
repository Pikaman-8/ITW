#include <iostream>
using namespace std;

class Student 
{
    string name;

    Student() 
	{
        name = "Anonymous";
    }

public:
    void createStudent() 
	{
        Student s1;
        s1.setName("arnav");
        s1.display();
    }

    void display() 
	{
        cout << "Student Name: " << name << endl;
    }

    void setName(string n) 
	{
        name = n;
    }
};

int main() 
{
    Student s1;
	
	s1.createStudent();

    //student.setName("Alice");

    //student.display();

    return 0;
}
