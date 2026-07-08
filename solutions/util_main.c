#include "libutil.h"
#include <stdio.h>

int main() {
	int d = clamp(15, 0, 10);
	printf("%d", d);
	return 0;
}
