#include <stdio.h>

#include <string.h>

/*struct*/ student (){
	int age;
	char name[20];
};

swap(int *first, int *second) {
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}
int sumOFArray(int *sptr, int *eptr) {
	int sum = 0;

	for (int i = 0; (sptr + i) <= eptr; i++) {
		sum = sum + sptr[i];
	}
	/*
	while (sptr <= eptr) {
		sum = sum + (*sptr);
		sptr++;
	}
	*/
	return sum;
}
print_student_list(student* sptr, int n){
	student* eptr = sptr + n;
	while(sptr < eptr){
		printf("Age = %d, name =%s\n", i + 1, sptr->age, sptr->name);
		sptr++;
	}
}
main() {
	int i = 10;
int j = 20;
int sum = 0;
int* iptr;
int iArray[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

//student s[30] = { {21, "name 1"}, {22, "name 2"}, { 23, "name 3" } };

//student* stdptr;


//print_student_list(s, 3);



student* stdptr;
int noOfStd;
printf("How many student?");
scanf("%d", &noOfStd);

stdptr = (student *) malloc(sizeof(student) * noOfStd);
stdptr-> age = 21;
strncpy(stdptr->name, "name 1", 20);
stdptr->age = 22;
strncpy(stdptr->name, "name 2", 20);
stdptr->age = 23;
strncpy(stdptr->name, "name 3", 20);



print_student_list(s, 3);

//s1.age = 21;
//strncpy(s1.name, "My Name", 21);

//printf("Age = %d, Name = %s\n", s1.age, s1.name);

int iArray[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18, 19, 20 };


swap(&i, &j);

/*
for (int k = 0; k < 20; k++) {
	sum = sum + iArray[k];
}
*/
/*for (iptr = &iArray[0]; iptr <= &iArray[20]; iptr++)
sum = sum + (*iptr);
*/

printf(" Sum of iArray = %d\n", sumOFArray(iArray, iArray+19));
printf("variabl i = %d, variable j = %d\n", i, j);

	}