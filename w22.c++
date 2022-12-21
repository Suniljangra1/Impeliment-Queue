// implement Queue in C++
#include<bits/stdc++.h>
using namespace std;
class Queue 
{
  int array[100];
  int front ;
  int rear;
  public:
    Queue()
    {
        front = -1;
        rear = -1;
    }  
    void Enqueue_(int value)
    {
        if(rear == -1)
        {
            front ++;
            rear ++;
            array[rear]=value;
        }
        else if(rear == 99)
        cout<<" overflow \n";
        else {
            rear++;
            array[rear]= value;
        }
    }
    void Dequeue_()
    {
        if(rear == -1)
        cout<<"underflow\n";
        else if (rear==front){
            cout<<array[front]<<" Deleted  \n";
            front --;
            rear --;
            
        }
        else {
            cout<<array[front]<<" Deleted \n";
           
            front++;
        }
    }
    void print_()
    {
        for(int i=front; i<=rear;i++)
        {
            cout<<array[i]<<" ";
        }
    }
};
int main()
{
    Queue u;
    u.Enqueue_(10);
    u.Enqueue_(15); 
    u.Enqueue_(20);
    u.Dequeue_();
    u.print_();
}