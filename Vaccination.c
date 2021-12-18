#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
void instruction();
void contact();
void booking();
void Account();
void certificate();
void load();
void menu();
void myexit();
void Vaccine();
void Statistics();
void password();

struct user;
struct user{
	char id[50], gender[10], dob[10], adhar[20], name[100],password[100], pass[100],Vname[20], Email[50], Date[10];
	char mobile[20], m1[20],m2[20];
	int pincode, age,d;
}e; 

int    x, y, choice ,i;
char fname[20];

int main()
{
    system("cls");
	//default console foreground and background colors.
    system("COLOR B0");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                  SVASTHYA                 =");
    printf("\n\t\t\t        =                 vaccination               =");
    printf("\n\t\t\t        =                   booking                 =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n");
    printf("\t\t\t\t\t\tLoading..........\n");
    for (x = 1; x <= 20; x++)
    {
        for (y = 0; y <= 100000000; y++);
			printf("%c", 177);
    }
    printf("\n"); 
    menu();
    return 0;
}
void menu()
{
	// Menu .
    printf("\n      Menu.....\n\n");
    printf("  \n 1]Instruction For Covid and Vaccination\n\n 2]Create Account\n\n 3]Booking Slot\n\n "
	"4]Certificate\n\n 5]contact of Hospital\n\n 6]Vaccination Statistics\n\n 7]Forgot Password\n\n 8]Logout");
    int choice;
    printf(" \n\n Enter Choice :");
    scanf("%d", &choice);
    system("cls");
    //Switch Case For Menu
    switch (choice)
    {
    case 1:
        instruction();
        break;
    case 2:
        Account();
        break;

    case 3:
        booking();
        break;

    case 4:
        certificate();
        break;

    case 5:
        contact();
        break;

    case 6:
        Statistics();
        break;
        
    case 7:
        password();
        break;

    case 8:
        myexit();
        break;

    default:
        printf("Invalid Option!!!\n");
        printf("Press Any Key to Continue , Press 0 to Logout ");
        char temp = getch();
        if (temp != '0')
        {
            menu();
        }
        else
        {
            myexit();
        }
    }
}
void instruction()
{
    //File Handling To Read Data From File
    FILE *fptr;
    char c;
    // Open file
    fptr = fopen("wceH.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fptr);
    }

    fclose(fptr);
    
    printf("\nPress Any Key To Return To Main Menu , Press 0 To Logout ");
    char temp = getch();
    system("cls");
    if (temp == '0')
    {
        myexit();
    }
    else
    {
        menu();
    }
    
}
void Account()
{
	//Create Account And Save Data Using File Handling
    printf("                         \n\nWelcome Vaccination Approved By Governement Of INDIA");
    printf("\n\nPhoto Id Proof(Aadhar,Pancard) :");
    scanf("%s", &e.id);
    printf("\n%s Card Number : ", e.id);
    scanf("%s", &e.adhar);
    printf("\nName on Aadhaar Number :");
    scanf("%s",&e.name);
    printf("\nAge : ");
    scanf("%d", &e.age);
    printf("\nGender(Male/Female/Other) : ");
    scanf("%s", &e.gender);
    printf("\nDate Of Birth :");
    scanf("%s", &e.dob);
    printf("\nEnter Email :");
    scanf("%s", &e.Email);
    printf("\nEnter Phone Number :");
    scanf("%s", &e.mobile);
    if(strlen(e.mobile)==10){
	
    printf("\nCreate password : ");
    scanf("%s", &e.password);
    srand(time(0));
    double p=abs(rand()*10000 + 1);
    FILE *ptr = NULL;
    while(e.name[i]!='\0')
    {
        fname[i]=e.name[i];
        i++;
    }
    fname[i]='.';
    fname[i+1]='t';
    fname[i+2]='x';
    fname[i+3]='t';
    fname[i+4]='\0';
    ptr = fopen(fname, "a");
    time_t t;
   
    time(&t);
    fprintf(ptr, "%s", "Vaccination Certificate\n\n");
    fflush(stdout);
     fprintf(ptr, "\n\t\t\t%s", "                 Ministry Of Health 7 Family Walfare");
    fflush(stdout);
     fprintf(ptr, "\n\t\t\t%s", "                       Government Of India");
    fflush(stdout);
     fprintf(ptr, "\n\t\t%s", "             Provisional Certificate For Covid-19 Vaccine\n\n");
    fflush(stdout);
    fprintf(ptr, "\nBeneficiary Name                        :          %s",e.name);
    fflush(stdout);
    fprintf(ptr, "\nAge                                     :          %d",e.age);
    fflush(stdout);
    fprintf(ptr, "\nGender                                  :          %s",e.gender);
    fflush(stdout);
    fprintf(ptr, "\nid                                      :          %s",e.id);
    fflush(stdout);
    fprintf(ptr, "\n%s Number                                :         %s",e.id,e.adhar);
    fflush(stdout);
    fprintf(ptr, "\nRefernce Number                         :          %.0lf",p);
    fflush(stdout);
    fprintf(ptr, "\nData Stored On : %s\n\n", ctime(&t));
    fflush(stdout);
    fclose(ptr);
}
   else{
   	printf("Enter Correct Mobile Number");
   }
    printf("\nPress Any Key To Return To Main Menu , Press 0 To Logout ");
    char temp = getch();
    system("cls");
    if (temp == '0')
    {
        myexit();
    }
    else
    {
        menu();
    }
}
void booking(){
    printf("\n\nWelcome Vaccination Booking.... ");
    printf("\n\nEnter Mobile Number : ");
    scanf("%s", &e.m1);
        if (strcmp(e.mobile,e.m1)==0)
    {
        printf("\nPassword :");
        scanf("%s", &e.pass);
        if (strcmp(e.password,e.pass)==0)
        {
        	printf("\n");
            load();
            printf("\n\nHii %s........,",e.name);
            printf("\n\n%s", __DATE__);
            printf("\n\n%s", __TIME__);
            if (e.age >= 18)
            {
                Vaccine();
                printf("\n\nPress Any Key To Return To Main Menu , Press 0 To Logout ");
                char temp = getch();
                system("cls");
                if (temp == '0')
                {
                    myexit();
                }
                else
                {
                    menu();
                }
            }
            else
            {
                printf("\n\nYour are underage and not allowd for vaccination\n ");
                printf("\n\nFor under 18 catigaory vccination will start soon");
                printf("\n\nMinistry Of Health & Family Welfare");
                printf("\n\nGovernment Of INDIA..");
                printf("\n\nPress Any Key To Return To Main Menu , Press 0 To Logout ");
                char temp = getch();
                system("cls");
                if (temp == '0')
                {
                    myexit();
                }
                else
                {
                    menu();
                }
            }
        }
        else
        {
            printf("Wrong Password");
            printf("\n\nPress Any Key To Return To Main Menu , Press 0 To Logout ");
            char temp = getch();
            system("cls");
            if (temp == '0')
            {
                myexit();
            }
            else
            {
                menu();
            }
        }
    }
    else
    {
        printf("\nUnragister Number.\n\nPlease Create Account for Vaccination");
        printf("\n\nPress Any Key To Return Create Account, press 0 To Logout");
        char temp = getch();
        system("cls");
        if (temp == '0')
        {
            myexit();
        }
        else
        {
            Account();
        }
    }
}

