#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<sys/types.h>
void sigint_handler(int sig){
	printf("Caught SIGINT!\n");
	exit(0);
}
int main(){
	signal(SIGINT,sigint_handler);
	
	pause();
	return 0;
}
