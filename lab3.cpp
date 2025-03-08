#include <iostream>
using namespace std;

class Queue {
    class Node {
    public:
        int data;
        Node* next;
        
        Node(int x, Node*n){data=x; next = n;} 
    };

public:
    Node* head;
    Node* tail;
    int sizee;

    Queue() {
        head = nullptr;
        tail = nullptr;
          
        sizee = 0;
    }

    void enqueue(int data) {
        Node* newNode = new Node(data, nullptr);
        
        
        if(head == nullptr){
          
            head = newNode;
            tail = head;
            sizee++;
        
        }else{
            
        tail->next = newNode;
        tail = newNode;
        sizee++;
            
            
        }
       
    }

    int dequeue() {
        int data = -1;
        if (sizee == 0) {
            cout << "Queue is empty!" << endl;
        } else {
            data = head->data;
            Node* temp = head;
            head = head->next;
            delete temp;  
            sizee--;
        }
        return data;
    }

    int top() {
        if (sizee == 0) {
            cout << "Queue is empty!" << endl;
            return -1; 
        }
        return head->data;
    }

    bool isEmpty() {
        return sizee == 0;
    }

    int size() {
        return sizee;
    }
};

int main() {
    
     Queue q;

    cout<<"Is empty : "<<q.isEmpty()<<endl; 
    q.enqueue(10);
    q.enqueue(12);
    q.enqueue(56);
    cout<<"Is empty : "<<q.isEmpty()<<endl;

    cout << "Top element: " << q.top() << endl;
    cout << "Queue size: " << q.size() << endl;

   
    cout << "Dequeue: " << q.dequeue() << endl;

    cout << "Queue size: " << q.size() << endl;
    cout << "Top element: " << q.top() << endl;


    
    
   
    
    
    return 0;
}
