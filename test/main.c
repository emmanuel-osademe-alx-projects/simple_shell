#include <stdio.h>
#include <string.h>

void main (int agc __attribute((unused)), char *argv[])
{
	struct student
	{
		int rollno;
		char name[5];
		float marks;
	};

	struct student s1;

	// printf("%zu\n", sizeof(s1));
	// s1.rollno = (unsigned int)argv[1];
	// *s1.name = argv[2];
	// s1.marks = (char)argv[3];
	// printf("Roll #: %d \n", s1.rollno);
	// printf("Name #: %s \n", s1.name);
	// printf("Marks #: %f \n", s1.marks);
	int i = 0;
	while(argv[i] != 0){
		// printf("argv[%d]: %s \n",i, argv[i]);
		printf("address of argv: %p \n", &argv[i]);
		i++;
	}
	
}