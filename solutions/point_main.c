#include "point.h"
#include <stdio.h>
#include <math.h>

Point p = {3.0, 4.0};

int main() {
	float p_to_origin = sqrt(p.x * p.x + p.y * p.y);
	printf("Distanz p -> 0: %f", p_to_origin);
	return 0;
}

