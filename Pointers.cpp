//Pointers are used to aceess the extrenal resources which are generally out of the program.
//which are present on the Heap of the main memory.

#include<iostream>
using namespace std;

int main()
{
	int a=10;//declaring a simple variable of int type.
	int *p;//declaring a pointer.
	cout<<a<<endl;//printing a variable.
	p=&a;//using & to access the adress of the variable a. & is used to acess the adress.
	cout<<*p<<endl;// *p is used as a defrencing value to print the value which the pointer holds the adress of.
	
	p=new int[5]; //it's a method to acess the memory of a heap by using
	//new operator in cpp and malloc in c.

}
