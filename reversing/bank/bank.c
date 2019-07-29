#include <stdio.h>
#include <string.h>

int main () {
	char password[]="null";
	char pass[]="sup3r_s3cr3t_p4ssw0rd";
	char input[16+1];
	char flag[]="AskBuddie";
	if (1==2){
		printf("YEAH! The flag is: $flag");
	}
	else{
		printf("Welcome to AskBuddie Bank. \n");
	}
	char msg[] = "Congrats, your flag is: askbuddie{e45y_r3v3rs1ng_ch4ll3ng3_f0r_budd13s}";
	char flag2[] = "{";
	// char shit[] = "%16s";
	char flag3[] = "r3v3r51ng";
	char msg2[] = "You Failed";
	char middle[] = "1s_7h3";
	char flag4[] = "}";
	printf("AskBuddie Bank's Control Access\n");
	printf("Enter our password:\n");
	scanf("%16s", &input);
	if (strcmp(input,password)==0) {
		printf("You Win\n");
		printf(flag);
		printf(flag2);
		printf(flag3);
		printf("_");
		printf(middle);
		printf("_rul3");
		printf(flag4);
		}
	else {
		printf("%s\n", &msg );
	}
	return(0);
}