#include "memwrap.h"

/* 
 * Creates new node, sets mPtr to newly malloced memory,
 * inserts node into head of list, and returns mPtr.
 */
void *apparate(size_t size){
	// TODO
}


/*
 * Searches for an mRec with a matching mPtr. If found,
 * frees the mPtr, then removes mRec from list and frees it.
 * Returns 1 if successful, 0 if not.
 */
int reducto(void *mPtr){
	// TODO
}
  

/* Frees all apparated blocks and metadata, and empties the list. */
void reductoMaximo() {
	// TODO
}


/* Returns total number of currently-allocated blocks. */
int totalBlocks() {
	// TODO
}


/*
 * Returns total number of currently-apparated bytes (does NOT
 * include the memory used for metadata records).
 */
size_t totalBytes() {
	// TODO
}
  
