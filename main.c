#include <stdio.h>

#include "lib/espl_lib.c"

int  main(){

    unsigned int num;
    char exit;

    printf("Please enter a number:");
    scanf("%u", &num);

    char* word = num_to_words(num);

    printf("%c", *word);

    printf(" Enter q to exit or any other letter to continue:"	);
    scanf("%c" , &exit);

    if(exit=='q'){
        return 0;
   
    } else{
        main();
    }

    return 0;

    }
