//
//  main.cpp
//  Lab 18
//
//  Created by Nafi on 10/5/25.
//
//COMSC 210| Mehraj Hasan Nafi
//IDE used: XCODE
//

#include <iostream>
#include <string>
using namespace std;

struct Movie {
    float rating;
    string comment;
    Movie* next;
};

void Head(Movie *&head, float rating, string &comment);
void tail(Movie *&head, float rating, string &comment);
void output(Movie *head);
void deleteReview(Movie *&head);

int main() {
    Movie *head = nullptr;
    
    int choice;
    cout << "Which linked list method should we use?\n";
    cout << "   (1) New nodes are added at the head of the linked list\n";
    cout << "   Choice: ";
    cin >> choice;
    cin.ignore();
    
    char decision = 'Y';
    while (toupper(decision) == 'Y'){
        float rating;
        string comment;
        
        
        cout << "Enter review rating 0-5: ";
        cin >> rating;
        cin.ignore();
        cout << "Enter review comments: ";
        getline(cin, comment);
        
        if (choice == 1){
            Head(head, rating, comment);
            
        }
        else {
            tail(head, rating, comment);
        }
        cout << "Enter another review? Y/N: ";
        cin >> decision;
        cin.ignore();
    }
    
}
