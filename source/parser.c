/**
 * @file parser.c
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

void split_command_line(char command[], char part_1[], char part_2[], char part_3[], char part_4[]){
    char * pch;
    pch = strtok (command," ");
    while (pch != NULL)
    {
        printf ("%s\n",pch);
        pch = strtok (NULL, " ,.-");
    }
}

void evaluate_command(char part_1[], char part_2[], char part_3[], char part_4[]){

}