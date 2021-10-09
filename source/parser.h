/**
 * @file parser.h
 * @author Jan Kubice
 * @brief 
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef PARSER_H
#define PARSER_H

void split_command_line(char command[], char part_1[], char part_2[], char part_3[], char part_4[]);
void evaluate_command(char part_1[], char part_2[], char part_3[], char part_4[]);

#endif