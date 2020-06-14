#include <iostream>
using namespace std;

class Node
{
    private:
        int elem;
        Node* next;
    public:
        Node();
        int getElem();
        Node* getNext();
        void setElem(int newElem);
        void setNext (Node* nextNode);
};

Node::Node()
{
    elem = 0;
    next = NULL;
}
int Node::getElem()
{
    return elem;
}
Node* Node::getNext()
{
    return next;
}
void Node::setElem(int newElem)
{
    elem = newElem; //this->elem = elem
}
void Node::setNext(Node* nextNode)
{
    next = nextNode;
}