System Software Lab2 Code [lab2.l]
%{
#include "y.tab.h"
%}
%%
a {return A;}
b {return B;}
[\n] return '\n';
%%


System Software Lab2 Code [lab2.y]

%{
#include<stdio.h>
#include<stdlib.h>
%}
%token A B
%%
input:s'\n' {printf("Successful Grammar\n");exit(0);}
s: A s1 B| B s1: ; | A s1
%%

main()
{
 printf("Enter A String\n"); yyparse();
}

int yyerror()
{
 printf("Error \n"); exit(0);
}