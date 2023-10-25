#include "conditional.h"

/*
 * conditional(x, y, z): same as x ? y : z
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 */
int conditional(int x, int y, int z) {
	x=(!(!x));
	x=~x+1;	
	return (y&x)+(z&(~x));
}
