/*Group Members
Name:Mahadi Hasan Rifat
ID:2012858642
Name:Md.Safayat Jabber
ID:2012551642
Name:Zubair Mahmood Sowrab
ID:2011657642*/

/*Project Name:Taxi Booking System*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int i,j;
int main_exit;
FILE *van;
FILE *truck;
FILE *train;
void introduction();
void intro();
void book();
void book2();
void book3();
void login();
void newacc();
void check();
void specs();


/*Creating a Structure to Declare Customer Details*/
struct taxiService
{
        int customer_id;
        char username[100];
        char pickuppoint[110];
        int day,month,year;
        char droppoint[100];
        char pickuptime[100];
        int mobileno;
        float km,mile;
        char ttype[100];
        char password[100];
        char firstname[100];
        char lastname[100];
        char citizenship[100];
        int age;
}k,m,mod,old;



/*Function to Select A Taxi Option*/
    void intro()
    {
char f[100];
     system("cls");
        int r,h,o;
        printf("\n\t\t                              \n");
        printf("\n1)XL\n2)VIP\n3)REGULAR\n");
        printf("\nENTER THE TAXI OPTION WHICH YOU WANT TO BOOK:");
        scanf("%d",&r);
                    switch(r)
                    {
            case 1:
                train=fopen("led.txt","w");

                       char f[100]="XL";
                       strcpy(mod.ttype,f);
                       m.km=(strlen(mod.ttype))*275.0;
                    fprintf(train,"%s %f",mod.ttype,m.km);
                            printf("\n\t\tYou have Selected %s Taxi.\n",mod.ttype);
                     fclose(train);
                    printf("\n\t\tAre you sure about your selection?\n\t\tIf yes,then Enter 1 to continue.\n");
                    printf("\n\t\tPress 3 to Select again\n");
                    printf("\n\t\tPress 5 to go back To Main Menu.\n");
                    printf("\n\tEnter Option:");
                    scanf("%d",&h);
                    switch(h)
                    {
                    case 5:
                    introduction();
                    break;
                    case 3:
                    intro();
                    break;
                    case 1:
                    book();
                    break;
                    default:printf("\nEnter 7 to go back.\nEnter 0 to exit.\n");
                    scanf("%d",&o);
                    switch(o)
                    {
                    case 7:
                         train=fopen("led.txt","w");

                       char f[100]="XL";
                       strcpy(mod.ttype,f);
                        m.km=(strlen(mod.ttype))*275.0;
                    fprintf(train,"%s %f",mod.ttype,m.km);


                            printf("\n\t\tYou have Selected %s Taxi.\n",mod.ttype);
                     fclose(train);
                    printf("\n\t\tAre you sure about your selection?\n\t\tIf yes,then Enter 1 to continue.\n");
                    printf("\n\t\tPress 3 to Select again\n");
                    printf("\n\t\tPress 5 to go back To Main Menu.\n");
                    printf("\nEnter Option:");
                    scanf("%d",&h);
                    switch(h)
                    {
                    case 5:
                    introduction();
                    break;
                    case 3:
                    intro();
                    break;
                    case 1:
                    book();
                    break;
                    default:printf("\nEnter 7 to go back.\nEnter 0 to exit.\n");
                    scanf("%d",&k);
                    }
                    break;
                    case 0:exit(-1);
                    break;
                    }
                    }
          system("cls");
                    getch();
                    break;
    case 2:
        train=fopen("led.txt","w");

                       char r[100]="VIP";
                       strcpy(mod.ttype,r);
                        m.km=(strlen(mod.ttype))*100;
                    fprintf(train,"%s %f",mod.ttype,m.km);

                            printf("\n\t\tYou have Selected %s Taxi.\n",mod.ttype);
                     fclose(train);
             printf("\n\t\tAre you sure about your selection?\n\t\tIf yes,then Enter 1 to continue.\n");
                    printf("\n\t\tPress 3 to Select again\n");
                    printf("\n\t\tPress 5 to go back To Main Menu.\n");
                    printf("\nEnter Option:");
                    scanf("%d",&h);
                    switch(h)
                    {
                    case 5:
                    introduction();
                    break;
                    case 3:
                    intro();
                    break;
                    case 1:
                    book2();
                    break;
                    default:printf("\nEnter 7 to go back.\nEnter 0 to exit.\n");
                    scanf("%d",&o);
                    switch(o)
                    {
                    case 7:
                       train=fopen("led.txt","w");

                       char r[100]="VIP";
                       strcpy(mod.ttype,r);
                     m.km=(strlen(mod.ttype))*100;
                    fprintf(train,"%s %f",mod.ttype,m.km);
                            printf("\n\t\tYou have Selected %s Taxi.\n",mod.ttype);
                     fclose(train);
                    printf(" \n\t\tAre you sure about your selection?\n\t\tIf yes,then Enter 1 to continue.\n");
                    printf("\n\t\tPress 3 to Select again\n");
                    printf("\n\t\tPress 5 to go back To Main Menu.\n");
                    printf("\nEnter Option:");
                    scanf("%d",&h);
                    switch(h)
                    {
                    case 5:
                    introduction();
                    break;
                    case 3:
                    intro();
                    break;
                    case 1:
                    book2();
                    break;
                    default:printf("\nEnter 7 to go back.\nEnter 0 to exit.\n");
                    scanf("%d",&o);
                    }
                    break;
                    case 0:exit(-1);
                    break;
                    }
                    }
          system("cls");
                    getch();
                    break;
        case 3:
          train=fopen("led.txt","w");

                       char v[100]="Regular";
                       strcpy(mod.ttype,v);
                       m.km=(((strlen(mod.ttype))*100)/6.5);
                    fprintf(train,"%s %f",mod.ttype,m.km);
                            printf("\n\t\tYou have Selected %s Taxi.\n",mod.ttype);
                     fclose(train);
                    printf(" \n\t\tAre you sure about your selection?\n\t\tIf yes,then Enter 1 to continue.\n");
                    printf("\n\t\tPress 3 to Select again\n");
                    printf("\n\t\tPress 5 to go back To Main Menu.\n");
                    printf("\nEnter Option:");
                    scanf("%d",&h);
                    switch(h)
                    {
                    case 5:
                    introduction();
                    break;
                    case 3:
                    intro();
                    break;
                    case 1:
                    book3();
                    break;
                    default:printf("\nEnter 7 to go back.\nEnter 0 to exit.\n");
                    scanf("%d",&o);
                    switch(o)
                    {
                    case 7: train=fopen("led.txt","w");

                       char v[100]="Regular";
                       strcpy(mod.ttype,v);
                        m.km=(((strlen(mod.ttype))*100)/6.5);
                    fprintf(train,"%s %f",mod.ttype,m.km);
                    fprintf(train,"%s",mod.ttype);
                            printf("\n\t\tYou have Selected %s Taxi.\n",mod.ttype);
                     fclose(train);
                    printf(" \n\t\tAre you sure about your selection?\n\t\tIf yes,then Enter 1 to continue.\n");
                    printf("\n\t\tPress 3 to Select again\n");
                    printf("\n\t\tAre you sure about your selection?\n\t\tIf yes,then Enter 1 to continue.\n");
                    printf("\n\t\tPress 3 to Select again\n");
                    printf("\n\t\tPress 5 to go back To Main Menu.\n");
                    printf("\nEnter Option:");
                    scanf("%d",&h);
                    switch(h)
                    {
                    case 5:
                    introduction();
                    break;
                    case 3:
                    intro();
                    break;
                    case 1:
                    book3();
                    break;
                    default:printf("\nEnter 7 to go back.\nEnter 0 to exit.\n");
                    scanf("%d",&o);
                    }
                    break;
                    case 0:exit(-1);
                    break;
                    }
                    }
default:printf("\n\t\tInvalid Option.\nPress 2 to try again");
int b;
printf("\n\t\tEnter option:");
scanf("%d",&b);
switch(b)
case 2:intro();
          system("cls");
                    getch();
                    break;
    }

    }




