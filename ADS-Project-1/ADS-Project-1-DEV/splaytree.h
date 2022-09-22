#ifndef DATALGORITHM_SPLAYTREE_H
#define DATALGORITHM_SPLAYTREE_H

// node
typedef struct splaynode {
	int element;
	struct splaynode *left;
	struct splaynode *right;
} SplayNode;

// splaytree ADT
typedef struct splaytree {
	SplayNode *root;
	unsigned int size;
} SplayTree;

extern SplayTree *splaytree_init();
extern int splaytree_is_full(SplayTree *splaytree);
extern int splaytree_is_empty(SplayTree *splaytree);
extern int splaytree_add(SplayTree *splaytree, int element);
extern int splaytree_delete_by_id(SplayTree *splaytree, unsigned int id);
extern SplayNode *splaytree_get_by_id(SplayTree *splaytree, unsigned int id);
extern void splaytree_traverse(SplayTree *splaytree, void(*traverse)(SplayNode*));
extern int splaytree_clear(SplayTree *splaytree);

double Opr_SPL(int k, int n, int* memory);
#endif //DATALGORITHM_SPLAYTREE_H
