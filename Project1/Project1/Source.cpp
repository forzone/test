#include <iostream>
#include <time.h>
using namespace std;

void printmessage2()
{
	cout << "i love c++" << endl;
}

void printmessage()
{
	cout << "Hello World!" << endl;
	printmessage2();
}
cout << "Anu idi syuda" << endl;
int main()
{
	for (int i = 0; i<5; i++)
		printmessage();
	system("pause");
}
