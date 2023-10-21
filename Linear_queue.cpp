#include<iostream>
using namespace std;
#define SIZE 5
#define ERROR -999999

class LinearQ
{
    private:
    int array[SIZE];
    int front,rear;
    public:
    LinearQ();
    void Enqueue(int element);
    int Dequeue();
    void Display();
};
LinearQ::LinearQ()
{
    front=-1;
    rear=-1;
}
void LinearQ::Enqueue(int element)
{
    if(rear==(SIZE-1))
    {
        cout<<"Queue is Full"<<endl;
        return;
    }
    if(front==(-1))
    {
        front=0;
    }
    array[++rear]=element;
}
int LinearQ::Dequeue()
{
    if(front==(-1)&&rear==(-1))
    {
        cout<<"Queue is Empty"<<endl;
        return ERROR;
    }
    else
    return array[front++];
}
void LinearQ::Display()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    LinearQ l;
    l.Dequeue();
    l.Enqueue(10);
    l.Enqueue(20);
    l.Display();
    l.Dequeue();
    l.Display();
    l.Enqueue(30);
    l.Enqueue(40);
    l.Enqueue(50);
    l.Enqueue(60);
    l.Display();
    return 0;
}