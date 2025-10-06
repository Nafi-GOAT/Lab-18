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

struct Node {
    float rating;
    string comment;
    Node* next;
};

void Head(Movie *head, float rating, string comment);
void tail(Movie * head, float rating, string &comment);
void output(Movie *head);
void deleteReview(Movie *head);

int main() {
    movie *head = nullptr;
    
    int choice;
    
}
