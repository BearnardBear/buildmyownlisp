#include <stdio.h>
#include <math.h>

int power2(int x) {
        int result = pow(x, 2);
        return result;
}


int main(int argc, char** argv) {	
	int num = power2(6);
        printf("your number is: %d\n", num);
        return 0;
}




