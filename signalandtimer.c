#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
void handle(int signum)
{
  printf("recieved signal %d\n",signum);

}
int main()
{
   signal(SIGINT,handle);
   signal(SIGALRM,handle);
   alarm(10);
   printf("wating for print\n");
   while(1)
   {
       sleep(1);
   }
}


// Output 

/*
wating for print
recieved signal 14
^Crecieved signal 2
*/






