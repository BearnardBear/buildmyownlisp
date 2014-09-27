#include <stdio.h>
#include <stdlib.h>


//pre-processor
#ifdef _WIN32
#include <string.h>
#else
#include <editline/readline.h>
#endif



int main(int argc, char** argv) {

	puts("Bearard's Super Lisp Version 0.0.0.0.1");
	puts("Hit Ctrl+c to Exit\n");

	while (1) {
		
		
		char* input = readline("BearnardsLisp> ");
		
		add_history(input);

		printf("No you're a %s\n", input);
		
		free(input);
	}

	return 0;
}
