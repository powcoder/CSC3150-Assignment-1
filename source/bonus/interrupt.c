https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
	printf("------------CHILD PROCESS START------------\n");
	printf("This is the SIGINT program\n\n");
	raise(SIGINT);
	sleep(5);
	printf("------------CHILD PROCESS END------------\n");

	return 0;
}
