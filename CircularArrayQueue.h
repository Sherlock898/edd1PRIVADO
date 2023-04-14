#ifndef CIRCULARARRAYQUEUE_H
#define CIRCULARARRAYQUEUE_H

#include "QueueADT.h"

class CircularArrayQueue : public QueueADT{
    private:
        int* container;
        int head;
        int tail;   
        int arrSize;
        int maxSize;
        void duplicateContainerSize();
    public:
        CircularArrayQueue(int maxSize);
        ~CircularArrayQueue();
        void enqueue(int data);
        void dequeue();
        int front();
        bool isEmpty();
        int size();
};

#endif // CIRCULARARRAYQUEUE_H