#include<iostream>
using namespace std;
#define SIZE 5
#define ERROR -999999

class CircularQ
{
    private:
    int array[SIZE];
    int front,rear;
    public:
    CircularQ();
    void Enqueue(int element);
    int Dequeue();
    void Display();
};
CircularQ::CircularQ()
{
    front=-1;
    rear=-1;
}
void CircularQ::Enqueue(int element)
{
    if(((rear==(SIZE-1))&&(front==0)))
    {
        cout<<"Queue is Full"<<endl;
        return;
    }
    if(rear==(front-1))
    {
        cout<<"Queue is Full"<<endl;
        return;
    }
    if(front==(-1)&&rear==(-1))
    {
        front=0;
        rear=0;
    }
    else
    {
        if(rear==(SIZE-1))
        {
            rear=0;
        }
        else
        {
            rear++;
        }
    }
    array[rear]=element; 
}
int CircularQ::Dequeue()
{
    int data;
    if(rear==(-1)&&front==(-1))
    {
        cout<<"Queue is Empty"<<endl;
        return ERROR;
    }
    data=array[front];
    if(front==rear)
    {
        front=(-1);
        rear=(-1);
    }
    else
    {
        if(front==(SIZE-1))
        {
            front=0;
        }
        else
        {
            front++;
        }
    }
    return data;
}
void CircularQ::Display()
{
    if(front==(-1)&&rear==(-1))
    {
        cout<<"Queue is Empty"<<endl;
    }
    else if(front==rear)
    {
        cout<<array[front]<<endl;
    }
    else if(front<rear)
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=front;i<=4;i++)
        {
            cout<<array[i]<<" ";
        }
        for(int i=0;i<=rear;i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    CircularQ c;
    c.Dequeue();
    c.Display();
    c.Enqueue(10);   //0
    c.Enqueue(20);   //1
    c.Enqueue(30);   //2
    c.Enqueue(40);   //3
    c.Enqueue(50);   //4
    c.Display();
    c.Enqueue(60);   //no space
    c.Display();
    c.Dequeue();     //0 empty
    c.Dequeue();     //1 empty
    c.Enqueue(70);   //0
    c.Enqueue(80);   //1
    c.Display();      
    c.Enqueue(90);   //no space
    c.Dequeue();     //2 empty
    c.Enqueue(100);  //2
    c.Display();
    c.Dequeue();
    c.Dequeue();
    c.Dequeue();
    c.Dequeue();    
    c.Dequeue();
    c.Dequeue();
    c.Display();
    return 0;
}