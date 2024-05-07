#include "bTree.h"
#include<iostream>
using namespace std;

bTree::bTree() {
    root = nullptr;
}

void bTree::insert(int num, node*& root) {
    
    node* newNode = newNode;
    newNode->val = num;
    newNode->L = newNode->R = nullptr;

    if (root == nullptr) {
        root = newNode;
    }

    else if (num < root->val) {
        insert(num, root->L);
    }

    else (num > root->val); {
        insert(num, root->R);
    }
    
}

void bTree::preDisplay(node* root) const {

    if (root == nullptr) {
        return;
    }

    cout << root->val << " ";
    preDisplay(root->L);
    preDisplay(root->R);

}

void bTree::inDisplay(node* root) const {
   
    if (root == nullptr) {
        return;
    }

    inDisplay(root->L);
    cout << root->val << " ";
    inDisplay(root->R);

}

void bTree::postDisplay(node* root) const {
   
    if (root == nullptr) {
        return;
    }

    postDisplay(root->L);
    postDisplay(root->R);
    cout << root->val << " ";

}

bTree::~bTree() {
    while (root != nullptr) {
        delete root;
    }
}