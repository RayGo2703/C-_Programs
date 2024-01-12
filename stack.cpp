using namespace std;
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
template<class T>
class stack
{
    public:
    T a[MAX];
    int top=-1;
    void push(T x)
    {
        if(top==MAX-1)
        {
            cout<<" Overflow "<<endl;
        }
        else
        {
            top++;
            a[top]=x;
            cout<<x<<" is pushed "<<endl;
        }
    }
    T pop()
    {
        T x;
        if(top==-1)
        {
            cout<<" Underflow "<<endl;
        }
        else
        {
            x=a[top];
            top--;
            cout<<x<<" is popped "<<endl;

        }
    }
    int display()
    {
        int i;
        cout<<"Stack is : ";
        for(i=0;i<=top;i++)
        {
            cout<<a[i]<<" ";
        }
    }
};
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    s.pop();
    s.display();
    return 0;

}

    