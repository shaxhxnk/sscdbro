System Software Lab 6a Code [lab6.l]


%{
#include<stdio.h>
int sl=0;
int ml=0;
%}
%%
"/*"[a-zA-Z0-9' '\t\n]+"*/" ml++;
"//".* sl++;
%%

main()
{
 yyin=fopen("f1.c","r");
 yyout=fopen("f2.c","w");
 yylex();
 fclose(yyin);
 fclose(yyout);
 printf("\n Number of single line comments are = %d\n",sl);
 printf("\nNumber of multiline comments are =%d\n",ml);
}

#include<stido.h>

int main()
{
 // this is a comment
 printf("hello");
 /* this is another comment */
}

// f1.c


#include<stido.h>

int main()
{
 // this is a comment
 printf("hello");
 /* this is another comment */
}