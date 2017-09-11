/*
 Author: Ben Jukus
 Status: Math header works when numbers are fed in
 Issues: Test main.c I wasn't able to figure out how to get scanf and int math(...) to work together to get an expected outcome. 
			Few issues with syntax, all resolved save for scanf. To my knowledge my syntax is correct.
 Resolution: Take the l on the main.c. Math.h functions as desired.
 Push: 1 (First Push)
 */  
  
#ifndef MATH_H_
#define MATH_H_

int math (int num1, int num2, char Operator) 

{

float result;
  
int i = 0;
  
switch (Operator)
    
    {
    
case ('+'):		//any number should be valid
      
result = (num1 + num2);
      
	//printf(result);
	break;
    
 
case ('-'):		//if num1 is larger than num2 result will return a negative number but all real numbers are valid
      result = (num1 - num2);
      
	//      printf(result);
	break;
    
 
case ('*'):
      
result = (num1 * num2);
      
	//      printf(result);
	break;
    
 
case ('/'):		//num1 is divided by num2
      //Don't try to divide by zero you hecker
      
result = (num1 / num2);
      
 
	//      printf(result);
	break;
    
 
case ('%'):		//num2 is the dividend and num1 is the divisor
      //enter num2 and num1 as such
      result = num1 % num2;
      
break;
    
 
default:
      
printf ("Invalid operation"); //this is all that prints trying to use scanf. 
    
 
}
  
return result;

}


 
#endif	/* MATH_H_ */
