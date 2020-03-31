#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<Pthread.h>
#include<sys/wait.h>
int main(int argc,char *argv[])                   //predefined Argument argc to cound number of arguments passed with name of program itself
                                                  //argv an character pointer listing all arguments
{
    int k, proid,i=0,j=0;                           //i,j temporary variable; pid process id holder, k iterative variable
    int fibosum=1;								  //counter
    int number=atoi(argv[1]);					  // changing charcter type to integer type by atoi inbuilt function
    if (argc == 0)								  //to check wether any argument is passed because one argument is name itself
    {
        printf ("Please enter a number to fibonacci sequence");
    }
    proid = fork();								  //creation of new process
    if (proid == 0)								  //checking wether new process is created or not as 0 signifies the failure for process creation
    {
        for(k=1;k<number;k++)						 // fibonacci creation process
        {
                i = j;
                j= fibosum;
                sum = i + j;
                printf("Fibonacci seqence is: %d\n",fibosum);
        }
   }  
    else   										 // failsafe condition
   {
    wait(NULL);   								 //atomic action on process
    printf ("parent is waiting for child\n");
   }
   return 0;
}
