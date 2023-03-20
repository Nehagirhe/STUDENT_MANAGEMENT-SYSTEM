#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student
{
int roll,marks,physics,chemistry,maths,result,students;
char name[20];	
};



int main()
{
	int ch,k,d,choice,ch1,n,phymarks,chemmarks,mathmarks,lp=1,i=0,j,a[25],uroll,v=0;
	char y,ca,cb,cc,cd,ch2,cha,uname[15];
	char t[20];
	struct student s[100];
	printf("\n\n************* Student Management System *****************\n");
	printf("\nWELCOME TO STUDENT MANAGEMENT SYSTEM \n");
	while(lp)
	{
	
	printf("\n1.Add Student\n2.Show Student\n3.Delete Student\n4.Update Student\n5.Search Student\n0.Exit");
	printf("\nenter choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	
		i=v;
	printf("\nnumber of students:");
	scanf("%d",&n);
	v=n+i;
	printf("\n");
	for(;i<v;i++)
	{
	printf("\n");
	printf("enter student name : ");	
	scanf(" %s",&s[i].name);	
	printf("enter student roll no.:");
	scanf("%d",&s[i].roll);
	printf("enter marks of phyics:");
	scanf("%d",&s[i].physics);
	printf("enter marks of chemistry:");
	scanf("%d",&s[i].chemistry);
	printf("enter marks of maths:");
	scanf("%d",&s[i].maths);
	s[i].result=s[i].physics+s[i].chemistry+s[i].maths;
	}
	
    printf("Record Save...!");
	
	break;
	case 2:
	printf("\n\n----------------------- SHOW RECORD ------------------------\n\n");
printf("--------------------------------------------------------------------------\n");
printf("ROLL\t|NAME\t  |  PHYSICS |CHEMISTRY   |MATHS    |REULT\t|REMARK  |\n");
printf("--------------------------------------------------------------------------\n");
    for(i=0;i<v;i++) 
    {if(s[i].roll!=0){
   

   // printf("ROLL\t|NAME\t|PHYSICS     |CHEMISTRY   |MATHS    |REULT\t|REMARK  |\n");
		
if(s[i].result>=180 && s[i].maths>=65 && s[i].physics>=55 && s[i].chemistry>=50)
    printf("%d\t|%s     \t|%d   |%d   \t  |%d       |%d       | pass  |\n",s[i].roll,s[i].name,s[i].physics,s[i].chemistry,s[i].maths,s[i].result);
    else
    printf("%d\t|%s     \t|%d   |%d   \t  |%d       |%d       |  Fail |\n",s[i].roll,s[i].name,s[i].physics,s[i].chemistry,s[i].maths,s[i].result);
  }
    }
	
	printf("\nAll Record Show..!!");
	break;
	case 3:
	
	printf("\n\n---------------------------- DELETE RECORD --------------------------------\n");
	printf("\nenter roll number you want to delete:");
	scanf("%d",&uroll);
	for(i=0;i<v;i++){
	if(s[i].roll==uroll)
	{
	printf("\nName:%s",s[i].name);
	printf("\nRoll No.:%d",s[i].roll);
	printf("\nDo You Really Want To Delete This Record?");
	printf("\ny/n");
	scanf(" %c", &y);
	switch(y)
	{
		case'y':
			
	s[i].roll=0;
	strcpy(s[i].name," ");
	printf("ok record deleted...\n");
	printf("--------------------------------------------------------------------------\n");
	printf("ROLL\t|NAME\t|PHYSICS   |CHEMISTRY   |MATHS    |REULT\t|REMARK  |\n");
	printf("--------------------------------------------------------------------------\n");
	for(i=0;i<v;i++){
	if(s[i].roll!=0)
	{
		
		
		
   // 
		
if(s[i].result>=180 && s[i].maths>=65 && s[i].physics>=55 && s[i].chemistry>=50)
    printf("%d\t|%s  \t|%d      |%d   \t  |%d       |%d       | pass  |\n",s[i].roll,s[i].name,s[i].physics,s[i].chemistry,s[i].maths,s[i].result);
    else
    printf("%d\t|%s  \t|%d      |%d   \t  |%d       |%d        |  Fail  |\n",s[i].roll,s[i].name,s[i].physics,s[i].chemistry,s[i].maths,s[i].result);
   	
	 }
}
		
		break;
		case'n':
			
				printf("....OK NO RECORD DELETED");
			break;
		}	
	}}
	
		
		break;

	
	
	
	
	
case 4:
printf("\n\n------------------------- Update Record --------------------------\n");
printf("\nEnter Student Roll Number : ");
scanf("%d",&uroll);	
for(i=0;i<v;i++)
{
	if(uroll==s[i].roll)
	{
printf("\nUpdate\n1.Name\n2.Physics\n3.Chemistry\n4.Maths");
printf("\nenter choice : ");
scanf("%d",&ch1);
	switch(ch1)
	{
		case 1:
			
			printf("\nRoll No.%d  ", s[i].roll);
			printf("\nCurrent Name Is %s", s[i].name);
			printf("\nEnter New Name : ");
			scanf(" %s", &uname);
			printf("\nDo You Really Want To Change %s To %s?",s[i].name,uname);
			printf("(y/n)");
			scanf(" %c", &ca);
			switch (ca)
			{
				case 'y':
					
					strcpy(s[i].name,uname);
					printf("...OK NAME UPDATED");	
					
					break;
				case 'n':
					
						printf("....OK NAME IS NOT UPDATED");
					break;
			
				}	
			
			break;
		case 2:
	
		printf("\nRoll No.%d  ", s[i].roll);
		printf("\nCurrent Physics Marks Is %d", s[i].physics);
		printf("\nEnter Physics Marks : ");
		scanf(" %d", &phymarks);
		printf("\nDo You Really Want To Change %d To %d?",s[i].physics,phymarks);
		printf("(y/n)");
		scanf(" %c",&cb);
		switch (cb)
		{
			case 'y':
			
			 s[i].physics=phymarks;
			 printf("....OK MARKS UPDATED");
			s[i].result=s[i].physics+s[i].chemistry+s[i].maths;
			
			break;
			case 'n':
			 printf("...OK MARKS IS NOT UPDATED");
			break;
				
		}	
	
		break;
		case 3:
		
		printf("\nRoll No.%d  ", s[i].roll);
		printf("\nCurrent Chemistry Marks Is %d", s[i].chemistry);
		printf("\nEnter Chemistry Marks:");
		scanf(" %d", &chemmarks);
		printf("\nDo You Really Want To Change %d To %d?",s[i].chemistry,chemmarks);
		printf("(y/n)");
		scanf(" %c",&cc);
		switch(cc)
		{
			case 'y':
		
		s[i].chemistry=chemmarks;
		printf("...OK CHEMISTRY MARKS UPDATED");
		s[i].result=s[i].physics+s[i].chemistry+s[i].maths;
		
				break;
				case'n':
				
				printf("...OK CHEMISTRY MARKS IS NOT UPDATED");	
				break;
						
			}	
		
			break;
			case 4:
		
		printf("\nRoll No.%d  ", s[i].roll);
		printf("\nCurrent Maths Marks Is %d", s[i].maths);
		printf("\nEnter Maths Marks:");
		scanf(" %d", &mathmarks);
		printf("\nDo You Really Want To Change %d To %d?",s[i].maths,mathmarks);
		printf("(y/n)");
		scanf(" %c",&cd);
		switch(cd)
		{
		case 'y':
		
		s[i].maths=mathmarks;
		printf("...OK MATHS MARKS UPDATED");
		s[i].result=s[i].physics+s[i].chemistry+s[i].maths;	
		
		break;
		case 'n':
		
		printf("...OK MATHS MARKS IS NOT UPDATED");
		break;
		
		}	
			
		}	
	}	
}
	
	
	
	
	break;
	case 5:
	printf("\n\n------------------------- SEARCH -----------------------------\n");
	printf("\n1.Search By Name\n2.Search By Roll");
	printf("\nenter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	
	printf("choice:1");	
	printf("\nenter Name you want to search:");
	scanf(" %s", &t);	
	printf("--------------------------------------------------------------------------\n");
	printf("ROLL\t|NAME\t|PHYSICS   |CHEMISTRY   |MATHS    |REULT\t|REMARK  |\n");
	printf("--------------------------------------------------------------------------\n");
	for(i=0;i<v;i++)
	{	
//	if(t==s[i].name)
if(!strcmp(s[i].name,t))
	{

    
		
if(s[i].result>=180 && s[i].maths>=65 && s[i].physics>=55 && s[i].chemistry>=50)
    printf("%d\t|%s  \t|%d      |%d   \t  |%d       |%d       | pass  |\n",s[i].roll,s[i].name,s[i].physics,s[i].chemistry,s[i].maths,s[i].result);
    else
    printf("%d\t|%s  \t|%d      |%d   \t  |%d       |%d        |  Fail  |\n",s[i].roll,s[i].name,s[i].physics,s[i].chemistry,s[i].maths,s[i].result);
   	
	}
	}
	
	break;
	case 2:

    printf("choice:2");	
	printf("\nenter the roll no. you want to search:\n");
	scanf("%d",&k);
	printf("--------------------------------------------------------------------------\n");
	printf("ROLL\t|NAME\t|PHYSICS   |CHEMISTRY   |MATHS    |REULT\t|REMARK  |\n");
	printf("--------------------------------------------------------------------------\n");
	for(i=0;i<v;i++)
	{
	if(s[i].roll==k)
	{
		
		
if(s[i].result>=180 && s[i].maths>=65 && s[i].physics>=55 && s[i].chemistry>=50)
    printf("%d\t|%s  \t|%d     |%d   \t  |%d       |%d       | pass  |\n",s[i].roll,s[i].name,s[i].physics,s[i].chemistry,s[i].maths,s[i].result);
    else
    printf("%d\t|%s  \t|%d     |%d   \t  |%d       |%d        |  Fail  |\n",s[i].roll,s[i].name,s[i].physics,s[i].chemistry,s[i].maths,s[i].result);
    
	}	
	}	
	printf("SEARCH DONE......");	
	}
	
	break;
	case 0:
	printf("\nDO YOU WANT TO EXIT?");
	printf("\n (y/n)");
	scanf(" %c", &cha);
    switch (cha)
    {
    	case 'n':
    		
    			lp=1;
			
			break;
		case 'y':
			
				printf("\nT H A N K  Y O U!!");
				printf("\nFOR USING SYSTEM.");			
			lp=0;
}		
}
}
}




