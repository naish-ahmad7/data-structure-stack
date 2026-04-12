#include <iostream>
using namespace std;

class Stack
{
    private:
    int size;
    int *arr;
    int top;

    public:
    
    Stack(int s)
    {
        size=s;
        arr=new int[size];
        top=-1;
    }

    bool isEmpty()
    {
        return top==-1;
    }

 
    bool isFull()
    {
        return top==size - 1;
    }

    
    void push(int value)
    {
        if (isFull())
        {
            cout<<value<<" will not be added because stack is full!\n";
        }
        else
        {
            arr[++top] = value;
            cout<<value<<" pushed!\n";
        }
    }

    
    void pop()
    {
        if (isEmpty())
        {
            cout<<"Stack is empty!\n";
        }
        else
        {
            cout<<arr[top]<<" popped!\n";
            top--;
        }
    }


    void display()
    {
        if (isEmpty())
        {
            cout<<"Stack is empty!\n";
            return;
        }

        cout<<"Stack (top to bottom): ";
        for(int i=top; i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60); 

    cout << endl;

    s.pop();
    s.display();

    return 0;
}