/*Function to print specifications of each Taxi Type*/
 void specs()
 {
    printf("\n\n The Specifications of the Taxis are as Follows");
    printf("\n -------------------------------------------------------------------------");
    printf("\n\n >> There are 3 options from which you may choose");
    printf("\n\n >> XL");
    printf("\n    This option allows upto 6 at a time.");
    printf("\n    The vehicles alloted for this are SUVs and Minivans.   ");
       printf("\n    *SPACE AND LUXURY IN ONE*");
    printf("\n\n >> VIP ");
    printf("\n    This option allows upto 4 people at a time");
    printf("\n    Air conditioned premium sedans and hatchbacks are alloted.");
       printf("\n    *PREMIUM*");
    printf("\n\n >> REGULAR");
    printf("\n    This Option also Allows 4 People at a Time.\n    Normal sedans and hatchbacks are alloted.(May or may not be air conditioned.)");
      printf("\n    *CHEAP AND AFFORDABLE*");

     printf("\t\t\t\n\n\n Press T to Go Back To Main Menu. \n");
     printf("\t\t\t\n\n\n Press 0 to exit.\n");
    if(toupper(getch())=='T')
        {
        introduction();
    }
    if(getch()==0)
    {
    exit(-1);
    }
    }



/*Function to enter and print details if XL Taxi is Selected*/
     void book()
     {
            system("cls");
            van=fopen("blue.txt","r");
            truck=fopen("plane.txt","w");
            train=fopen("led.txt","r");
            time_t t;
            time(&t);
            printf("\n\n\t\tThankyou %s for choosing TAXI+!!!\n\n\t\tYou may Proceed with your Booking.\n\n",m.firstname);
            char option;
            int count=0;
            int i,s,f;
            printf("\nEnter Pickup Point\n");
            scanf("%s",k.pickuppoint);
            printf("\nEnter Drop Point\n");
            scanf("%s",k.droppoint);
            k.mile=abs(strlen(k.pickuppoint)-strlen(k.droppoint));
            if(k.mile>3.0)
                {
                     m.km=(fabs((100+(((abs((strlen(k.pickuppoint)-strlen(k.droppoint)))*15)-5)*8.5))-1200));
                }
            else
                {
                    m.km=(fabs(100+(((abs((strlen(k.pickuppoint)-strlen(k.droppoint)))*15)-5)*8.5)));
                }
            printf("\nEnter Pickup Time\n");
            scanf("%s",k.pickuptime);
            system("cls");
            printf("\n\t\tYour Ride has been booked.\n");
            printf("\n\t\tYour Details are as Follows:\n\n");
             printf("\n\t\tFirst Name:%s",m.firstname);
            printf("\n\t\tLast Name:%s\n\t\tTaxi Type:%s\n\t\tTaxi Fare:BDT %f",m.lastname,mod.ttype,m.km);
            printf("\n\t\tPickup Point:%s\n\t\tDrop Point:%s\n\t\tPickup Time:%s",k.pickuppoint,k.droppoint,k.pickuptime);
            printf("\n\t\tMobile Number:%d\n",m.mobileno);
           fprintf(truck," %s %s %s %f ",k.pickuppoint,k.droppoint,k.pickuptime,m.km);
         fclose(truck);
          fclose(van);
            int h;
            printf("\n\t\tEnter 1 to go back to Main Menu.\n\n");
            printf("\n\t\tEnter 2 to check the Details of Your Booking.\n\n");
            printf("\n\t\tEnter 0 key to Exit.\n\n");
            printf("\n\t\tEnter option:");
            scanf("%d",&h);
    switch(h)
    {
           case 1:main();
           break;
           case 2:check();
           break;
           case 0:exit(-1);
           default:printf("\n\t\tINVALID!!!\n\t\tPress 1 to try again.\n");
           int v;
           scanf("%d",&v);
           switch(v)
           {
               case 1:
            printf("\n\t\tEnter 1 to go back to Main Menu.\n\n");
            printf("\n\t\tEnter 2 to check the Details of Your Booking.\n\n");
            printf("\n\t\tEnter any key to Exit.\n\n");
            printf("\n\t\tEnter option:");
            int e;
            scanf("%d",&e);
    switch(e)
    {
           case 1:main();
           break;
           case 2:check();
           break;
           }
           break;
    }
   }
     }



