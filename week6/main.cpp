//
//  main.cpp
//  link list
//
//  Created by 蔡瑞哲 on 2023/12/30.
//

#include <iostream>
using namespace std;

struct dat{
    unsigned short value;
    dat *next;
} ;

int main (void){
    short v;
    dat *head = new dat();
    cin >> v;
    head -> value = v;
    head -> next = NULL;
    dat *cur = head;
    
    //add
    cin >> v;
    cur -> next = new dat();
    cur = cur -> next;
    cur -> value = v;
    cur -> next = NULL;
    cin >> v;
    cur -> next = new dat();
    cur = cur -> next;
    cur -> value = v;
    cur -> next = NULL;
    
    //print
    cur = head;
    while(1){
        cout << cur -> value << endl;
        cur = cur -> next;
        if (cur == NULL) break;
    }
    
    //delete
    short f;
    cin >> f;
    dat *temp,*follow;
    temp = head;
    if (head == NULL) cout << "Not Found!" << endl;
    if (head -> value == f){
        head = head -> next;
        delete temp;
    }
    else {
        while ((temp != NULL) && (temp -> value != f)) {
            follow = temp;
            temp = temp -> next;
        }
        if (temp == NULL) cout << "Not Found" << endl;
        else{
            follow -> next = temp -> next;
            delete temp;
        }
    }
    
    //print
    cur = head;
    while(1){
        cout << cur -> value << endl;
        cur = cur -> next;
        if (cur == NULL) break;
    }
    
    //insert
    cin >> v;
    cin >> f;
    cur = head;
    if (head == NULL) cout << "Not Found!" << endl;
    if (head -> value == f){
        temp = head -> next;
        cur -> next = new dat();
        cur = cur -> next;
        cur -> value = v;
        cur -> next = temp;
    }
    else {
        temp = head;
        while ((temp != NULL) && (temp -> value != f)) {
            follow = temp;
            temp = temp -> next;
        }
        if (temp == NULL) cout << "Not Found" << endl;
        else{
            cur = temp;
            cur -> next = new dat();
            cur = cur -> next;
            cur -> value = v;
            cur -> next = temp;
            
        }
    }
    //print
    cur = head;
    while(1){
        cout << cur -> value << endl;
        cur = cur -> next;
        if (cur == NULL) break;
    }
        return 0;
}

