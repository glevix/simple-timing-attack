#include <stdio.h>
#include "PSWD.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
		printf("Wrong usage");
        return 1;
    }
    char *pswd = PASSWORD;
    char *input = argv[1];
    while (*pswd) {
        if (*input != *pswd) {
            printf("Wrong password");
            return 1;
        }
        ++pswd;
		++input;
    }
    if (*input) {
		printf("Wrong password");
		return 1;
    }
	printf("Correct");
    return 0;
}