
#include <stdlib.h>

#include "tree.h"


int TreeSumOdds(Tree t) {
	if (!t) {
		return 0;
	}
	if (t->value % 2 == 1) {
		return t->value + TreeSumOdds(t->left) + TreeSumOdds(t->right);
	} else {
		return TreeSumOdds(t->left) + TreeSumOdds(t->right);
	}
}

