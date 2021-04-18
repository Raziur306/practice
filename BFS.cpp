#include<bits/stdc++.h>
using namespace std;
struct BstNode
{
	char data;
	BstNode *left, *right;
};
BstNode *newNode(char data)
{
	BstNode *temp = new BstNode();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
BstNode *Insert(BstNode *root, char data)
{
	if (root == NULL)
	{
		root = newNode(data);
	}
	else if (root->data < data)
	{
		root->right = Insert(root->right, data);
	}
	else
	{
		root->left = Insert(root->left, data);
	}
	return root;
}
void BFSserch(queue<BstNode*> &Q)
{
	if (Q.empty())
	{
		return;
	}
	cout << Q.front()->data << " ";
	if (Q.front()->left != NULL)Q.push(Q.front()->left);
	if (Q.front()->right != NULL)Q.push(Q.front()->right);
	Q.pop();
	BFSserch(Q);
}
int main()
{
	BstNode *root = NULL;
	root = Insert(root, 'F');
	Insert(root, 'D');
	Insert(root, 'J');
	Insert(root, 'B');
	Insert(root, 'A');
	Insert(root, 'C');
	Insert(root, 'E');
	Insert(root, 'G');
	Insert(root, 'K');
	Insert(root, 'I');
	Insert(root, 'H');
	queue<BstNode*> Q;
	Q.push(root);
	BFSserch(Q);
	return 0;
}
