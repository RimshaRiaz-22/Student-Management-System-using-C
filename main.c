/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C program for the implementation of
// menu driven program for student
// management system
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <pthread.h>

// Variable to keep track of
// number of students
int i = 0;

// Structure to store the student
struct sinfo {
	char fname[50];
	char lname[50];
	int roll;
	float cgpa;
	int cid[10];
} st[55];

//Function Declaration
void *add_student(void *p);
void *find_rl(void *p);
void *find_fn(void *p);
void *find_c(void *p);
void *tot_s(void *p);
void *del_s(void *p);
void *up_s(void *p);





// Function to add the student
void *add_student(void *p)
{
        printf("----------------------------------------------------------------------------------\n");
	printf("Add the Students Details\n");
	     printf("----------------------------------------------------------------------------------\n");
	printf("Enter the first "
		"name of student\n");
	scanf("%s", st[i].fname);
	printf("Enter the last name"
		" of student\n");
	scanf("%s", st[i].lname);
	printf("Enter the Roll Number\n");
	scanf("%d", &st[i].roll);
	printf("Enter the CGPA "
		"you obtained\n");
	scanf("%f", &st[i].cgpa);
	printf("Enter the course ID"
		" of each course\n");
	for (int j = 0; j < 5; j++) {
		scanf("%d", &st[i].cid[j]);
	}
	i = i + 1;
         printf("----------------------------------------------------------------------------------\n");
}

// Function to find the student
// by the roll number
void *find_rl(void *p)
{
	int x;
         printf("----------------------------------------------------------------------------------\n");
	printf("Enter the Roll Number"
		" of the student\n");
	scanf("%d", &x);
         printf("----------------------------------------------------------------------------------\n");
	for (int j = 1; j <= i; j++) {
		if (x == st[i].roll) {
			printf(
				"The Students Details are\n");
                     printf("----------------------------------------------------------------------------------\n");
			printf("The First name is %s\n",st[i].fname);
			printf("The Last name is %s\n",st[i].lname);
			printf("The CGPA is %f\n",st[i].cgpa);
			printf("Enter the course ID of each course\n");
		}
		for (int j = 0; j < 5; j++) {
			printf("The course ID are %d\n",st[i].cid[j]);
		}
             printf("----------------------------------------------------------------------------------\n");
		break;
	}
}

// Function to find the student
// by the first name
void *find_fn(void *p)
{
	char a[50];
         printf("----------------------------------------------------------------------------------\n");
	printf("Enter the First Name"
		" of the student\n");
	scanf("%s", a);
         printf("----------------------------------------------------------------------------------\n");
	int c = 0;

	for (int j = 1; j <= i; j++) {
		if (!strcmp(st[j].fname, a)) {

			printf(
				"The Students Details are\n");
                     printf("----------------------------------------------------------------------------------\n");
			printf("The First name is %s\n",
				st[i].fname);
			printf("The Last name is %s\n",
				st[i].lname);
			printf("The Roll Number is %d\n ",
				st[i].roll);
			printf("The CGPA is %f\n",st[i].cgpa);
			printf("Enter the course ID of each course\n");

			for (int j = 0; j < 5; j++) {
				printf(
					"The course ID are %d\n",
					st[i].cid[j]);
			}
			c = 1;
                 printf("----------------------------------------------------------------------------------\n");
		}
		else
			printf(
				"The First Name not Found\n");
	}
}

// Function to find
// the students enrolled
// in a particular course
void *find_c(void *p)
{
	int id;
         printf("----------------------------------------------------------------------------------\n");
	printf("Enter the course ID \n");
	scanf("%d", &id);
         printf("----------------------------------------------------------------------------------\n");
	int c = 0;

	for (int j = 1; j <= i; j++) {
		for (int d = 0; d < 5; d++) {
			if (id == st[j].cid[d]) {

				printf(
					"The Students Details are\n");
                         printf("----------------------------------------------------------------------------------\n");
				printf(
					"The First name is %s\n",
					st[i].fname);
				printf(
					"The Last name is %s\n",
					st[i].lname);
				printf(
					"The Roll Number is %d\n ",
					st[i].roll);
				printf(
					"The CGPA is %f\n",
					st[i].cgpa);
                         printf("----------------------------------------------------------------------------------\n");

				c = 1;

				break;
			}
			else{
				printf(
					"The First Name not Found\n");
		}
	}
  }
}

// Function to print the total
// number of students
void *tot_s(void *p)
{
         printf("----------------------------------------------------------------------------------\n");
	printf("The total number of"
		" Student is %d\n",
		i);
	printf("\n you can have a "
		"max of 50 students\n");
	printf("you can have %d "
		"more students\n",
		50 - i);
             printf("----------------------------------------------------------------------------------\n");
}

// Function to delete a student
// by the roll number
void *del_s(void *p)
{
         printf("----------------------------------------------------------------------------------\n");
	int a;
	printf("Enter the Roll Number"
		" which you want "
		"to delete\n");
	scanf("%d", &a);
	for (int j = 1; j <= i; j++) {
		if (a == st[j].roll) {
			for (int k = j; k < 49; k++)
				st[k] = st[k + 1];
			i--;
		}
	}
	printf("The Roll Number"
		" is removed Successfully\n");
             printf("----------------------------------------------------------------------------------\n");
}

// Driver code
void main()

{
  pthread_t thread;
    int choice, count;
     int status;
  int pid = fork();
   if(pid == 0)
  {
	while (i = 1) {
             printf("----------------------------------------------------------------------------------\n");
        printf("-----Child Process----\n");
         printf("The PID of my child process is: %d.\n",getpid());
		printf("The Task that Child Process "
			"want to perform\n");
		printf("1. Add the Student Details\n");
		printf("2. Find the Student "
			"Details by Roll Number\n");
		printf("3. Find the Student "
			"Details by First Name\n");
		printf("4. Find the Student "
			"Details by Course Id\n");
		printf("5. Find the Total number"
			" of Students\n");
		printf("6. Delete the Students Details"
			" by Roll Number\n");
		printf("7. To Exit\n");
             printf("----------------------------------------------------------------------------------\n");
		printf("Enter your choice to "
			"find the task\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			pthread_create(&thread,NULL,add_student,NULL);
			pthread_join(thread,NULL);
			break;
		case 2:
			pthread_create(&thread,NULL,find_rl,NULL);
			pthread_join(thread,NULL);
			break;
		case 3:
			pthread_create(&thread,NULL,find_fn,NULL);
			pthread_join(thread,NULL);
			break;
		case 4:
			pthread_create(&thread,NULL,find_c,NULL);
			pthread_join(thread,NULL);
			break;
		case 5:
			pthread_create(&thread,NULL,tot_s,NULL);
			pthread_join(thread,NULL);
			break;
		case 6:
			pthread_create(&thread,NULL,del_s,NULL);
			pthread_join(thread,NULL);
		case 7:
			exit(0);
			break;
		}
	}
    printf("I have finished my task. So I'm going to quit now\n");
   printf("Good Bye from %d \n",getpid());
        printf("----------------------------------------------------------------------------------\n");

}else{
     printf("----------------------------------------------------------------------------------\n");
      printf("I am parent process and my pid is: %d.\n",getpid());
      //waiting for child process to complete
   wait(&status);
   printf("Again Parent process \n with pid:%d ",getpid());
   printf("Total Records:\n");
   pthread_create(&thread,NULL,tot_s,NULL);
			pthread_join(thread,NULL);
   printf("Good Bye from %d \n",getpid());
        printf("----------------------------------------------------------------------------------\n");


}
}