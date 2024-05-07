#pragma once
#include<iostream>
using namespace std;
class bTree
{
private:
	struct node {
		int val;
		node* L;
		node* R;
	};


public:

	node* root;

	bTree();
	~bTree();

	void insert(int, node*&);
	void preDisplay(node*) const;
	void inDisplay(node*) const;
	void postDisplay(node*) const;

};


