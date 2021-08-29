#include <bits/stdc++.h>
using namespace std;
#define max 10
class Stack
{
	int top;
public:
	int a[max];
	Stack()
	{
		top=-1;
	}
	bool isEmpty();	
	int size();
	void push(int x);
	int pop();
	int top1();
	void print();
};
bool Stack::isEmpty()
{
	if(top==-1)
		return true;
	else
		return false;
}
void Stack::push(int x)
{
	if(top>=max-1)
		cout<<"Stack is full";
	else
	{
		top++;
		a[top]=x;		
	}	
}
int Stack::pop()
{
	if(isEmpty())
		cout<<"Stack is Empty";
	else		
	{
		int data =a[top];
		top--;
		return data;
	}
	return 0;
}
int Stack::top1()
{
	if(isEmpty())
		cout<<"Stack is Empty";
	else		
	{
		int data =a[top];
		return data;
	}
	return 0;
}
int Stack::size()
{
	return (top+1);
}
void Stack::print()
{
	int t=top;
	if(t==-1)
		cout<<"Stack is empty";
	else
	{
	for(int i=0;i<t+1;i++)
		cout<<a[i]<<endl;	
	}
}
int main()
{
	class Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.print();
	cout<<"After pop : "<<s.pop()<<endl;
	s.print();
	s.push(3);
	cout<<"size : "<<s.size()<<endl;
	cout<<"After pop : "<<s.pop()<<endl;
	cout<<"top function : "<<s.top1()<<endl;
		return 0;
}
