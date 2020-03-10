#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>

/*#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
*/



int room;
int tot[500];



void list();

void features();
void add();
void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}
void restaurant();
void checkout();
void bill();
void intro();
void welcomepage();
void login()
{
   system("COLOR 4B");
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="password";
    do
{
	system("cls");

    printf("\n \t   **************************  LOGIN FORM  **************************  ");
    printf(" \n \t                           ENTER USERNAME:-");
	scanf("\t%s", &uname);
	printf(" \n \t                           ENTER PASSWORD:-");

	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';

	i=0;

		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
	printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");
        printf("\nPASSWORD MATCHING");
	for(i=0;i<5;i++)
    {
        fordelay(10000000000);
        printf(".");
    }
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");
}

struct CustomerDetails
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char nationality[15];
	char email[20];
	char period[10];
	char arrivaldate[10];
}s;

void welcomepage()
 {
   printf("\n     welcome to jaypee hotel");
   printf("\n            noida           ");

 }
void intro()
 {
   printf("\n\t             sector 62 noida ,jaypee hotel,     INDIA");
   printf("\n\n                              Ph. No.:011-27223959");
   printf("\n\n\n                             WELCOMES YOU..............");
   printf("\n\n\n\tHotel jaypee Inn is one of the newest Hotel in noida. it has the most beautiful view .it provides you many ");
   printf("\n\n\n\t      facillities along with garden &  swimming pool.you will surely have a memorable stay");

   printf("\t\t\t  \n                          1. escalators & lift.\n");
   printf("\t\t\t2. parking space.\n");
   printf("\t\t\t3. Round the clock security.\n");
   printf("\t\t\t4. Running hot and cold water.\n");
   printf("\t\t\t5. 24/7 internet service.\n");
   printf("\t\t\t6. 24 hours room service.\n");
   printf("\t\t\t7. Laundry service.\n");
   printf("\nPress any character to continue:");
   getch();
 }