/*Function to enter and print details if VIP Taxi is Selected*/
 void book2()
     {
            system("cls");
            van=fopen("blue.txt","r");
            truck=fopen("plane.txt","w");
            train=fopen("led.txt","r");
            printf("\n\n\t\tThankyou %s for choosing TAXI+!!!\n\n\t\tYou may Proceed with your Booking.\n\n",m.firstname);
            char option;
            int count=0;
            int i,s,f;
            printf("\nEnter Pickup Point\n");
            scanf("%s",k.pickuppoint);
            printf("\nEnter Drop Point\n");
            scanf("%s",k.droppoint);
            printf("\nEnter Pickup Time\n");
            scanf("%s",k.pickuptime);
            k.mile=(abs(strlen(k.pickuppoint)-strlen(k.droppoint)));
           if(k.mile>3.0)
                {
                     m.km=(fabs((-600+(((abs((strlen(k.pickuppoint)-strlen(k.droppoint)))*15)-5)*9.5)))+100);
                }
                    else
                        {
                             m.km=(fabs(100+(((abs((strlen(k.pickuppoint)-strlen(k.droppoint)))*15)-5)*9.5)));
                    }
            system("cls");
            printf("\n\t\tYour Ride has been booked.\n");
            printf("\n\t\tYour Details are as Follows:\n\n");
             printf("\n\t\tFirst Name:%s",m.firstname);
            printf("\n\t\tLast Name:%s\n\t\tTaxi Type:%s\n\t\tTaxi Fare:BDT %f",m.lastname,mod.ttype,m.km);
            printf("\n\t\tPickup Point:%s\n\t\tDrop Point:%s\n\t\tPickup Time:%s",k.pickuppoint,k.droppoint,k.pickuptime);
            printf("\n\t\tMobile Number:%d\n",m.mobileno);
           fprintf(truck," %s %s %s %f ",k.pickuppoint,k.droppoint,k.pickuptime,m.km);
         fclose(truck);
          fclose(van);
            int h;
            printf("\n\t\tEnter 1 to go back to Main Menu.\n\n");
            printf("\n\t\tEnter 2 to check the Details of Your Booking.\n\n");
            printf("\n\t\tEnter 0 key to Exit.\n\n");
            printf("\n\t\tEnter option:");
            scanf("%d",&h);
    switch(h)
    {
           case 1:main();
           break;
           case 2:check();
           break;
           case 0:exit(-1);
           default:printf("\n\t\tINVALID!!!\n\t\tPress 1 to try again.\n");
           int v;
           scanf("%d",&v);
           switch(v)
           {
               case 1:
            printf("\n\t\tEnter 1 to go back to Main Menu.\n\n");
            printf("\n\t\tEnter 2 to check the Details of Your Booking.\n\n");
            printf("\n\t\tEnter any key to Exit.\n\n");
            printf("\n\t\tEnter option:");
            int e;
            scanf("%d",&e);
    switch(e)
    {
           case 1:main();
           break;
           case 2:check();
           break;
           }
           break;
    }
   }
     }



