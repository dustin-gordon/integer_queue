/*
 * Dustin Gordon
 */

#ifndef A1_A04251180_MYQUEUE_H
#define A1_A04251180_MYQUEUE_H
#define MAX 1000

class myQueue
{
public:
    myQueue();
    bool push(int x);
    int pop();
    bool isFull();
    bool isEmpty();
    void print();
private:
    int rear, front, size;
    int holder[MAX];
};

#endif //A1_A04251180_MYQUEUE_H
