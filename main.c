#include <stdio.h>
#include <unistd.h>

#include "lib/espl_lib.c"

int  main(){

    unsigned int num;
    char exit;
    
//    while(exit != 'q'){
//
//        printf("Please enter a number: \n");
//        scanf("%u", &num);
//
//        printf("%s \n", num_to_words(num));
//
//        printf("Enter \"q\" to exit or any other letter to continue: \n");
//
//        scanf("%c" , &exit);
//    }
    
    printf("Please enter a number: \n");
    scanf("%u", &num);
    
    printf("%s \n", num_to_words(num));
    
    printf("Enter \"q\" to exit or any other letter to continue: \n");
    scanf("%c" , &exit);
    
    if(exit == 'q'){
        return 0;
    }else{
        main();
    }

    return 0;

    }
