//Creado por: Mauricio Aviles Cisneros
//Modificado por: Deyan Sanabria Fallas y Esteban Perez Picado
#ifndef QUEUE_H
#define QUEUE_H

template <typename E>
class Queue {
private:
    void operator =(const Queue&) {}
    Queue(const Queue&) {}

public:
    Queue() {}
    virtual ~Queue() {}
    virtual void enqueue(E element) = 0;
    virtual E dequeue() = 0;
    virtual E frontValue() = 0;
    virtual void clear() = 0;
    virtual bool isEmpty() = 0;
    virtual int getSize() = 0;
    virtual void enqueueFront(E element) = 0;
    virtual E dequeueRear() = 0;
    virtual E rearValue() = 0;
    //virtual void print() = 0;
    virtual ArrayList<E> *toList() = 0;

};

#endif
