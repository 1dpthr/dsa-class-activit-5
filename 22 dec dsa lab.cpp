#include<iostream>
using namespace std;

class Node
{
public:
	Node* left=NULL, * right=NULL;
	int key;
	Node(int value)
	{
		key = value;
	}
};
class BinaryTree
{
public:

	Node* root;
	BinaryTree()
	{
		root = NULL;
	}
void inOrder(Node *root)
	{
     if(root!= NULL)
	 {
	  inOrder(root->left);
	  cout<< root->key<<" ";
	  inOrder(root->right);
	 }
	}
void PreOrder(Node *root)
{ 
	if(root!=NULL)
	{
	cout<<root->key<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
    }
}
void PostOrder(Node * root)
{
	if(root!=NULL)
	{
	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->key<<" ";
	}
}
};
int main()
{
	BinaryTree bt;
	bt.root= new Node(10);
	bt.root->left= new Node(20);
    bt.root->right= new Node(30);
	bt.root->right->left= new Node(40);
	bt.root->right->right= new Node(50);
	cout<<"pre Order "<<endl;
	bt.PreOrder(bt.root);
	cout<<"in Order "<<endl;
	bt.inOrder(bt.root);
	cout<<"post Order "<<endl;
	bt.PostOrder(bt.root);
}