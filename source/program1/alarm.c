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

int main(int argc,char* argv[]){
	printf("------------CHILD PROCESS START------------\n");
	printf("This is the SIGALRM program\n\n");
	alarm(2);
	sleep(5);
	printf("------------CHILD PROCESS END------------\n");

	return 0;
}
