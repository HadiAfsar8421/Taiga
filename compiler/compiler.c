#include <cstddef>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>
#include<ctype.h>
#include<stdbool.h>
#include <sys/types.h>
#include <string.h>
#include "../shared/opcodes.h"

#define CURRENT_CHAR input[pointer]

bool add_byte(uint8_t **output, uint8_t byte, size_t *output_length, size_t *n_bytes)
{
    if (*n_bytes >= (*output_length * 9) / 10) {
        *output_length *= 2;
        uint8_t *tmp = realloc(*output, *output_length);
        if (!tmp) {
            fprintf(stderr, "Compiler Error: memory allocation failure");
            free(*output);
            return false;
        }
        *output = tmp;
    }

    (*output)[(*n_bytes)++] = byte;
    return true;
}

bool parse_mov(size_t *pointer, )
{

}

uint8_t* generate_bytecode(const char* input)
{
    size_t pointer = 0;
    size_t line = 1;
    size_t n_bytes = 0;
    size_t output_length = 1024;
    uint8_t *output = malloc(output_length);
    if (!output) {
        fprintf(stderr, "Compiler Error: memory allocation failure");
        return NULL;
    }    
    while(CURRENT_CHAR != '\0') {
        if (isspace(CURRENT_CHAR)) {
            if (CURRENT_CHAR == '\n')
                line++;
            pointer++;
            continue;
        }

        if (CURRENT_CHAR==';') {
            while (CURRENT_CHAR != '\n' && CURRENT_CHAR != '\0') {
                pointer++;
            }
            if (CURRENT_CHAR == '\0')
                return output;
            line++;
        }
        
        if (isalpha(CURRENT_CHAR)) {
            size_t start = pointer;
            while(isalpha(CURRENT_CHAR)) {
                pointer++;
            }
            size_t length = pointer - start;
            switch(length) {
                case 3:
                    if (!strncmp(&input[start], "mov", 3)) {
                        if (!parse_mov())
                            return NULL
                    }
            }
        }

       
    }
}
