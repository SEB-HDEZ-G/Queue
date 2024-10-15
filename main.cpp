#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    //crea una queue con capacidad de 5 elementos
    Queue q(5);

    //inserta elementos en al queue
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    //muestra el elemento al frente
    cout << "Front element: " << q.peek() << endl;

    //elimina elementos del queue
    q.dequeue();
    q.dequeue();

    //muestra el elemento al frente después de eliminar
    cout << "Front element: " << q.peek() << endl;

    return 0;
}