/*Function to enter and print details if Regular Taxi is Selected*/
      void book3()
     {
            system("cls");
            van=fopen("blue.txt","r");
            truck=fopen("plane.txt","w");
            train=fopen("led.txt","r");
            printf("\n\n\t\tThankyou %s for choosing TAXI+!!!\n\n\t\tYou may Proceed with your Booking.\n\n",m.firstname);
            char option;
            int count=0;
            int i,s,f;
            printf("\nEnter Pickup Point\n");
            scanf("%s",k.pickuppoint);
            printf("\nEnter Drop Point\n");
            scanf("%s",k.droppoint);
            printf("\nEnter Pickup Time\n");
            scanf("%s",k.pickuptime);
                    k.mile=abs(strlen(k.pickuppoint)-strlen(k.droppoint));
            if(k.mile>3.0)
                {
                     m.km=(fabs((-775+(((abs((strlen(k.pickuppoint)-strlen(k.droppoint)))*15)-5)*11))+100));
                }
                    else
                        {
                             m.km=(fabs(100+(((abs((strlen(k.pickuppoint)-strlen(k.droppoint)))*15)-5)*11)));
                    }
            system("cls");
            printf("\n\t\tYour Ride has been booked.\n");
            printf("\n\t\tYour Details are as Follows:\n\n");
             printf("\n\t\tFirst Name:%s",m.firstname);
            printf("\n\t\tLast Name:%s\n\t\tTaxi Type:%s\n\t\tTaxi Fare:BDT %.2f",m.lastname,mod.ttype,m.km);
            printf("\n\t\tPickup Point:%s\n\t\tDrop Point:%s\n\t\tPickup Time:%s",k.pickuppoint,k.droppoint,k.pickuptime);
            printf("\n\t\tMobile Number:%d\n",m.mobileno);
           fprintf(truck," %s %s %s %f ",k.pickuppoint,k.droppoint,k.pickuptime,m.km);
         fclose(truck);
          fclose(van);
            int h;
            printf("\n\t\tEnter 1 to go back to Main Menu.\n\n");
            printf("\n\t\tEnter 2 to check the Details of Your Booking.\n\n");
            printf("\n\t\tEnter 0 key to Exit.\n\n");
            printf("\n\t\tEnter option:");
            scanf("%d",&h);
    switch(h)
    {
           case 1:main();
           break;
           case 2:check();
           break;
           case 0:exit(-1);
           default:printf("\n\t\tINVALID!!!\n\t\tPress 1 to try again.\n");
           int v;
           scanf("%d",&v);
           switch(v)
           {
               case 1:
            printf("\n\t\tEnter 1 to go back to Main Menu.\n\n");
            printf("\n\t\tEnter 2 to check the Details of Your Booking.\n\n");
            printf("\n\t\tEnter any key to Exit.\n\n");
            printf("\n\t\tEnter option:");
            int e;
            scanf("%d",&e);
    switch(e)
    {
           case 1:main();
           break;
           case 2:check();
           break;
           }
           break;
    }
   }
     }

