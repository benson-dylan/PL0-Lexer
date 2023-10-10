#include <stdio.h>
#include "lexer.h"
#include "utilities.h"


int main(int argc, char *argv[])
{
    // Error handler already provided
    if (argv[1] == NULL)
        bail_with_error("Filename null");

    lexer_init(argv[1]);

    lexer_output();
    
    if (errors_noted)
        return 1;
    return 0;
}