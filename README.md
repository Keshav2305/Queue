# Queue
A cpp code showing basic implementation of Linear Queue and Circular Queue
## Theory
Queue is a linear data structure in which elements can be inserted only from one side of the list called rear, and the elements can be deleted only from the other side called the front. The queue data structure follows the FIFO (First In First Out) principle, i.e. the element inserted at first in the list, is the first element to be removed from the list. The insertion of an element in a queue is called an enqueue operation and the deletion of an element is called a dequeue operation.
Circular Queue is just a variation of the linear queue in which front and rear-end are connected to each other to optimize the space wastage of the Linear queue and make it efficient.
The diagrammatic representation of the Linear queue is given below:
![SCreenshot of representaion](linear_queue.png)
The diagrammartic representaion of circular queue is fiven below:
![Screenshot of Circular queue](circular_queue.png)
## Outcome of the code
The badic implementation of Linear and circular Queue.
## Output screenshot
### Output of linear queue and its code in ```main()```
#### The Code
```
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
```
#### The Screenshot of the Output
![Output of linear queue]()
### Output of circular queue and its code in ```main()```
#### The code
```
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
```
#### The screenshot of the output
![Output of circular queue]()

