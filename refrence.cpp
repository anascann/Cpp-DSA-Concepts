//A refrence is a nickname given to the variable.
// it's defined by the ampresend and intializing a varibale name.
//used for parameter passing in fucntions.
#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int &r=a;
	cout<<a<<endl;//varibale a.
	cout<<r<<endl;//prints the same value of that of a. it's a duplicate of a.
	r++;
	cout<<a<<endl; //values gets change in both. actually it's one variable with 2 names.
 } 