void certificate()
{

    
    
    FILE *ptr1 = NULL;
    char c;
    printf("Enter Your Name To Download/View Cirtificate : ");
    scanf("%s",&e.name);
    while(e.name[i]!='\0')
    {
        fname[i]=e.name[i];
        i++;
    }
    fname[i]='.';
    fname[i+1]='t';
    fname[i+2]='x';
    fname[i+3]='t';
    fname[i+4]='\0';
    // Open file
    ptr1 = fopen(fname, "r");
    if (ptr1 == NULL)
    {
        printf("Cannot open file \n");
    }

    
    c = fgetc(ptr1);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr1);
    }

    fclose(ptr1);
    printf("\n\nPress Any Key To Return To Main Menu , Press 0 To Logout ");
    char temp = getch();
    system("cls");
    if (temp == '0')
    {
        myexit();
    }
    else
    {
        menu();
    }
}
void contact()
{
	
    
    printf(".........WALCHAND MULTISPECIALITY HOSPITAL..............");
    printf("\n\nHospital Name    : Walchand Multispeciatly Hospital ");
    printf("\n\nHospital Address : #691/1,A/P: Vishrambag,Sangli - 416415");
    printf("\n\nHospital Email   : Email:walchandhospital@gmail.com");
    printf("\n\nPhone Number(s)  : 0230 -2437517/9422414461");
    printf("\n\nPress Any Key To Return To Main Menu , Press 0 To Logout ");
    char temp = getch();
    system("cls");
    if (temp == '0')
    {
        myexit();
    }
    else
    {
        menu();
    }
}

