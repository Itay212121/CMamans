#ifndef COMMANDS
#define COMMANDS

#include "mat.h"
#include "input.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COMMANDS_LENGTH 7

#define COMMAND_LENGTH_BLOCK 20

void handle_read_command(char* input, mat* matrixs[]);
void handle_print_command(char* input, mat* matrixs[]);
void handle_add_command(char* input, mat* matrixs[]);
void handle_sub_command(char* input, mat* matrixs[]);
void handle_mul_command(char* input, mat* matrixs[]);
void handle_mul_scalar_command(char* input, mat* matrixs[]);
void handle_trans_command(char* input, mat* matrixs[]);
int handle_command(char* command, char* input , mat* matrixs[]);
mat* getMat(char* input, mat** all_matrixs);
int isCommasValid(char* input);
int getNextNumber(char* input, double* pointer);
int consestiveCommasFound(char* input);
void freeMatrixsMemory(mat* matrixs[]);
#endif