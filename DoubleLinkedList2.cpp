#include <iostream>
#include <string>
using namespace std;

//Nama repository
//4NIMBelakang_DoubleLinkedList

class Node
{
    public:
    int noMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedList
{
    private:
    Node *START;

    public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    
}