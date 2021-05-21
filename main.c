#include <stdio.h>

#include "lib/espl_lib.h"

int  main(){

    unsigned int num;

    printf("Please enter a number:");
    scanf("%u", &num);

    char* word = num_to_words(num);

    printf("%c", *word);

    return 0;

    }
