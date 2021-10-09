/**
 * @file main.c
 * @author Jan Kubice
 * @brief 
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <string.h>

#include "parser.h"

int main() {
    
    char command[512];
    printf(">> ");
    scanf("%10[0-9a-zA-Z ]", command);
    //split_command_line(command);
    /*
    while (1){
        char command[255];
        printf(">>");
        scanf("%s",command);
    }*/
    
    return(0);
}
