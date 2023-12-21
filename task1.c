/*

Questions:
Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
For example,
Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0

*/
#include<stdio.h>{
	int add (int x , int y){
		return x+y;
	}
		int sub (int x , int y){
		return x-y;
	}
	void multi (int x, int y){
		printf("multi = %d",x*y);
	}
		void div (int x, int y){
		printf("div = %d",x/y);
	}
		void modulo (int x, int y){
		printf("modulo = %d",x%y);
	}

main() 
{
int s,a,b;
	do{
		
		printf("\n-----------------------\n");
		printf("1. addition\n");
		printf("2. substraction\n");
		printf("3. multiplication\n");
		printf("4. division\n");
		printf("5. modulo\n");
		printf("6. exit\n");
				
		printf("enter selected number :");
		scanf("%d",&s);
		
		if(s>=1 && s<6){
			
			printf("enter any value  A :");
			scanf("%d",&a);
			printf("enter any value  B :");
			scanf("%d",&b);
			
			switch(s){
				
				case 1:
					printf("sum = %d",add(a,b));
					break;
					
				case 2:
					printf("sub = %d",sub(a,b));
					break;
					
				case 3:
					multi (a,b);
					break;
					
				case 4:
					div (a,b);
					break;
					
				case 5:
					modulo(a,b);
					break;
					
			}
		}
		
	}while(s!=6);
}

