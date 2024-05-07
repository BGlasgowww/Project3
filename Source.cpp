#include "bTree.h"
#include<iostream>
#include<cstdlib>
using namespace std;



int main() {

	int n;
	bTree B;
	
	cout << "This program will generate 40 random numbers. " << endl;
	cout << "Then it will be wrapped with a node then inserted into the linked list. " << endl;
	cout << "It will then traverse the tree in pre/in/post order and output the results. " << endl;

	for (int count = 0; count <= 40; count++) {
		n = rand() % 100 + 1;

		B.insert(n,B.root);
	}

	cout << "Pre-Order: ";
	B.preDisplay(B.root);
	
	cout << "In-Order: ";
	B.inDisplay(B.root);

	cout << "Post-Order: ";
	B.postDisplay(B.root);

	return 0;
}