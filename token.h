#ifndef TOKEN_H
#define TOKEN_H

// This file handles tokens generated by the lexer

typedef enum {TYPE_NUMBER, TYPE_FLOAT, TYPE_KEYWORD, TYPE_IDENTIFIER, TYPE_SYMBOL} token_type_t;

typedef struct token {
    token_type_t type;
    int int_value;
    unsigned int line;
    unsigned int column;
    struct token *next;
} token_t;

void init_token_list();
token_t *get_token_list();
token_t *create_token(token_type_t );
token_t *add_int_token(int );
token_t *add_float_token(float );
token_t *add_alphanum_token(char * );
token_t *add_specialc_token(char *);

#endif
