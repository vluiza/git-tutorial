#include <stdio.h>
#include <unistd.h>

#include "../lib/espl_lib.h"

int  main(){

    unsigned int num = 0;
    char exit='q';
    
    do{
        printf("Please enter a number: \n");
        scanf("%u", &num);

        printf("%s \n", num_to_words(num));

        printf("Enter \"q\" to exit or any number to continue: \n");

        scanf("%c" , &exit);

    }while(exit!='q');

    
//    printf("Please enter a number: \n");
//    scanf("%u", &num);
//
//    printf("%s \n", num_to_words(num));
//
//    printf("Enter \"q\" to exit or any other letter to continue: \n");
//    scanf("%c" , &exit);
//
//    if(exit == 'q'){
//        return 0;
//    }else{
//        main();
//    }
//
//    return 0;

    }
