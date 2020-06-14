#include <iostream>
#include "node.h"
#include "linkedlist.h"
using namespace std;

int main()
{
    LinkedList listitaA;
    cout<<"Lista ordenada:"<<endl;
    listitaA.insert(9);
    listitaA.insert(354);
    listitaA.insert(20);
    listitaA.insert(1000);
    listitaA.insert(158);
    listitaA.insert(0);
    listitaA.insert(-2);
    listitaA.print();
    cout<<"Longitud lista: "<<listitaA.getSize()<<endl;
    listitaA.remove(-2);
    cout<<"Lista actualizada: "<<endl;
    listitaA.print();
    cout<<"Longitud lista: "<<listitaA.getSize()<<endl;
}