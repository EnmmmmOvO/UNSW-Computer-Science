#ifndef BSTREE_H
#define BSTREE_H

#include <stdbool.h>


typedef struct tree *Tree;


Tree newTree();        // create an empty Tree
void freeTree(Tree);   // free memory associated with Tree
void showTree(Tree);   // display a Tree (sideways)

bool TreeSearch(Tree, int);   // check whether an item is in a Tree
int  TreeHeight(Tree);         // compute height of Tree
int  TreeNumNodes(Tree);       // count #nodes in Tree
Tree TreeInsert(Tree, int);   // insert a new item into a Tree
Tree TreeDelete(Tree, int);   // delete an item from a Tree

Tree joinTrees(Tree, Tree);
Tree rotateRight(Tree);
Tree rotateLeft(Tree);
Tree insertAtRoot(Tree, int);
Tree partition(Tree, int);
Tree rebalance(Tree);

#endif