/*Function to Check Booking Details*/
     void check()
     {
         system("cls");
         FILE *trial;
         van=fopen("blue.txt","r");
truck=fopen("can.txt","r");
    char username[100],password[100];
    int u;
    printf("\n\t\tEnter Username:");
    scanf("%s",username);
    printf("\n\t\tEnter Password:");
    scanf("%s",password);
 while(fscanf(van,"%s %s %s %s %d %s %d",m.username,m.password,m.firstname,m.lastname,&m.age,m.citizenship,&m.mobileno )!=EOF){

 //while((fscanf(van,"%s %s %s %s %d %s %d",m.username,m.password,m.firstname,m.lastname,&m.age,m.citizenship,&m.mobileno ))!=EOF){
fscanf(van,"%s %s %s %s %d %s %d",m.username,m.password,m.firstname,m.lastname,&m.age,m.citizenship,&m.mobileno );
    if (strcmp(password,m.password)==0 && strcmp(username,m.username)==0)
        {
            printf("\n\n\tPassword and Username Match\n\n\tRide Details:\n");
            fclose(van);
             train=fopen("led.txt","r");
                    fscanf(train,"%s",mod.ttype);
               trial=fopen("plane.txt","r");
             fscanf(van,"\nName:%s %s\n\tMobile Number:%d\n",m.firstname,m.lastname,&m.mobileno);
fscanf(trial,"%s %s %s %f ",k.pickuppoint,k.droppoint,k.pickuptime,&m.km);
printf("\n\tName:%s %s\n\tPickup Point:%s\n\tDrop Point:%s\n\tPickup Time:%s\n\tMobile Number:%d\n",m.firstname,m.lastname,k.pickuppoint,k.droppoint,k.pickuptime,m.mobileno);
printf("\tTaxi Type:%s\n\tTaxi Fare:BDT %.2f\n",mod.ttype,m.km);
 fclose(trial);
   fclose(train);
 printf("\n\t\t(If no details are shown,its because no ride has been booked yet.)\n");
    printf("\n\t\tEnter 1 to go to Main Menu\n");
    printf("\n\t\tEnter 0 to Exit.\n");
    printf("\n\t\tEnter Appropriate Option:");
      int j;
    scanf("%d",&j);
    switch(j)
    {
        case 1:introduction();
        break;
        case 0:exit(-1);
        break;
        default:printf("\nInvalid Option.\n\n");
        break;
    }
   }
   else
    {
    printf("\n\t\tUsername and Password don't match\n\t\tEnter 1 to try again.\n\t\tEnter Option:");
    int y;
    scanf("%d",&y);
    switch(y)
    {
        case 1:  van=fopen("blue.txt","r");
truck=fopen("can.txt","r");
    char username[100],password[100];
    int u;
    printf("\n\t\tEnter Username:");
    scanf("%s",username);
    printf("\n\t\tEnter Password:");
    scanf("%s",password);
 while(fscanf(van,"%s %s %s %s %d %s %d",m.username,m.password,m.firstname,m.lastname,&m.age,m.citizenship,&m.mobileno )!=EOF){
    if (strcmp(password,m.password)==0 && strcmp(username,m.username)==0)
        {
 printf("\n\nPassword and Username Match");
            fclose(van);
               trial=fopen("plane.txt","r");
             fscanf(van,"\nName:%s %s\n\tMobile Number:%d\n",m.firstname,m.lastname,&m.mobileno);
fscanf(trial,"%s %s %s",k.pickuppoint,k.droppoint,k.pickuptime);
printf("\n\tName:%s %s\n\tPickup Point:%s\n\tDrop Point:%s\n\tPickup Time:%s\n\tMobile Number:%d\n",m.firstname,m.lastname,k.pickuppoint,k.droppoint,k.pickuptime,m.mobileno);
 fclose(trial);
 printf("\n\t\t(If no details are shown,its because no ride has been booked yet.)\n");
    printf("\n\t\tEnter 1 to go to Main Menu\n");
    printf("\n\t\tEnter 0 to Exit.\n");
    printf("\n\t\tEnter Appropriate Option:");
      int j;
    scanf("%d",&j);
    switch(j)
    {
        case 1:introduction();
        break;
        case 0:exit(-1);
        break;
        default:printf("\nInvalid Option.\n\n");
        break;
    }
   }
    }
    }
}
   fclose(van);
     }
 }


