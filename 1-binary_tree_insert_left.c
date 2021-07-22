#include "binary_trees.h"

/**
 * binary_tree_insert_left - a node as the left-child of another node.
 * @parent: a pointer to the parent node of the node to create
 * @value: a value to put in the new node
 * Return: a pointer to the node, or NULL on failure or if parent is NULL
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent)
	{
		node = malloc(sizeof(binary_tree_t));
		if (node == NULL)
			return (NULL);
		node->parent = parent;
		node->right = NULL;
		node->n = value;
		if (parent->left)
			parent->left->parent = node;
			node->left = parent->left;
		else
			node->left = NULL;
		parent->left = node;
		return (node);
	}
	return (NULL);
}