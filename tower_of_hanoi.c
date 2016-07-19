
/* 
 * Program: Tower of Hanoi
 * Author : Abhishek Kadariya [0501]
 * BATCH OF 2019 DWIT
 * 
 * Ref    : Data structures using C and C++, Chap 2.
*/
#include<stdio.h>
#include<conio.h>


void procedure( int, char, char, char);

int main(){
	 int n; 
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    procedure(n, 'A', 'C', 'B');
    return 0;
}


void procedure(int n, char source, char destination, char reference){
	
	if(n==1){
	printf("Move disc 1 from %c to %c\n",source,destination);
	return;
	}
	
	procedure(n - 1,source, reference, destination);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    procedure(n- 1, reference, destination, source);

	
}
