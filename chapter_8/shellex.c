#include<stdio.h>
#include<stdlib.h>
#define MAXARGS 128
/* Function prototypes */
void eval(char *cmdline);
int parseline(char *buf , char **argv);
int builtin_command(char **argv);
int main(){
	char cmdline[MAXLINE]; /* Command line  */
s
	while(1){
		/* Read */		
		printf(">");
		fgets(cmdline,MAXLINE,stdin);
		if(feof(stdin))
			exit(0);

		/* Evaluate */
		eval(cmdline);
	}
}



