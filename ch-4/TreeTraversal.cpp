#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *left, *right;
};
Node* newNode(int data){
	Node* temp = new Node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void postorder(struct Node* node)
{
	if (node == NULL)
		return;
	postorder(node->left);
	postorder(node->right);
	cout<<node->data<< " ";
}
void inorder(struct Node* node)
{
	if (node==NULL)
		return;
	inorder(node->left);
	cout<<node->data << " ";
	inorder(node->right);
}
void preorder(struct Node* node)
{
	if (node == NULL)
		return;
	cout<<node->data<< " ";
	preorder(node->left);
	preorder(node->right);
}
int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout<<"\nPreorder traversal of binary tree is \n";
	preorder(root);

	cout<<"\nInorder traversal of binary tree is \n";
	inorder(root);

	cout<<"\nPostorder traversal of binary tree is \n";
    postorder(root);
	return 0;
  }
