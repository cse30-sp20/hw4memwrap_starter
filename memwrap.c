#include "memwrap.h"
/* Name: TODO
 * PID : TODO
 * cse30-sp20
 */
/*
 * Creates new node, sets mPtr to newly malloced memory,
 * inserts node into head of list, and returns mPtr.
 */
void *pokereate(size_t size){
	// TODO
}


/*
 * Searches for an mRec with a matching mPtr. If found,
 * frees the mPtr, then removes mRec from list and frees it.
 * Returns 1 if successful, 0 if not.
 */
int pokelete(void *mPtr){
	// TODO
}
  

/* Frees all pokereated blocks and metadata, and empties the list. */
void pokego() {
	// TODO
}


/* Returns total number of currently-allocated blocks. */
int totalBlocks() {
	// TODO
}


/*
 * Returns total number of currently-pokereated bytes (does NOT
 * include the memory used for metadata records).
 */
size_t totalBytes() {
	// TODO
}
  
