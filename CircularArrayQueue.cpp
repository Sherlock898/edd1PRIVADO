#include "CircularArrayQueue.h"

CircularArrayQueue::CircularArrayQueue(int maxSize){
    this->maxSize = maxSize;
    container = new int[maxSize];
    head = -1;
    tail = 0;
}

CircularArrayQueue::~CircularArrayQueue(){
    delete[] container;
}

void CircularArrayQueue::enqueue(int x){
    if((tail + 1) % maxSize == head){
        duplicateContainerSize();
    }
    if(head == -1){
        head = 0;
    }
    container[tail] = x;
    tail = (tail + 1) % maxSize;
}

void CircularArrayQueue::dequeue(){
    if(isEmpty()){
        throw "EmptyQueueException";
    }
    head = (head + 1) % maxSize;
}

int CircularArrayQueue::front(){
    if(isEmpty()){
        throw "EmptyQueueException";
    }
    return container[head];
}

bool CircularArrayQueue::isEmpty(){
    return head == tail || head == -1;
}

int CircularArrayQueue::size(){
    return (maxSize - head + tail) % maxSize;
}

void CircularArrayQueue::duplicateContainerSize(){
    int* newContainer = new int[maxSize*2];
    for(int i = 0; i < maxSize; i++){
        newContainer[i] = container[(i + head) % maxSize];
    }
    head = 0;
    tail = maxSize;
    delete[] container;
    container = newContainer;
}