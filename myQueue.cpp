/* 
 * Dustin Gordon
 */

#include "myQueue.h"
#include <iostream>
using namespace std;

myQueue::myQueue()
{
    //Initialize private variables:
    front = -1;
    rear = -1;
    size = 0;
}


bool myQueue::push(int x)
{
    if(isFull())
    {
        cout << endl << "ERROR! Queue overflow! Cannot push item onto full stack." << endl;
        return false;
    }
    else
    {
        if(size == 0)
        {
            front = 0;
        }
        rear++;
        holder[rear] = x;
        size++;
        return true;
    }
}

int myQueue::pop()
{
    int popped;

    if(isEmpty())
    {
        return -1;
    }
    else
    {
        popped = holder[front];
        front++;
        size--;
        return popped;
    }
}

bool myQueue::isFull()
{
    if(size < MAX)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool myQueue::isEmpty()
{
    if(size == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void myQueue::print()
{
    if(isEmpty())
    {
        cout << endl << "ERROR! Queue is empty." << endl;
    }
    else
    {
        cout << endl << "The current queue is: { ";
        for (int i = front; i <= rear; i++)
        {
            cout << holder[i] << " ";
        }
        cout << "}" << endl;
    }
}
