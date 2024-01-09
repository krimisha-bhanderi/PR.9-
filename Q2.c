#include<stdio.h>
/*
For example,
Input:
Enter details of Student 1:
Roll no => 121
Name => Raj Patel
Chemistry => 95
Mathematics => 90
Physics => 88

Enter details of Student 2:
Roll no => 122
Name => Divya Sharma
Chemistry => 92
Mathematics => 80
Physics => 84

Enter details of Student 3:
Roll no => 123
Name => Piyush Mishra
Chemistry => 72
Mathematics => 87
Physics => 93

Enter details of Student 4:
Roll no => 124
Name => Vatsal Mangukiya
Chemistry => 68
Mathematics => 96
Physics => 85

Enter details of Student 5:
Roll no => 125
Name => Sagar Trivedi
Chemistry => 91
Mathematics => 89
Physics => 77

Output:
Raj Patel (121)
Chemistry => 95
Mathematics => 90
Physics => 88
Total => 273/300
Percent => 91.00%

Divya Sharma (122)
Chemistry => 92
Mathematics => 80
Physics => 84
Total => 256/300
Percent => 85.33%

Piyush Mishra (123)
Chemistry => 72
Mathematics => 87
Physics => 93
Total => 252/300
Percent => 84.00%

Vatsal Mangukiya (124)
Chemistry => 68
Mathematics => 96
Physics => 85
Total => 249/300
Percent => 83.00%

Sagar Trivedi (125)
Chemistry => 91
Mathematics => 89
Physics => 77
Total => 257/300
Percent => 85.66%
*/
	struct details{

    char stu_name[10];
	int stu_rollno;
	int chemistry;
	int Mathematics;
	int Physics;
	
		
	};
	
int main()
{
	int i,n;
	int Total;
	int Percent;
	
	
	printf("Enter details of Student :\n\n ");
	scanf("%d",&n);
	
	  struct details stu[n];
	  
	  printf("Enter %d Student Details \n \n",n);
	 
	  for(i=0;i<n;i++){
	 
	  	printf("Student %d:- \n",i+1);

		printf("Enter the name:");
		scanf("%s",&stu[i].stu_name);	   		
		printf("Enter the rollNo:");
		scanf("%d",&stu[i].stu_rollno);   	
		
		printf("Marks of chamistry:");
		scanf("%d",&stu[i].chemistry);	   	
		
		printf("Marks of Mathematics:");
		scanf("%d",&stu[i].Mathematics);	   	
		
		printf("Marks of Physics:");
		scanf("%d",&stu[i].Physics);	   	
			  
	}
		 		   		

	      
    printf("\n Details of all Students \n");
    for(i=0; i<n; i++){
        printf("Name : ");
        printf("%s \n",stu[i].stu_name);
 
        printf("RollNo : ");
        printf("%d \n",stu[i].stu_rollno);
 
        printf("chamistry : ");
        printf("%d \n",stu[i].chemistry);
        
        printf("Mathematics : ");
        printf("%d \n",stu[i].Mathematics);
        
        printf("Physics : ");
        printf("%d \n",stu[i].Physics);
        
        Total=stu[i].chemistry+stu[i].Mathematics+stu[i].Physics;
        Percent=Total*100/300;
        
        printf("Total :");
        printf("%d \n",Total);
        
        printf("Percent :");
        printf("%d \n",Percent);
        
 
       }
 


}
