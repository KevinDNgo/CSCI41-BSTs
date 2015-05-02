#include "stdafx.h"
#include <iostream>
#include "TreeNode.h"

using namespace std;

template <typename T>
TreeNode<T>::TreeNode() : left(0), right(0)
{

}

template <typename T>
TreeNode<T>::TreeNode(T value) : data(value), left(0), right(0)
{

}

template <typename T>
int TreeNode<T>::Compare(TreeNode *node)
{
	if (data == node->data)
		return 0;
	else if (data < node->data)
		return -1;
	else
		return 1;
}

template <typename T>
void TreeNode<T>::Print()
{
	cout << data;
}

template <typename T>
TreeNode<T> * TreeNode<T>::GetLeft()
{
	return left;
}

template <typename T>
void TreeNode<T>::SetLeft(TreeNode *node)
{
	left = node;
}

template <typename T>
TreeNode<T> * TreeNode<T>::GetRight()
{
	return right;
}

template <typename T>
void TreeNode<T>::SetRight(TreeNode *node)
{
	right = node;
}

template <typename T>
T TreeNode<T>::GetData() const
{
	return data;
}

template <typename T>
void TreeNode<T>::SetData(const T &value)
{
	data = value;
}