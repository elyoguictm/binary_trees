#include "binary_trees.h"
/**
 * binary_tree_insert_right - a node as the right-child of another node.
 * @parent: a pointer to the parent node of the node to create
 * @value: a value to put in the new node
 * Return: a pointer node, or NULL on failure or if parent is NULL
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *tmp;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
		new->left = NULL;
		new->parent = parent;
	}
	else
	{
		tmp = parent->right;
		parent->right = new;
		new->right = tmp;
		new->left = NULL;
		new->parent = parent;
		tmp->parent = new;
	}
		return (new);
}
