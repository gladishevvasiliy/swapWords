#include <stdio.h>
#include <iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include <string.h>
using namespace std;

int main()
{
	ifstream in("text.txt");
	if (!in.is_open())
	{
		cout << "input file open error!";
		system("pause");
		return 1;
	}
	ofstream out("swap.txt");
	if (!out.is_open())
	{
		cout << "output file open error!";
		system("pause");
		return 1;
	}
	while (!in.eof()) {
		char s1[100], s2[100];
		in >> s1;
		in >> s2;
		cout << s2 << ' ' << s1 << ' ';
		out << s2 << ' ' << s1 << ' ';
	} 
	system("pause");
	return 0;
}