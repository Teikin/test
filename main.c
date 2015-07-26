//
//  main.c
//  C_practice
//
//  Created by キンテイ on 5/11/15.
//  Copyright (c) 2015 teikin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int i, j;
    
    for(i = 1; i <= 9; i++){
        for(j = 1; j <= 9; j++)
            printf("%3d", i * j);
        println("print for test");
        putchar('\n');
    }
    
    return 0;
}
