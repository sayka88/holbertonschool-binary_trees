#include "binary_trees.h"

/**
 * calculate_depth - Helper function to calculate depth recursively
 * @tree: Pointer to the current node
 * Return: Depth of the node
 */
static size_t calculate_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return 0;

	return calculate_depth(tree->parent) + 1;
}

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: Depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	return calculate_depth(tree);
}