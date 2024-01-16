#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

node *createlinkedlist(int arr[], int index, int size)
{
    if (index == size)
        return NULL;

    node *temp;
    temp = new node(arr[index]);
    temp->next = createlinkedlist(arr, index + 1, size);
    return temp;
}

void printLinkedList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node *head;
    head = NULL;

    int arr[] = {2, 4, 6, 8, 10};
    head = createlinkedlist(arr, 0, 5);

    // Print the linked list
    printLinkedList(head);

    return 0;
}
