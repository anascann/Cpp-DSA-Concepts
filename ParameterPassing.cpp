//****Parameter passing*****
//there are 3 ways to do so:
//	1. Pass by value.
//	2. Pass by adress.
//	3. pass by refrence.
//	
//comment the rest part to make the code functional.	
#include<iostream>
using namespace std;
1. Pass by value.         //uncomment the part of code you want to use.
int add(int x,int y){
	return x+y;
}
int main(){
	int a=2;
	int b=3;
	cout<<add(a,b);//Here we are passing the actual parameters.
}

2. Pass by Adress.    //uncomment the part of code you want to use

int add(int *x, int *y){//now *x *y accesses the value variable &a, &b
	return *x+*y;// *x *y are derefrencing pointer.
}

int main(){
	int a=2;//define your variables.
	int b=3;
	cout<<add(&a, &b);//make the variable accessible to the pointers via & operator.
}

//3. Pass by refrence//
int add(int &x, int &y){//a refrence is made i.e a duplicacy of the name of variable is made.
 return x+y;// &x=a; &y=b; x and y takes the value of a and b.
	
}

int main()
{
	int a=2;
	int b=3;
	cout<<add(a,b);//things remain same as of the pass by value.
}
