#ifndef QUEUEADT_H
#define QUEUEADT_H

class QueueADT{
    public:
        virtual void enqueue(int) = 0;
        virtual void dequeue() = 0;
        virtual int front() = 0;
        virtual bool isEmpty() = 0;
        virtual int size() = 0;
};

#endif // QUEUEADT_H