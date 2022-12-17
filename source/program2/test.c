https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <unistd.h>
#include <stdio.h>
#include <signal.h>

int main(int argc,char* argv[]){
	int i=0;

	printf("--------USER PROGRAM--------\n");
//	alarm(2);
	raise(SIGBUS);
	sleep(5);
	printf("user process success!!\n");
	printf("--------USER PROGRAM--------\n");
	return 100;
}