void load()
{
    //Graphics Pattern
    printf("Loading......\n");
    for (x = 1; x <= 20; x++)
    {
        for (y = 0; y <= 100000000; y++);
             //To Print The Character Slowly
        printf("%c", 177);
    }
    printf("\n");
    printf("Loading Completed SuccessFully");
}
void myexit()
{
	//To Exit From Program
    printf("\n\nAre You Sure You Want To Exit Press Any Key To Exit , Press 0 For Main Menu "); 
    char temp = getch();
    if (temp == '0')
    {
        menu();
    }
    else
    {
        printf("\n\n\n\nThanks For Using The Program !!\n\n");
        printf(".................................................................\n");
        printf("...                                                                 By,  \n");
        printf("..                                                          Anurag Ashish Magdum\n");
        printf(".                                                    Walchand College Of Engineering Sangli.");
    }
}
void Vaccine()
{  
    //Booking Of Vaccine
    FILE *ptr = NULL;
    ptr = fopen(fname, "a");
    printf("Avilable Vaccine\n\n");
    printf("1]COVISHIELD   -   Rs780\n2]COVAXIN   -   Rs780\n3]SUPTNIK   -   Rs1200");
    printf("\n\nDose Number (1/2) : ");
    scanf("%d", &e.d);
    printf("\nEnter Name Of Vaccine : ");
    scanf("%s", &e.Vname);
    printf("\nEnter Date Of Vaccinaton (after %s) : ", __DATE__);
    scanf("%s", &e.Date);
    char vb[20] = {"Mr_Magdum"}, place[20] = {"Sangli"};
    printf("\nYou get vaccine by Mr magdum on %s",e.Date);
    printf("\n\nFollowing Instruction for Vaccination");
    fprintf(ptr, "Vccination Details\nnumber of Dose                          :          %d",e.d);
    fflush(stdout);
    fprintf(ptr, "\nVaccine Name                            :          %s",e.Vname);
    fflush(stdout);
    fprintf(ptr, "\nDate Of Dose                            :          %s",e.Date);
    fflush(stdout);
    fprintf(ptr, "\nVaccinated By                           :          %s", vb);
    fflush(stdout);
    fprintf(ptr, "\nPlace                                   :          %s", place);
    fflush(stdout);
    fclose(ptr);
}
void Statistics()
{
     //Information
    FILE *fptr;
    char c;
    // Open file
    fptr = fopen("statistics.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
 // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fptr);
    }
 fclose(fptr);
    printf("\nPress Any Key To Return To Main Menu , Press 0 for Logout ");
    char temp = getch();
    system("cls");
    if (temp == '0')
    {
        myexit();
    }
    else
    {
        menu();
    }
}
void password(){
	printf("\n\nYo Know Password Enter Mobile Number : ");
    scanf("%s", &e.m2);
    
    if (strcmp(e.mobile,e.m2)==0){
    	printf("Your PassWord is : %s",e.password);
	}
	  printf("\nPress Any Key To Return To Main Menu , Press 0 To Logout ");
    char temp = getch();
    system("cls");
    if (temp == '0')
    {
        myexit();
    }
    else
    {
        menu();
    }
    
	
}
