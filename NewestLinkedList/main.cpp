#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include "List.h"
using namespace std;

int main(int argc, char** argv)
{
	List linkedList;

	linkedList.addNode(8);
	linkedList.addNode(1);
	linkedList.addNode(2);
	linkedList.printList();

	linkedList.deleteNode(8);
	linkedList.printList();

	linkedList.addNode(55);
	linkedList.printList();

	//Keep terminal open
	int x = 1;
	cin >> x;
	return 0;
}