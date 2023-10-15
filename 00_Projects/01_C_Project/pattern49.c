/**
* @file: pattern49.c
* @brief: 
* @author: Hansika Nemade(hansikanemade2121@gmail.com)
* @date: 14 October 2023 (saturday)
*/


#include<stdio.h>
#include<stdlib.h>

/*
*  FUNCTION NAME : pattern49()
*                       A	  B  	C	  D	  E	  F	  G						            A
*	                      A	  B	  C	  D	  E	  F						            B	  A
*	                      A	  B	  C	  D	  E						            C	  B	  A
*	                      A	  B	  C	  D						            D	  C	  B	  A
*	                      A	  B	  C						            E	  D	  C	  B	  A
*	                      A	  B						            F	  E	  D	  C	  B	  A
*	                      A						            G	  F	  E	  D	  C	  B	  A
* 
*  PARAMETERS :   
*                1) void :
* 
*  RETURNS :
*                void :
*/


//Entry point of function
void pattern49(void)
{
  int ole = 1, ile = 1;
  int ascii = 65;
  int space1 = 8, space2 = 12;

  while(ole<=7)
  {
    while(ile<=13)
    {
        if(ile >= space1 && ile <= space2)
           printf("    ");
        else 
           printf("%c   ", ascii);
      
        if(ile > 6)
          ascii--;
        else
          ascii++;
      
        ile++;
    }

    ascii = 65;
    ile = 1;

    space1--;
    space2--;

    ole++;
    printf("\n");
  }

  return;
}
