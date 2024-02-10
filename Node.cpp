#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

class Node{
  public:
    int data;
    Node *next;
};

int main(){

    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();
    head->data = 10;
    head->next = first ;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = NULL;


    Node* head1 = new Node();
    Node* first1 = new Node();
    Node* second1 = new Node();
    head1->data = 10;
    head1->next = first ;
    first1->data = 20;
    first1->next = second;
    second1->data = 30;
    second1->next = NULL;

    Node* dum = new Node();
    int carry = 0;
    while (head != nullptr || head1 != nullptr )
    {

        Node* temp = new Node();
        dum->data = (head->data + head1-> data + carry)/10;
        carry = (dum->data)%10 ;
        cout << dum->data << " -> ";
        head = head->next;
        head1 = head1->next;
        dum->next = temp;
    }
    
    return 0;
}
