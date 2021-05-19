#include<stdio.h>  
#include<stdlib.h>
  
int ce=0, cb=0, cc=0;

void main()
{
	int engine[100][2], body[100][2], clean[100];
	int ch, i, a, x;
	while(ch != 12)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Enter car only to Engine\n2.Enter car only to Body\n3. Enter car only to Clean and Wash\n4.Enter Car to all services\n5. Enter Car to Engine and Body\n6. Enter Car to Engine and Clean and Wash\n7.Enter Car to Body and Clean and Wash\n8.Exit Car from Engine\n9.Exit Car from Body\n10.Exit car from Clean and Wash\n11.Show queues\n12.Exit");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&ch);  
        switch(ch)  
        {  
            case 1: 
			printf("Enter car number:");
			scanf("%d",&engine[ce][0]);
			engine[ce][1] = 0;
			ce++;
			break;
			case 2: 
			printf("Enter car number:");
			scanf("%d",&body[cb][0]);
			engine[cb][1] = 0;
			cb++;
			break;
			case 3: 
			printf("Enter car number:");
			scanf("%d",&clean[cc]);
			cc++;
			break; 
			case 4: 
			printf("Enter car number:");
			scanf("%d",&engine[ce][0]);
			engine[ce][1] = 3;
			ce++;
			break;
			case 5: 
			printf("Enter car number:");
			scanf("%d",&engine[ce][0]);
			engine[ce][1] = 2;
			ce++;
			break;
			case 6: 
			printf("Enter car number:");
			scanf("%d",&engine[ce][0]);
			engine[ce][1] = 1;
			ce++;
			break;
			case 7: 
			printf("Enter car number:");
			scanf("%d",&body[cb][0]);
			body[cb][1] = 1;
			cb++;
			break;
			case 8:
			a=engine[0][1];
			x=engine[0][0];
			for (i=0; i<ce-1; i++)
			{
				engine[i][0]=engine[i+1][0];
				engine[i][1]=engine[i+1][0];
			}
			ce--;
			if (a==1)
			{
				clean[cc]=x;
				cc++;
			}
			if (a==2)
			{
				body[cb][0]=x;
				body[cb][1]=0;
				cb++;
			}
			if (a==3)
			{
				body[cb][0]=x;
				body[cb][1]=1;
				cb++;
			}
			break;
			case 9:
			a=body[0][1];
			x=body[0][0];
			for (i=0; i<cb-1; i++)
			{
				body[i][0]=body[i+1][0];
				body[i][1]=body[i+1][0];
			}
			cb--;
			if (a==1)
			{
				clean[cc]=x;
				cc++;
			}
			break;
			case 10:
			for (i=0; i<cc-1; i++)
			{
				clean[i]=clean[i+1];
			}
			cc--;
			break;
            case 11:  
            printf("\nEngine: ");
			for(i=0;i<ce;i++)
				printf("%d ", engine[i][0]);
			printf("\nBody: ");
			for(i=0;i<cb;i++)
				printf("%d ", body[i][0]);  
			printf("\nClean and Wash: ");
			for(i=0;i<cc;i++)
				printf("%d ", clean[i]);    
            break;  
            case 12:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  	
}
