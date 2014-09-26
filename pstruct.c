#include <stdio.h>
#include <math.h>

typedef struct {
	int base;
	int index;
} power;

int getpower(power x) {
	
        int result = pow(x.base, x.index);
        return result;
}


int main(int argc, char** argv) {	
	
	power newpower;
        newpower.base = 2;
        newpower.index = 8;

	int num = getpower(newpower);
        printf("your number is: %d\n", num);
        return 0;
}




