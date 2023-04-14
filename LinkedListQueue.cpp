#include "LinkedListQueue.h"

LinkedListQueue::LinkedListQueue(){
    head = nullptr;
    tail = nullptr;
    count = 0;    
}

LinkedListQueue::~LinkedListQueue(){
    while(head != nullptr){
        Node* aux = head;
        head = head->next;
        delete(aux);
    }
}

void LinkedListQueue::enqueue(int data){
    Node* aux = tail;
    tail = new Node(data, nullptr);
    aux->next = tail;
    count++;
}

void LinkedListQueue::dequeue(){
    if(isEmpty()){
        throw "EmptyQueueExeption";
    }
    Node* aux = head;
    head = head->next;
    delete(aux);
    count--;
}

int LinkedListQueue::front(){
    if(isEmpty()){
        throw "EmptyQueueExeption";
    }
    return head->data;
}

bool LinkedListQueue::isEmpty(){
    return count == 0 ? 1:0;
}

int LinkedListQueue::size(){
    return count;
}