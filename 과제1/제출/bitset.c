#include "bitset.h"
/*
 * addNumber(set, x): Add 'x' to the bitset represented in array 'set'
 *   Assume that 0 <= x <= 127 and 'set' is a pointer to 16-byte array
 */

void addNumber(unsigned char* set, int x) {
	int byteindex=x/8;
	int bitindex=x%8;
	set[byteindex]|=(1<<(7-bitindex));
	
	return;
}
