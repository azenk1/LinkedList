#pragma once
/* based on youtube playlist data structs
*/

#ifndef LIST_H
#define LIST_H

class List {
private:

	//Definition. Allows use of nodePtr instead of node*
	typedef struct node {
		
		//Stores data in each node
		int data;

		//Points to another node in the list
		node* next;

		//Typedef
	} * nodePtr;

	
	// equal to node* head due to typedef above.
	nodePtr head;
	nodePtr curr;
	nodePtr temp;

//Functions defined to access private data.
public:
	
	//Constructor function
	List();
	void addNode(int addData);
	void deleteNode(int delData);
	void printList();
};

#endif
