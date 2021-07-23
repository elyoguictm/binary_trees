#include "binary_trees.h"
/**
 * binary_tree_uncle - Entry point
 * @node: pointer to the node to find the uncle
 *
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!(node) || !(node->parent) || !(node->parent->parent))
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}