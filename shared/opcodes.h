#ifndef OPCODES_H
#define OPCODES_H


#define OP_HALT 0x00

#define OP_MOV_REG_REG  0x01
#define OP_MOV_REG_IMM  0x02
#define OP_LOAD         0x03
#define OP_STORE        0x04

#define OP_ADD          0x05
#define OP_SUB          0x06
#define OP_MUL          0x07
#define OP_DIV          0x08
#define OP_AND          0x09
#define OP_OR           0x0A
#define OP_NOT          0x0B
#define OP_XOR          0x0C
#define OP_NAND         0x0D
#define OP_NOR          0x0E
#define OP_XNOR         0x0F
#define OP_RIGHT_SHIFT  0x10
#define OP_LEFT_SHIFT   0x11

#define OP_CMP          0x12
#define OP_JMP          0x13
#define OP_JE           0x14
#define OP_JNE          0x15
#define OP_JG           0x16
#define OP_JGE          0x17
#define OP_JL           0x18
#define OP_JLE          0x19

#define OP_POP          0x1A
#define OP_PUSH         0x1B
#define OP_PEEK         0x1C

#define OP_RES          0x1D

#define OP_EXEC         0xFF

#define ID_PRINT        0x01
#define ID_SCAN         0x02
#define ID_ALLOC        0x03
#define ID_FREE         0x04


#endif