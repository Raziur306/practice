#include<bits/stdc++.h>
using namespace std;
struct BstNode
{
	int data;
	BstNode *left, *right;
};
BstNode* getNewNode(int data)
{
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}
BstNode* Insert(BstNode* root, int data)
{
	if (root == NULL)
	{
		root = getNewNode(data);
	}
	else if (data <= root->data)
	{
		root->left = Insert(root->left, data);
	}
	else
	{
		root->right = Insert(root->right, data);
	}
	return root;
}
bool searched(BstNode*root, int data)
{
	if (root == NULL)
	{
		return false;
	}
	else if (root->data == data)
	{
		return true;
	}
	else if (data <= root->data)
	{
		return searched(root->left, data);
	}
	else
	{
		return searched(root->right, data);
	}
}
int main()
{
	BstNode *root = NULL;
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 20);
	root = Insert(root, 25);
	root = Insert(root, 8);
	root = Insert(root, 12);
	int n;
	cout << "Enter number to be searched: ";
	cin >> n;
	if (searched(root, n))
	{
		cout << "Found\n";
	}
	else
	{
		cout << "Not found\n";
	}

	return 0;
}
