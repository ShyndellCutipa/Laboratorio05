#include <iostream>
using namespace std;
class LinkedList
{
    private:
        int size;
        Node* head;
    public:
        
        LinkedList();
        ~LinkedList();
        void insert(int val);
        void remove(int val);
        void print();
        int getSize();
};
int LinkedList::getSize()
{
    return size;
}

LinkedList::LinkedList()
{
    size = 0;
    head = NULL;
}
void LinkedList::insert(int val)
{
    //creando un nuevo nodo
    Node* newNode = new Node();
    //añadiendole contenido al nuevo nodo
    newNode->setElem(val);
    if (head == NULL || head->getElem() >= val)
    {
        newNode->setNext(head);
        head = newNode;
    }
    else
    {
        Node* temp = head;
        while ( temp->getNext()!=NULL && temp->getNext()->getElem() < val)
        {
            temp = temp->getNext(); // next node
        }
        newNode->setNext(temp->getNext());//rescatando la dirección del siguiente puntero
        temp->setNext(newNode);
    }
    size++;
}
void LinkedList::remove(int val)
{
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL && temp->getElem() != val)
    {
        prev = temp;
        temp = temp->getNext();
    }
    if(temp == NULL)
    {
        cout<<"Elemento no disponible en la lista"<<endl;
    }
    else
    {
        if(prev == NULL) //match en la primera posición
            head = head->getNext();
        else
            prev->setNext(temp->getNext());
        delete temp;
        size--;
    }
}
void LinkedList::print()
{
    Node* temp = head;
    while( temp != NULL)
    {
        cout<< temp->getElem() <<" ";
        temp = temp->getNext();
    }
    cout<<endl;
}

LinkedList::~LinkedList()
{
    while( head != NULL)
    {
        Node* temp = head;
        head = head->getNext();
        //cout<<"Elminando: "<< temp->getElem()<<endl;
        delete temp;
    }
}

