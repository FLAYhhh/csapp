#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<sys/types.h>
#include<stdio.h>

unsigned int snooze(unsigned int secs){
	unsigned int remain = sleep(secs);
	printf("Slept for %d of %d secs.",remain,secs);
	return remain;
}

void handler(int sig){
	return;
}

int main(int argc, char **argv){
	if(argc!=2){
		fprintf(stderr,"usage:%s <secs>\n",argv[0]);
		exit(0);
	}
	signal(SIGINT,handler);
	(void)snooze(atoi(argv[1]));
	exit(0);
}