/*Function to Create a New Account*/

void newacc()
{
  int choice;
    van=fopen("blue.txt","w");
   truck=fopen("can.txt","w");
    system("cls");
    printf("\n\t\t\tCREATE NEW ACCOUNT\n\n");
        printf("\nEnter First Name:");
    scanf("%s",m.firstname);
    printf("\nEnter Last Name:");
    scanf("%s",m.lastname);
    printf("\nEnter Your Age:");
    scanf("%d",&m.age);
    printf("\nEnter NID/Passport Number:");
    scanf("%s",m.citizenship);
    printf("\nEnter Your Mobile Number: ");
    scanf("%d",&m.mobileno);
     printf("\nEnter Username:");
    scanf("%s",m.username);
    printf("\nEnter Password:");
    scanf("%s",m.password);



 //while((fscanf(van,"%s %s %s %s %d %s %d",m.username,m.password,m.firstname,m.lastname,&m.age,m.citizenship,&m.mobileno ))!=EOF){
fscanf(van,"%s %s %s %s %d %s %d",m.username,m.password,m.firstname,m.lastname,&m.age,m.citizenship,&m.mobileno );
     fprintf(van,"%s %s %s %s %d %s %d\n",m.username,m.password,m.firstname,m.lastname,m.age,m.citizenship,m.mobileno);
fprintf(truck,"%s %s %s %s %d %s %d\n",m.username,m.password,m.firstname,m.lastname,m.age,m.citizenship,m.mobileno);
 //}
    fclose(van);
    fclose(truck);
    printf("\nAccount created successfully!");
    printf("\n\n\n\t\tEnter 1 to go to the Main Menu.\n\t\tEnter 0 to exit.\n\t\tEnter 3 to continue to Login.\n");
    printf("\n\t\tEnter your choice:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        introduction();
    else if(main_exit==0)
            exit(-1);
             else if(main_exit==3)
            login();
            else{
                int x;
                printf("\n\t\tINVALID!!\n\t\tPress 1 to try again.\n\t\tEnter Option:");
                scanf("%d",&x);
                switch(x)
                {
        case 1:
             printf("\n\n\n\t\tEnter 1 to go to the Main Menu.\n\t\tEnter 0 to exit.\n\t\tEnter 3 to continue to Login.\n");
    printf("\n\t\tEnter your choice:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        introduction();
    else if(main_exit==0)
            exit(-1);
             else if(main_exit==3)
            login();
            break;
                }
            }
}





/*Function to create a Login Page*/
void login()
{
van=fopen("blue.txt","r");
truck=fopen("can.txt","r");
    char username[100],password[100];
    int u;
    printf("\n\t\t\t\tLOGIN PAGE\n\n");
    printf("\n\t\tEnter Username:");
    scanf("%s",username);
    printf("\n\t\tEnter Password:");
    scanf("%s",password);
 while((fscanf(van,"%s %s %s %s %d %s %d",m.username,m.password,m.firstname,m.lastname,&m.age,m.citizenship,&m.mobileno ))!=EOF){
fscanf(van,"%s %s %s %s %d %s %d",m.username,m.password,m.firstname,m.lastname,&m.age,m.citizenship,&m.mobileno );
    if (strcmp(password,m.password)==0 && strcmp(username,m.username)==0)
        {
            printf("\n\nPassword and Username Match");
            fclose(van);
            printf("\nEnter 1 to Continue Booking.\nEnter 2 to go to Main Menu.\nEnter 3 to check booking details.\nEnter 0 to Exit.\n");
            int r;
            scanf("%d",&r);
            switch(r)
            {
                case 1:intro();
                break;
                case 2:introduction();
                break;
                case 3:check();
                break;
                case 0:exit(-1);
                break;
                default:printf("\n\t\tINVALID!!!\n\t\tEnter 5 to try again.\nEnter Option:");
                int w;
                scanf("%d",&w);
                switch(w)
                {
                    case 5: printf("\nEnter 1 to Continue Booking.\nEnter 2 to go to Main Menu.\nEnter 0 to Exit.\n");
            int r;
            scanf("%d",&r);
            switch(r)
            {
                case 1:intro();
                break;
                case 2:introduction();
                break;
                case 0:exit(-1);
                break;
            }
                }
            }
        }
    else
        {   printf("\n\nWrong Password or Username!!\n\nIf you haven't created an Account,then Create one First.\n\a\a\a");
            login_try:
            printf("\nEnter 1 to try again and Enter 0 to exit.\n");
            printf("\nEnter 3 to Go Back to Main Menu\n");
            printf("\nEnter 5 to Create New Account.\n");
            printf("\nEnter Option:");
            scanf("%d",&u);
            if (u==1)
                    {
                        login();

                    }
            else if (u==0)
                    {
                    exit(-1);
                    }
                    else if (u==3)
                    {
                    introduction();
                    }
                    else if (u==5)
                    {
                    newacc();
                    }
        }
 }
                    fclose(van);
                   fclose(truck);
}



/*Function to Create Menu Page*/

     void introduction()
     {
         system("color 6");
         int a;
         int b;
         printf("\n\n\t\t\t\t\t\tMAIN MENU\n\n");
         printf("\n\t\t1.Create New Account.\n");
         printf("\n\t\t2.Login!!\n");
         printf("\n\t\t3.Specifications of Available Ride Options.\n");
         printf("\n\t\t4.Book Ride!!!(Recommended to check Specifications before Booking)\n");
         printf("\n\t\t5.Check Details of your Ride.\n");
         printf("\n\n\tEnter Appropriate Option:");
         scanf("%d",&a);
         switch(a)
         {
        case 2:login();
        break;
        case 3:specs();
        break;
        case 4:login();
        break;
        case 5:check();
        break;
        case 1:newacc();
        break;
        default:printf("\n\t\tInvalid Option\n");
        printf("\n\t\tEnter 1 to select again.\n\t\tEnter 0 to exit.\n");
        printf("\n\t\tEnter Option:");
        scanf("%d",&b);
      switch(b)
      {
          case 1:introduction();
          break;
          case 0:exit(-1);
          break;
      }
     }
     }


/*Main Function*/
int main()
{
    char choice;
system("color 3");
    printf("\n\t\t\t\t\t***************************\n");
    printf("\n\t\t\t\t\t****TAXI BOOKING SYSTEM****\n");

    printf("\n\t\t\t\t\t***************************\n\n\n");
    printf("\n\t\t\t\t\t      WELCOME ");
    printf("TO");
    printf(" TAXI+\n");
    printf("\t\t\t\t\t   ********************\n");
    printf("\t\t\t                                \n");
    printf("\t\t\t       >>>>>--- PLEASE ENTER ANY KEY TO CONTINUE---<<<\n");
    if(getch())
    {
        introduction();
    }
    return 0;
}
