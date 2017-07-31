#include "stdafx.h"
#include <cstdlib>
#include <iostream>
using namespace std;


#include "List.h"

List::List()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void List::addNode(int addData)
{
	//Create new nodePtr that points to new node.
	nodePtr n = new node;

	//n is last node.
	n->next = NULL;

	//data stored in n is data that is passed as param.
	n->data = addData;

	if (head != NULL)
	{
		//current pointer points to head of list
		curr = head;

		//Advance curr to point to next node until the next node is NULL.
		while (curr->next != NULL)
		{
			curr = curr->next;
		}

		//After list has been traversed and curr->next points to null we insert the new node, n, at this point.
		//New node is added to end of list.
		curr->next = n;
	}

	//If there is not at least one node in the list then n will be the head. The first node in the list.
	else
	{
		//head points to new node.
		head = n;
	}
}

void List::deleteNode(int delData)
{
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;

	//While curr does not point to NULL and curr->data does not equal the data to be deleted traverse the list.
	while (curr != NULL && curr->data != delData)
	{
		
		//temp points to the current node and current points to the next node in the list.
		temp = curr;
		curr = curr->next;
	}

	//if list is traversed and data is not found display this message to user.
	if (curr == NULL)
	{
		cout << delData << " was not in the list \n";
		delete delPtr;
	}

	else
	{
		//delPtr points to current node which is the node with the data to be deleted.
		delPtr = curr; 

		//curr is advanced to point at the node pointed to at curr->next.
		curr = curr->next;

		//Connect temp to node that curr is pointing to after the above statement so that list remains linked.
		temp->next = curr;

		//If head is being deleted then head must advance to next node in list to prevent loss of entry point.
		if (delPtr == head)
		{
			head = head->next;
			temp = NULL;
		}
		//Delete node pointed to by delPtr.
		delete delPtr;

		cout << "The value " << delData << " was found and deleted \n";
	}
}

void List::printList()
{
	curr = head;
	while (curr != NULL)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}