#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to created node, NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);

	if (parent == NULL || new_node == NULL)
		return (NULL);

	new_node->left = parent->left;
	if (new_node->left != NULL)
		new_node->left->parent = new_node;

	parent->left = new_node;

	return (new_node);
}