void list()
{
	FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL)
	{

	}
	system("cls");
	printf("ROOM    ");
	printf("NAME\t ");
	printf("\tADDRESS ");
	printf("\tPHONENUMBER ");
	printf("\tNATIONALITY ");
	printf("\tEMAIL ");
	printf("\t\t  PERIOD ");
	printf("\t ARRIVALDATE \n");

	for(i=0;i<118;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		/*printf("ROOMNUMBER :\t%s\n",s.roomnumber);
		printf("NAME:\t%s\n",,s.name);
		printf("ADDRESS:\t%s\n",s.address);
		printf("PHONENUMBER:\t%s\n",s.phonenumber);
		printf("NATIONALITY \n");*/
		printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t     %s  \t  %s",s.roomnumber, s.name , s.address , s.phonenumber ,s.nationality ,s.email,s.period,  s.arrivaldate);
	}
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");

	fclose(f);
	getch();
}
void features()
 {
   int typ;
   int type;
system("cls");

   welcomepage();
   printf("\nChoose the room type:\n1. Sp. Deluxe\n2. Deluxe");
   printf("\n3. General\n4. couple\n");
   scanf("%d",&typ);
   if(typ>4)
     {
       printf("\nWrong choice!! Choose a number between 1-4:");
       features();
     }
   switch(typ)
     {
       case 1:
       welcomepage();
       printf("\n Room type  ---------->>>1");

       printf("\n                     || FEATURES OF THIS ROOM  ||                     ");
       printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
       printf("\n\n Room Type            >>> Sp.deluxe");
       printf("\n\n Room charges         >>> Rs.1500 per day");
       printf("\n\n 1. Bed               >>>      2");
       printf("\n\n 2.Capacity           >>>      5");
       printf("\n\n 3.Balcony available     ");
       printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
       printf("\n                   ||    ADDITIONAL FEATURES  ||                      ");
       printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
       printf("\n\n 1.A/C  available ");
       printf("\n\n 2.Geyser available");
       printf("\n\n 3.TV available      ");
       printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");

       break;
       case 2:
       welcomepage();
       printf("\n Room type--------------->>>2\n\n");

       printf("\n                     || FEATURES OF THIS ROOM  ||                    ");
       printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
       printf("\n\n Room Type            >>> Deluxe                                      ");
       printf("\n\n Room charges         >>>Rs.1000 per day");
       printf("\n\n 1. Bed               >>>      2");
       printf("\n\n 2.Capacity           >>>      5");
       printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
       printf("\n                    ||ADDITIONAL FEATURES  ||                     ");
       printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
       printf("\n\n 1.A/C available   ");
       printf("\n\n 2.Geyser available");
       printf("\n\n 3.TV available      ");
       printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");

       break;
       case 3:
       welcomepage();
       printf("\n Room type---------->>>>>3\n\n");

       printf("\n                 ||  FEATURES OF THIS ROOM ||                      ");
       printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
       printf("\n\n Room Type            >>> General                                    ");
       printf("\n\n Room charges         >>>Rs.750 per day");
       printf("\n\n 1. Bed               >>>      2");
       printf("\n\n 2.Capacity           >>>      5");
       printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
       printf("\n                  ||  ADDITIONAL FEATURES  ||                      ");
       printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
       printf("\n\n 1.Geyser available      ");
       printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");

       break;
       case 4:
       welcomepage();
       printf("\n Room type--------------->>>4\n\n");

       printf("\n                 ||  FEATURES OF THIS ROOM ||                     ");
       printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
       printf("\n\n Room Type            >>> couple                                     ");
       printf("\n\n Room charges         >>>Rs.1000 per day");
       printf("\n\n 1. Bed               >>>      1");
       printf("\n\n 2.Capacity           >>>      2");
       printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
       printf("\n                    ADDITIONAL FEATURES                        ");
       printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
       printf("\n\n 1.Geyser available");
       printf("\n\n 2.TV available      ");
       printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");

       break;

     }
      printf("\n type 0 to see other type of room and 1 to continue ");
     scanf("%d",&type);
     if(type==0)
     {
         features();
     }
    else{
            char ch,ans;
        do{
       welcomepage();
       printf("\n\n\n                      Choose a category:\n");
       printf("                        1. check availability\n");
       printf("                        2. Features of room\n");
       printf("                        3. Book a room  \n");
       printf("                        4. Show customer details\n");
       printf("                        5. food services\n");
       printf("                        6. Check out \n");
       printf("                        7. bill.\n");
       printf("                        8. Exit\n");
       scanf("%d",&ch);
       switch(ch)
   {
     case 1:list();

     break;
     case 2:features();
     break;
     case 3:add();
     break;
     case 4:search();
     break;
     case 5:restaurant();
     break;
     case 6:checkout();
     break;
     case 7:bill();
     case 8:break;
     default:printf("\n\n\nWrong choice!!!!\n\nPlease choose 1-6");
     }
      printf("\n\nDo you want to continue:(press y or Y to continue)");
 fflush(stdin);
 scanf("%c",&ans);
     }while(ans=='y'||ans=='Y');
    }

 }
 /*void check()
{ int t=0;
system("cls");
	FILE *f;
	char roomnumber[20];

	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter Room number: \n");
	scanf("%s", roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)

	{
		if(strcmp(s.roomnumber,roomnumber)==0){
		    printf("this room has been taken");
		    t=1;
		    }
	}
	if(t=0)
    {

	FILE *f;
	char test;
	int temp;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		getch();
	}
	while(1)
	{
		system("cls");

		scanf("%s",s.roomnumber);
    }
    fclose(f);

	}
}*/

void add()
{
	FILE *f;
	char test;
	int temp;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		getch();
	}
	while(1)
	{

		printf("\n Enter Customer Details:");
		printf("\n**************************");
		//check();
		printf("\n Enter Room number:(100-199 is super deluxe\n 200-299 is deluxe\n300-399 is general\n400-499 is couple)\n");
		scanf("\n%s",s.roomnumber);

		fflush(stdin);
		printf("Enter Name:\n");
		scanf("%s",s.name);
		printf("Enter Address:\n");
		scanf("%s",s.address);
		printf("Enter Phone Number:\n");
		scanf("%s",s.phonenumber);
		printf("Enter Nationality:\n");
		scanf("%s",s.nationality);
		printf("Enter Email:\n");
		scanf(" %s",s.email);
		printf("Enter Period(\'x\'days):\n");
		scanf("%s",&s.period);
		printf("Enter Arrival date(dd\\mm\\yyyy):\n");
		scanf("%s",&s.arrivaldate);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 Room is successfully booked!!");
		printf("\n Press esc key to exit,  any other key to add another customer detail:");
		test=getch();
		if(test==27)
			break;

	}
	fclose(f);
}
void search()
{
system("cls");
	FILE *f;
	char roomnumber[20];
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter Room number of the customer to search its details: \n");
	scanf("%s", roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0){
			flag=0;
			printf("\n\tRecord Found\n ");
			printf("\nRoom Number:\t%s",s.roomnumber);
			printf("\nName:\t%s",s.name);
			printf("\nAddress:\t%s",s.address);
			printf("\nPhone number:\t%s",s.phonenumber);
			printf("\nNationality:\t%s",s.nationality);
			printf("\nEmail:\t%s",s.email);
			printf("\nPeriod:\t%s",s.period);
			printf("\nArrival date:\t%s",s.arrivaldate);
			flag=0;
			break;
		}
	}
	if(flag==1){
		printf("\n\tRequested Customer could not be found!");
	}
	getch();
	fclose(f);

}




