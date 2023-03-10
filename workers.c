#include <stdio.h>

typedef struct{
	int month;
	int day;
	int year;
}date;

typedef struct{
	char name[50];
	int age;
	date birth;
}worker;

int main(){
	worker work1;
	printf("enter the name : ");
	scanf("%s", work1.name);
	printf("enter the age : ");
	scanf("%d", &work1.age);
	printf("enter the date of birth : ");
	scanf("%d%d%d", &work1.birth.month,&work1.birth.day,&work1.birth.year);
	printf("------------the status--------------\n");
	printf("the name : %s\n", work1.name);
	printf("the age : %d\n", work1.age);
	printf("the date of birth : %d/%d/%d\n", work1.birth.month,work1.birth.day,work1.birth.year);
	printf("-----------------------------------\n");
	printf("Saving the statments ..");
	FILE * work = fopen("workers.txt", "w");
	fprintf(work,"------------the status--------------\n");
	fprintf(work,"the name : %s\n", work1.name);
	fprintf(work,"the age : %d\n", work1.age);
	fprintf(work,"the date of birth : %d/%d/%d\n", work1.birth.month,work1.birth.day,work1.birth.year);
	fprintf(work,"-----------------------------------\n");	
	fclose(work);
	return 0;
}
