#include <iostream>
using namespace std;

struct node
{
    float durasi;
    struct node *next;
};

class LinkedList
{
    private:
        node *head, *tail;
    public:
        LinkedList(){
            head = NULL;
            tail = NULL;
        }

        void push_back(float durasi){
            node *baru = new node;
            baru->durasi = durasi;
            
            if(head == NULL){
                head = baru;
                tail = baru;
                head->next = NULL;
                tail->next = NULL;
            }
            else{
                tail->next =  baru;
                tail = tail->next;
            }
        }

        void pop(){
            node *tmp = head;
            head = head->next;
            delete tmp;
        }

        int size(){
            int count = 0;
            node *tmp = head;

            while(tmp != NULL){
                count++;
                tmp = tmp->next;
            }

            return count;
        }

        void push_front(float durasi){
            node *baru = new node;

            baru->durasi = durasi;
            baru->next = head;
            head = baru;

            // tmp = 
        }

        void insert(int index, float durasi){
            int count = 0;
            node *baru = new node;
            baru->durasi = durasi;

            node *tmp = head;
            node *tmp2 = new node;

            while(tmp != NULL){
                
                if(index == 0){
                    baru->next = head;
                    head = baru;
                    break;
                }else{
                    if(index == count){
                        tmp2->next = baru;
                        baru->next = tmp;
                        // tmp = baru;
                        // cout<< "tmp2 : "<<tmp2->durasi<< " tmp : "<< tmp->durasi<< endl;
                        break;
                    }
                    
                }
                tmp2 = tmp;
                tmp = tmp->next;
                
                count++;
                
            }
        }
        

        void tampil(){
            node *tmp = head;

            while(tmp != NULL){
                cout<<tmp->durasi<<endl;
                tmp = tmp->next;
            }
        }


};
