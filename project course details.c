#include<stdio.h>
struct detail
{
unsigned long long phno;
char name[20],email[20];
char course[20],subcourse[20],specialization[20];
}de;
FILE *f;
int main()
{
	int a,t,m,s,n,i;
	//struct detail de;
	f=fopen("feedata.txt","a");
	printf("Enter your Name\n");
	fscanf(stdin,"%s",de.name);
	fprintf(f,"\nName :%s",de.name);
	
	printf("Enter your Mobile Number\n");
	fscanf(stdin,"%llu",&de.phno);
	fprintf(f,"\nPhone number :%llu",de.phno);
	
	printf("Enter your Email\n");
	fscanf(stdin,"%s",de.email);
	fprintf(f,"\nEmail :%s",de.email);
	
	printf("------------------------------------------------------------------------------------------------------------");
	printf("\n\n\t\t\t\tCollege Name-SR UNIVERSITY\n\n\n");
		printf("Enter the course you want");
		printf("\n 1-B.tech ");
		printf("\n 2-BBA");
		printf("\n 3-B.com");
		printf("\n 4-B.Sc");
		printf("\n 5-M.tech");
		printf("\nEnter Course name :");
		fscanf(stdin,"%s",de.course);
		fprintf(f,"\nCourse :%s",de.course);
		printf("Enter option :");
		scanf("%d",&a);
		
		switch(a)
		{
			
			case 1://b.tech
				printf("\n1-CSE \n2-EEE \n3-ECE \n4-CIVIL \n5-MECHANICAL \n6-CHEMICAL");
				printf("Enter option :");
				scanf("%d",&t);
				printf("\n enter the subcourse name=");
				fscanf(stdin,"%s",de.subcourse);
				fprintf(f,"\nSubCourse :%s",de.subcourse);
		switch(t)
		{
			case 1://CSE
				printf("\n1-Cs \n2-Ds \n3-Ai/Ml \n4-nothing");
				printf("Enter option:");
				scanf("%d",&m);
				printf("\n enter the specialization");
				fscanf(stdin,"%s",de.specialization);
				fprintf(f,"\nSpecialization :%s",de.specialization);
				switch(m)
				
				{
					case 1:
					fprintf(f,"\nCs=1,80,000/-");
					break;
					
					case 2:
				    fprintf(f,"\nDs=1,80,000/-");
				    break;
				    
				    case 3:
				    fprintf(f,"\nAi/Ml=1,80,000/-");
				    break;
				    
				    case 4:
				    fprintf(f,"\nNothing=1,70,000/-");
				    break;
				}
				
				break;
				case 2:
				printf("\n1-Ai/Ml \n2-nothing");
				printf("\n Enter option :");
				scanf("%d",&m);
				printf("\n enter the specialization");
				fscanf(stdin,"%s",de.specialization);
				fprintf(f,"\nSpecialization :%s",de.specialization);
				switch(m)
				{
				    case 1:
				    fprintf(f,"\nAi/Ml=1,80,000/-");
				    break;
				    
				    case 2:
				    fprintf(f,"\nNothing=1,70,000/-");
					break;
			}break;
			
				case 3:
				printf("\n1-Ai/Ml \n2-nothing");
				printf("\n enter the specialization");
				scanf("%d",&m);
				printf("\n enter the specialization");
				fscanf(stdin,"%s",de.specialization);
				fprintf(f,"\nSpecialization :%s",de.specialization);
				switch(m)
				{
				    case 1:
				    fprintf(f,"\nAi/Ml=1,80,000/-");
				    printf("\nAi/Ml=1,80,000/-");
				    break;
				    
				    case 2:
				    fprintf(f,"\nNothing=1,70,000/-");
				    printf("\nNothing=1,70,000/-");
				    break;
		        }break;
		        
		        case 4:
				printf("\n1-Ai/Ml \n2-nothing");
				printf("\n enter the specialization");
				scanf("%d",&m);
				printf("\n enter the specialization");
				fscanf(stdin,"%s",de.specialization);
				fprintf(f,"\nSpecialization :%s",de.specialization);
				switch(m)
				{
				    case 1:
				    fprintf(f,"\nAi/Ml=1,80,000/-");
				    break;
				    
				    case 2:
				    fprintf(f,"\nNothing=1,70,000/-");
				    break;
				}
				
				case 5:
				printf("\n1-Ai/Ml \n2-nothing");
				printf("\n enter the specialization");
				scanf("%d",&m);
				printf("\n enter the specialization");
				fscanf(stdin,"%s",de.specialization);
				fprintf(f,"\nSpecialization :%s",de.specialization);
				switch(m)
				{
					 case 1:
				    fprintf(f,"\nAi/Ml=1,80,000/-");
				    break;
				    
				    case 2:
				    fprintf(f,"\nNothing=1,70,000/-");
				    break;
				}break;
				
				case 6:
				    printf("\n1-Nothing");
				    printf("\nenter the specialization");
				    scanf("%d",&m);
				    fprintf(f,"\nNo specialization");
				switch(m)
				{
					case 1:
				    fprintf(f,"\nNothing=1,80,000/-");
				    break;	
				}
				 break;   
				
	}break;
		
			case 2:
				printf("\n1-Finance \n2-Marketing \n3-Business_Analytics \n4-Human_Resourse \n5-Nothing");
				printf("\n enter option :");
				scanf("%d",&t);
				printf("\n enter the subcourse");
				fscanf(stdin,"%s",de.subcourse);
				fprintf(f,"\nSubCourse :%s",de.subcourse);
				
			switch(t)
			{ 
					case 1:
						fprintf(f,"\nFinance= 1,10,000/-");
						break;
						
					case 2:
						fprintf(f,"\nMarketing=1,20,000/-");
						break;
					
					case 3:
						fprintf(f,"\nBusiness Analytics=1,25,000/-");
						break;
						
					case 4:
						fprintf(f,"\nHuman Resourse=1,35,000/-");
						break;
					case 5:
						fprintf(f,"\nNothing=1,00,000/-");
						break;
			}break;
			
			
			
				case 3:
				printf("\n1-Investment \n2-Accounts_and_finance \n3-Business_tactics \n4-Banking_and_finance \n5-Invest_management \n6-Financial_marketing \n7 Banking_and_insurance \n8-Nothing ");
				printf("\n enter option :");
				scanf("%d",&t);
				printf("\n enter the subcourse");
				fscanf(stdin,"%s",de.subcourse);
				fprintf(f,"\nSubCourse :%s",de.subcourse);
				
				switch(t)
			{
					
					case 1:
						
						fprintf(f,"\nInvestment= 1,10,000/-");
						break;
					
			
		           case 2:
						
						fprintf(f,"\nAccounts and finance = 1,10,000/-");
						break;
			
			
					case 3:
						
						fprintf(f,"\nBusiness tactics = 1,10,000/-");
						break;
					
					
					case 4:
						
						fprintf(f,"\nBanking and finance = 1,10,000/-");
						break;
						
					case 5:
						
						fprintf(f,"\nInvestment management= 1,10,000/-");
						break;
					
					
					case 6:
						
						fprintf(f,"\nFinancial Marketing = 1,10,000/-");
						break;
						
						
				 	case 7:
						
						fprintf(f,"\nBanking and insurence = 1,10,000/-");
						break;
						case 8:
						
						fprintf(f,"\nNothing = 80,000/-");
						break;
				
			}break;
			
			case 4:
				printf("\n1-Astrophysics \n2-Agriculture \n3-Biochemistry \n4-CellBiology \n5-Chemistry \n6-Pharmology \n7-Geology");
				printf("\n enter the number");
				scanf("%d",&t);
				printf("\n enter the subcourse");
				fscanf(stdin,"%s",de.subcourse);
				fprintf(f,"\nSubCourse :%s",de.subcourse);
				fprintf(f,"\n          ******* THANK YOU ********\n");
				fprintf(f,"                                                     \n");
				fprintf(f,"\n---------------------------------------------------\n");
						switch(t)
			{
					
					case 1:
						
						fprintf(f,"\nAstrophysics = 1,10,000/-");
						break;
					
			
		           case 2:
						
						fprintf(f,"\nAgriculture = 1,10,000/-");
						break;
			
			
					case 3:
						
						fprintf(f,"\nBiochemistry = 1,10,000/-");
						break;
					
					
					case 4:
						
						fprintf(f,"\nCell Biology = 1,10,000/-");
						break;
						
					case 5:
						
						fprintf(f,"\nChemistry = 1,10,000/-");
						break;
					
					
					case 6:
						
						fprintf(f,"\nPharmlogy = 1,00,000/-");
						break;
						
						
				 	case 7:
						
						fprintf(f,"\nGeology = 1,00,000/-");
						break;
						
				
			}break;
			
					
			fclose(f);
}
			 
					
}
