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

    void addNode()
    {
        int nim;
        cout << "\nEnter the roll number of the student: ";
        cin >> nim;

        //Step 1 Allocate memory for new node
        Node *newNode = new Node();
        
    }
}