void checkout()
{
	FILE *f,*t;
	int i=1;
	char roomnumber[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("add.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the Room Number of the hotel to be checked out : \n");
	fflush(stdin);
	scanf("%s",roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{
		printf("\n\n Records of Customer in this  Room number is not found!!");
		//remove("E:/file.txt");
	   //rename("E:/temp.txt","E:/file.txt");
		getch();
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("add.txt");
	rename("temp.txt","add.txt");
	printf("\n\nThe Customer is successfully removed....");
	fclose(f);
	fclose(t);
	getch();
}

void bill()
{   int roomt,rooms,amt,days,bills;
    printf("enter your room number");
    scanf("%d",&rooms);
    roomt=rooms/100;
    if(roomt==1)
    {
        amt=1500;
    }
    else if(roomt==2)
    {
        amt=1000;
    }
    else if(roomt==3)
    {
        amt=750;
    }
    else if(roomt==4)
    {
        amt=1000;
    }
    printf("enter no of days you have stayed\n");
    scanf("%d",&days);
    bills=days*amt+tot[room-1];
    printf("your total bill is %d",bills);

}
void restaurant()
{
   int count=0,z=0,fc[113],answ;
   char ans;
   int i;
   char name;
   int price[113]={245,245,245,245,240,240,240,240,235,235,250,235,235,220,
   215,230,215,240,250,250,250,250,250,250,250,255,245,245,245,245,250,240,
   240,360,290,360,290,370,295,360,290,360,290,250,360,290,360,290,250,370,
   290,360,290,250,250,280,245,290,235,265,240,290,300,256,240,265,270,255,
   255,240,240,235,220,25,30,25,30,35,35,25,30,35,25,35,25,25,30,100,105,105,
   100,105,100,105,125,105,105,100,105,110,115,100,100,100,105,105,105,105,
   125,105,120,120,100};
   char food[113][30]={"SHAHI PANEER","KADAI PANEER","CHEESE KORMA",
   "MALAI KOFTA","MATAR PANEER","PALAK PANEER","MIX VEG.","ALOO GOBI",
   "ALOO JEERA","CHANA MASALA","MATAR MUSHROOM","RAJMA MAKHANI","DAL MAKHANI",
   "MIXED RAITA","BUNDI RAITA","PINEAPPLE RAITA","SALAD(GREEN)","DUM ALOO",
   "MUSHROOM PANEER","MUTTON MASALA","MUTTON MUGHLAI","MUTTON KORMA",
   "MUTTON DO PYAZA","MUTTON SAGH","MUTTON DAHI","MUTTON ROGAN JOSH",
   "MUTTON CURRY","KADAI MUTTON","KEEMA LEVER","KEEMA MATAR","KEEMA EGG",
   "BRAIN CURRY","EGG CURRY","BUTTER CHICKEN","BUTTER CHICKEN(1/2)",
   "KADAI CHICKEN","KADAI CHICKEN(1/2)","BUTTER CHICKEN(BL)",
   "BUTTER CHICKEN(BL)(1/2)","CHICKEN MUGHLAI","CHICKEN MUGHLAI(1/2)",
   "CHICKEN MASALA","CHICKEN MASALA(1/2)","CHICKEN MASALA(1/4)",
   "CHICKEN SAGH","CHICKEN SAGH(1/2)","CHICKEN DAHI","CHICKEN DAHI(1/2)",
   "CHICKEN DAHI(1/4)","CHICKEN KORMA","CHICKEN KORMA(1/2)",
   "CHICKEN DO PYAZA","CHICKEN DO PYAZA(1/2)","FISH CURRY","CHICKEN CURRY",
   "CHICKEN CURRY(1/2)","CHICKEN CURRY(1/4)","CHILLI CHICKEN","TANDOORI ALOO",
   "CHICKEN TIKKA","SEEKH KABAB","FISH TIKKA","CHICKEN TANDOORI",
   "CHICKEN TANDOORI(1/2)","PANEER TIKKA","CHICKEN SEEKH KABAB",
   "CHICKEN HARA KABAB","CHICKEN BIRYANI","MUTTON BIRYANI","PANEER PULAO",
   "VEG.PULAO","JEERA RICE","STEAMED RICE","RUMALI ROTI","ROTI","NAN",
   "ALOO NAN","PANEER NAN","KEEMA NAN","PARANTHA","ALOO PARANTHA",
   "PANEER PARANTHA","PUDINA PARANTHA","BUTTER NAN","LACHCHA PARANTHA",
   "MISSI ROTI","KHASTA ROTI","VEG.BURGER","PANEER BURGER","CHEESE SANDWICH",
   "VEG.PATTI","CHICKEN PATTI","TEA","COFFEE","COLD COFFEE","PINEAPPLE",
   "STRAWBERRY","CHOCOLATE","BLACK FOREST","DOUBLE STORIED","TRIPLE STORIED",
   "SOFT CONE","VANILLA","STRAWBERRY","CHOCOLATE","CHOCO CHIPS","MANGO",
   "TUTTI FRUITY","LICHI","PISTA BADAM","CHOCOLATE PISTA BADAM","CHOCO DIP",
   "CHOCOLATE LICHI"};
   system("cls");
   welcomepage();
   printf("\n                        *********");
   printf("\n                        MENU CARD");
   printf("\n                        *********");
   printf("\n\n                      VEGETARIAN");
   for(i=0;i<113;count++,i++)
     {
      // gotoxy(17,count+20);

       printf("\n\t%d\t",i+1);
      // gotoxy(30,count+20);
     //  puts(food[i]);
     printf("%s",food[i]);
    printf("\t%d",price[i]);
      // gotoxy(55,count+20);

       if(count==17)
  {
    count=0;
    printf("\n                              PRESS ANY KEY TO CONTINUE");
    getch();
    system("cls");
    welcomepage();
  }
       if(i==18)
  {
    printf("\n\n       MUTTON\n");
    count +=3;
  }
       if(i==32)
  {
    printf("\n\n       CHICKEN\n");
    count +=3;
  }
       if(i==57)
  {
    printf("\n\n       BAR-BE-QUE\n");
    count +=3;
  }
       if(i==72)
  {
    printf("\n\n       ROTI-NAN-PARANTHA\n");
    count +=3;
  }
       if(i==91)
  {
    printf("\n\n       BEVERAGES\n");
    count +=3;
  }
       if(i==100)
  {
    printf("\n\n       ICE-CREAMS\n");
    count +=3;
  }
     }
   getch();
   system("cls");
   welcomepage();
   printf("\n\nPRESS 0 TO GO BACK TO MENU CARD\nPRESS 1 TO CONTINUE ");
   scanf("%d",&answ);
   switch(answ)
     {
       case 0:restaurant();
       break;

       case 1 :system("cls");
        do
   {
     printf("ENTER THE FOOD CODE YOU WANT TO HAVE :: ");
     scanf("%d",&fc[z]);
     z++;
     puts("DO YOU WANT MORE(Y/N) ::");
     fflush(stdin);
     scanf("%c",&ans);
   }while ((ans=='y')||(ans=='Y'));
        printf("\nEnter your room number:");
        scanf("%d",&room);

        fflush(stdin);


        getch();
        system("cls");
        welcomepage();
        for(i=0;i<z;i++)
   {
     printf("\n%s",food[fc[i]-1]);
     printf("\t\t\t%d\n",price[fc[i]-1]);
     tot[room-1] +=price[fc[i]-1];
   }
        printf("TOTAL\t\t\t\t%d",tot[room-1]);
        break;

       default:printf("\nWrong choice entered!!!");
        getch();
        restaurant();
     }
 }
void main()
 {

   int ch;
char ans;
  login();
   welcomepage();
   intro();

do{
       welcomepage();
       printf("\n\n\n                      Choose a category:\n");
       printf("                        1. check availability\n");
       printf("                        2. Features of room\n");
       printf("                        3. Book a room  \n");
       printf("                        4. show a customer detail\n");
       printf("                        5. food services\n");
       printf("                        6. Check out \n");
       printf("                        7. bill\n");
       printf("                        8. Exit\n");
       scanf("%d",&ch);
       switch(ch)
   {
     case 1:list();

     break;
     case 2:features();
     break;
     case 3:add();
     break;
     case 4:search();
     break;
     case 5:restaurant();
     break;
     case 6:checkout();
     break;
     case 7:bill();


     case 8:break;
     default:printf("\n\n\nWrong choice!!!!\n\nPlease choose 1-6");
     }

      printf("\n\nDo you want to continue:(press y or Y to continue)");
 fflush(stdin);
 scanf("%c",&ans);
     }while(ans=='y'||ans=='Y');


 }
