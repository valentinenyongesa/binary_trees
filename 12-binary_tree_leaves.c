#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a binary tree
 * @tree: tree to count leaves from
 * Return: tree is NULL, the function must return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);

	size_t right_leaves = binary_tree_leaves(tree->right);
	size_t left_leaves = binary_tree_leaves(tree->left);

	return (right_leaves + left_leaves);
}
