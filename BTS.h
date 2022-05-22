#pragma once
enum printtype
{
	inorder = 0,
	postorder = 1,
	preorder = 2,
	graph = 3
};
class BST
{
private:
	
	class Node {
		friend BST;
	private:
		Node* right;
		Node* left;
		int mData;
	public:
		Node(int data) {
			mData = data;
			right = nullptr;
			left = nullptr;
		}
		int getvalue() {
			return mData;
		}
	};

public:
	Node* mRoot;
public:
	BST();
	BST(int data);
	void insert(int data);
	void inserthelper(Node* &root, int data);
	void printInOrder(Node* root);
	void printGraph(Node* root); // ýt will be implemented..
	void print(printtype a);
	void printPostOrder(Node* root);
	void printPreOrder(Node* root);
};
