#include "binary_trees.h"
/**
* binary_tree_height - a function that measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height.
* Return: tree is NULL, your function must return 0
**/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_size = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_size = 1 + binary_tree_height(tree->right);
	if (left_size > right_size)
		return (left_size);
	return (right_size);
}
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree:  pointer to the root node of the tree to measure the balance factor.
* Return: If tree is NULL, function return 0
**/
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!(tree))
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	return (height_left - height_right);
}
