#include <iostream>
#include "BTS.h"


int main() {

	BST binarysearch(3);
	binarysearch.insert(5);
	binarysearch.insert(7);
	binarysearch.insert(9);
	binarysearch.print(inorder);
	std::cout << std::endl;
	binarysearch.print(postorder);
	std::cout << std::endl;
	binarysearch.searchNode(5);

}