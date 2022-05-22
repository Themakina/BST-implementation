#include "BTS.h"
#include <iostream>


BST::BST() {
	mRoot = nullptr;
}
BST::BST(int data) {
	mRoot = new Node(data);
	
}
void BST::insert(int data) {
	if (mRoot == nullptr)
	{
		mRoot = new Node(data);

	}
	else
	{
		inserthelper(mRoot, data);
	}
}

void BST::inserthelper(Node* &root, int data) {
	if (root == nullptr)
	{
		root = new Node(data);

	}
	else
	{
		if (root->mData > data) {

			inserthelper(root->left,data);
		}
		else
		{
			inserthelper(root->right,data);
		}

	}
}
void BST::print(printtype a) {
	if (mRoot == nullptr) {
		std::cout << "Tree is empty";
	}
	else
	{
		if (a == postorder)         // postorder case 
		{
			printPostOrder(mRoot);
		}
		else if (a == preorder)    // predorder case 
		{
			printPreOrder(mRoot);
		}
		else if (a == graph) //graph
		{

		}
		else                      // inorder case
		{
			printInOrder(mRoot);

		}
	}
}

void BST::printInOrder(Node* root ) {
	
	if (root == nullptr)
	{
		return;
	}
	printInOrder(root->left);
	std::cout << root->mData<<" ";
	printInOrder(root->right);
}

void BST::printPostOrder(Node* root) {
	if (root == nullptr)
	{
		return;
	}
	printPostOrder(root->left);
	printPostOrder(root->right);
	std::cout << root->mData << " ";
}

void BST::printPreOrder(Node* root) {
	if (root == nullptr)
	{
		return;
	}
	std::cout << root->mData << " ";
	printPreOrder(root->left);
	printPreOrder(root->right);
	
}








