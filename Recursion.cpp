/*
Nick Hannon
M.Luttrel - CS110C
Homework Assignment 1
Recursion - This program is a homework assignment demonstrating 
the presence of recursion in C++ programs. The first section of the program
demonstrates utility in reversing an integer.
The second part demonstrates the writeBackward2 Function on page 61
of the assigned textbook only in C++.
*/

#include <iostream>
#include <iomanip>
using namespace std;

//an example of recursion using integers
int recursion(int a)
{
	
	if (a/10>=1)
	{
		cout << a%10;
		recursion (a/10);
	}
}

//a reworked example shown in the book on page 61
void writeBackward2(string s)
{
	int length = s.size();
	if(length>0)
	{
		writeBackward2(s.substr(1,length-1));
		cout << "About to write first character of string: " << s;
		cout <<setw(15-length)<< s.substr(0,1)<< endl;
	}
}

//main
int main()
{
	int x;
	string y;
	
	cout << endl << "Please enter an integer you would like to reverse: ";
	cin >> x;
	
	cout << recursion(x)<<endl;
	
	cout << endl << "Please enter a string you would like reversed: ";
	cin >> y; //I would use the getline fuction here but with recursion, I didn't want to risk crashing my computer
	
	cout << endl<< "Enter writeBackward2 with string: " << y <<endl;
	
	writeBackward2(y);
	
	
	return 0;
}

