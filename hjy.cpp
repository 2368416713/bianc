#include<iostream>
#include<string>
#include <sstream>
using namespace std;
//���ڽ������stringת����long long int 
long long int my_atoi(string str)
{
	long long int a = 0;
//	char *strData = str;
	stringstream stream(str);  
	stream>>a;  
	return a;
}
string print(long long int n) {
	string s1;
	if (n == 0) s1= "��";
	if (n == 1) s1= "Ҽ";
	if (n == 2) s1= "��";
	if (n == 3) s1= "��";
	if (n == 4) s1= "��";
	if (n == 5) s1= "��";
	if (n == 6) s1= "½";
	if (n == 7) s1= "��";
	if (n == 8) s1= "��";
	if (n == 9) s1= "��";
	return s1;
}

