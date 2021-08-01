#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<dir.h>
#include<dirent.h>
#include<string.h>
#include<sys/stat.h>
#include<errno.h>

union REGS i,o;
void showmouseptr1(void);
void restrictmouseptr1(void);
void restrictanddetail(void);
void freedrawptr(void);
void buttonpress(void);
void File(void);
void Folder(void);
void total_folders(void);
void adelete(void);
void rename1(void);
void copy_folder(void);
void create(void);
void list(void);
void open_folder(void);
void myopen();
void kopy();
void rmove();
void encrypt();
void decrypt();
void move();
void list1();
void create2();
void rname();
void help(void);
void display(void);

void main()
{

	int r,choice;int b;
	int a,c,d,ch;
	char e;
	FILE *fp;
	int j,i,m,k;
	char s[50];
	char s1[50];
	clrscr();
	fp=fopen("password.txt","w");
	if(fp==NULL)
		printf("bad command or file name");
	else
		fprintf(fp,"password");
	fclose(fp);
	fp=fopen("password.txt","r");
	if(fp==NULL)
		printf("Bad command or file name");
	else
	{
		textcolor(YELLOW);
		cprintf("\nEnter the password to access the project\r\n");
		for(j=0;(m=getch())!=13;j++)
		{
			textcolor(WHITE);
			if(m!=8)
			{
				cprintf("*");
				s[j]=m;
			}
			else
			{
				j--;
				j--;
				clrscr();
				textcolor(YELLOW);
				cprintf("\nEnter the password to access the project\r\n");
				textcolor(WHITE);
				for(i=0;i<=j;i++)
				cprintf("*");
			}
		}
		cprintf("\r");
		if(j>8)
		{
			textcolor(RED+BLINK);
			cprintf("\nwrong password\r");
			printf("\n\n\t\t\tpress any to to exit ");
			getch();
			exit(0);
		}
		else
		{
			for(i=0;i<8;i++)
			{
				if(s[i]!=fgetc(fp))
				{
					textcolor(RED+BLINK);
					cprintf("\nEnter the correct password\r");
					printf("\n\n\t\t\tpress any key to exit");
					break;
				}
			}
			if(i==8)
			{

				textcolor(GREEN+BLINK);
				cprintf("\nPassword accepted\r");
				textcolor(WHITE);
				cprintf("\n\n              Press any key to continue");
				getch();
				fclose(fp);


	fclose(fp);
	Again:
	clrscr();
	textcolor(BLUE+BLINK);
	cprintf("                        ---------------------------------\r\n");
	textcolor(RED);
	cprintf("                           CODE WARRIORS WELCOMES YOU\r\n");
	textcolor(BLUE+BLINK);
	cprintf("                        ---------------------------------\r\n");
	textcolor(WHITE);
	printf("\n\n\t\t1.System Utility Services \n\n\t\t2.Hardware Interaction\n\n\t\t3.Exit");
	printf("\n\n\t\tYour Choice-> ");
	scanf("%d",&a);
	if(a==1 || a==2)
	{
	if(a==1)
	{
		Again1:

		clrscr();
	textcolor(BLUE+BLINK);
	cprintf("                        ---------------------------------\r\n");
	textcolor(RED);
	cprintf("                                  CODE WARRIORS\r\n");
	textcolor(BLUE+BLINK);
	cprintf("                        ---------------------------------\r\n");
	textcolor(WHITE);
		cprintf("\n\n                        1.Folder Services\r\n\n                        2.File Services\r\n\n                        3.Exit\r\n\n                        4.Go Back\r\n");
		cprintf("\n                        Your Choice -> \r\n                                      ");
		scanf("%d",&c);
		if(c==1)
		{
			do
	{
	clrscr();
		for(i=1;i<=50;i++)
		{
			delay(8);
			sound(900);
		}
	nosound();
	delay(30);
	clrscr();
	textcolor(BLUE+BLINK);
	cprintf("                        ---------------------------------\r\n");
	textcolor(RED);
	cprintf("                                  CODE WARRIORS\r\n");
	textcolor(BLUE+BLINK);
	cprintf("                        ---------------------------------\r\n");
	textcolor(WHITE);
	textcolor(128+12);
	cprintf("              ----------------------------------------------------\r\n");
	textcolor(11);
	cprintf("                 |HELLO USER WELCOME TO DIRECTORY/FOLDER SERVICES|\r\n");
	textcolor(128+12);
	cprintf("              ----------------------------------------------------\r\n");
	delay(30);
	textcolor(BLUE);
	cprintf("HERE ARE THE SOME OPTIONS THAT YOU CAN PERFORM ON THE FOLDER\r\n");
	delay(30);
	textcolor(YELLOW);
	cprintf("Press 1 To Delete a Folder.\r\n");
	delay(30);
	textcolor(YELLOW);
	cprintf("Press 2 To Rename a Folder.\r\n");
	delay(30);
	textcolor(YELLOW);
	cprintf("Press 3 To Create a Folder.\r\n");
	delay(30);
	textcolor(YELLOW);
	cprintf("Press 4 To Total No. of Folders.\r\n");
	delay(30);
	textcolor(YELLOW);
	cprintf("Press 5 To List the Files and Folder.\r\n");
	delay(30);
	cprintf("Press 6 TO EXIT\r\n");
	delay(30);
	textcolor(YELLOW);
	cprintf("Press 7 to Go Back\r\n");
	textcolor(11);
	cprintf("Please Enter Your Choice:-\r\n");
	scanf("%d",&b);
	if(b>=32767 || b<=0)
		 b=8;
	switch(b)
	{
		case 1 :
			adelete();
			getch();
			break;
		case 2 :
			rename1();
			getch();
			break;
		case 3 :
			create();
			getch();
			break;
		case 4 :
			total_folders();
			getch();
			break;
		case 5 :
			list();
			getch();
			break;
		case 6:
			exit(0);
		case 7:
			goto Again1;
		default :
			printf("\nenter the desired option");
			getch();

	}
	}while(b!=6);
	}
		else if(c==2)
		{
	do
	{
		clrscr();
			for(i=1;i<=50;i++)
			{
				delay(8);
				sound(900);
			}
		nosound();
		delay(30);
		clrscr();
		textcolor(BLUE+BLINK);
		cprintf("                        ---------------------------------\r\n");
		textcolor(RED);
		cprintf("                                  CODE WARRIORS\r\n");
		textcolor(BLUE+BLINK);
		cprintf("                        ---------------------------------\r\n");
		textcolor(WHITE);
		textcolor(128+12);
		cprintf("                       -------------------------------------\r\n");
		textcolor(11);
		cprintf("                       |HELLO USER WELCOME TO FILE SERVICES|\r\n");
		textcolor(128+12);
		cprintf("                       -------------------------------------\r\n");
		delay(30);
		textcolor(BLUE);
		cprintf("HERE ARE THE SOME OPTIONS THAT YOU CAN PERFORM ON THE FILE\r\n");
		delay(30);
		textcolor(YELLOW);
		cprintf("Press 1 To Delete a File.\r\n");
		delay(30);
		textcolor(YELLOW);
		cprintf("Press 2 To Rename a File.\r\n");
		delay(30);
		textcolor(YELLOW);
		cprintf("Press 3 To Move a File.\r\n");
		delay(30);
		textcolor(YELLOW);
		cprintf("Press 4 To Copy a File.\r\n");
		delay(30);
		textcolor(YELLOW);
		cprintf("Press 5 To Open a File.\r\n");
		delay(30);
		textcolor(YELLOW);
		cprintf("Press 6 To Encrypt a File.\r\n");
		delay(30);
		textcolor(YELLOW);
		cprintf("Press 7 To Decrypt a File.\r\n");
		delay(30);
		textcolor(YELLOW);
		cprintf("Press 8 To Create a file.\r\n");
		delay(30);
		textcolor(YELLOW);
		cprintf("Press 9 To List all File.\r\n");
		delay(30);
		textcolor(YELLOW);
		cprintf("Press 10 TO EXIT\r\n");
		delay(30);
		textcolor(YELLOW);
		cprintf("Press 11 To Go Back\r\n");
		textcolor(11);
		cprintf("Please Enter Your Choice:-\r\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			sound(1000);
			printf("\n\tWELCOME TO FILE DELETION OPTION:-");
			delay(30);
			nosound();
			rmove();
			getch();
			break;
		case 2:
			sound(1000);
			printf("\n\tWELCOME TO FILE RENAME OPTION:-");
			delay(30);
			nosound();
			rname();
			break;
		case 3:
			sound(1000);
			printf("\n\tWELCOME TO FILE MOVE OPTION:-");
			delay(30);
			nosound();
			move();
			break;
		case 4:
			sound(1000);
			printf("\n\tWELCOME TO FILE COPY OPTION:-");
			delay(30);
			nosound();
			kopy();
			printf("copy file succesfull");
			break;
		case 5:
			sound(1000);
			printf("\n\tWELCOME TO FILE OPEN & READ OPTION:-");
			delay(30);
			nosound();
			myopen();
			printf("open file succ");
			break;
		case 6:
			sound(1000);
			printf("\n\tWELCOME TO FILE ENCRYPT OPTION:-");
			delay(30);
			nosound();
			encrypt();
			break;
		case 7:
			sound(1000);
			printf("\n\tWELCOME TO FILE DECRYPT OPTION:-");
			delay(30);
			nosound();
			decrypt();
			break;
		case 8:
			sound(1000);
			printf("\n\tWELCOME TO CREATE A FILE OPTION:-");
			delay(30);
			nosound();
			create2();
			break;
		case 9:
			sound(1000);
			printf("\n\tWELCOME TO LIST A FILE OPTION:-");
			delay(30);
			nosound();
			list1();
			break;
		case 10:
			sound(1000);
			delay(30);
			nosound();
			exit(0);
			break;
		case 11:
			goto Again1;
		default:
			sound(1000);
			printf("PLEASE ENTER A VALID CHOICE");
			delay(30);
			nosound();
		}
		printf("\t\n DO YOU WANT TO CONTINUE (y/n) ");
		fflush(stdin);
		choice=getchar();
		}while (choice=='y' || choice=='Y');
		}
		else if(c==3)
		{
			printf("\n\n\t\tPress any key to exit");
			getch();
			exit(0);
		}
		else if(c==4)
			goto Again;
		else
			printf("\n\n\t\tPlease enter a Valid option");

	}
	else if(a==2)
	{
			clrscr();
	textcolor(BLUE+BLINK);
	cprintf("                        ---------------------------------\r\n");
	textcolor(RED);
	cprintf("                                  CODE WARRIORS\r\n");
	textcolor(BLUE+BLINK);
	cprintf("                        ---------------------------------\r\n");
	textcolor(WHITE);
		printf("\n\n\t\t1.Show Mouse Pointer on DOS SCREEN");
		printf("\n\n\t\t2.Restrict Mouse Pointer");
		printf("\n\n\t\t3.Restrict Mouse Pointer With Co-ordinates");
		printf("\n\n\t\t4.Free Style Drawing Using Mouse");
		printf("\n\n\t\t5.Button Press Using Mouse Pointer\n\n\t\t6.Exit");
		printf("\n\n\t\t7.Go Back");
		printf("\n\n\t\tYour Choice -> ");
		scanf("%d",&d);
		if(d==1)
			showmouseptr1();
		else if(d==2)
			restrictmouseptr1();
		else if(d==3)
			restrictanddetail();
		else if(d==4)
			freedrawptr();
		else if(d==5)
			buttonpress();
		else if(d==6)
		{
			printf("\n\n\t\tPress any key to exit");
			getch();
			exit(0);
		}
		else if(d==7)
			goto Again;
		else
		    printf("\n\n\t\tPlease enter a valid choice");
	}
	else
		printf("\n\n\t\tPlease enter a valid choice");
	}
	else if(a==3)
	{
		printf("\n\n\t\tPress any key to exit");
		getch();
		exit(0);
	}
	else
		printf("\n\n\t\tPlease enter a Valid option");

	}
	}
	}
	getch();
}


void showmouseptr1()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	i.x.ax=0;
	int86(0x33,&i,&o);
	i.x.ax=1;
	int86(0x33,&i,&o);
	getch();
	restorecrtmode();
	clrscr();
}

void restrictmouseptr1()
{
	int gd=DETECT,gm,x1=120,y1=100,x2=500,y2=350;
	initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");
	rectangle(x1,y1,x2,y2);
	i.x.ax=0;                   //initializaion of mouse
	int86(0x33, &i, &o);
	i.x.ax=1;		//showing mouse pointer
	int86(0x33, &i, &o);
	i.x.ax=7;		//service number 7 for setting horizontal limits for pointer
	i.x.cx=x1;		//minimum x coordinate
	i.x.dx=x2;		//maximum x coordinate
	int86(0x33,&i,&o);
	i.x.ax=8;               //service number 8 for setting vertical limits for pointer
	i.x.cx=y1;
	i.x.dx=y2;
	int86(0x33,&i,&o);
	getch();
	//closegraph();
	restorecrtmode();
	clrscr();
	return;
}

void restrictanddetail()
{
	int gd=DETECT,gm,x,y,button,c;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	i.x.ax=0;
	int86(0x33,&i,&o);

	i.x.ax=1;
	int86(0x33,&i,&o);

	restrictmouseptr(0,0,640,480);
	 gotoxy(30,25);
	 printf("press any key to exit....");
	 while(!kbhit())
	 {
		getmousepos(&button,&x,&y);
		gotoxy(20,4);
		(button&1)==1?printf("Left button down"):printf("Left button up");
		gotoxy(50,4);
		(button&2)==2?printf("Right button down"):printf("Right button up");
		gotoxy(37,2);
		printf("x=%03d y=%03d",x,y);
	 }
	 clrscr();
	 return;
}

void freedrawptr()
{
	int gd=DETECT,gm,x,y,button,prevx,prevy;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	rectangle(0,0,635,475);

	i.x.ax=0;
	int86(0x33,&i,&o);
	i.x.ax=7;
	i.x.cx=0;
	i.x.dx=635;
	int86(0x33,&i,&o);

	i.x.ax=8;
	i.x.cx=0;
	i.x.dx=475;
	int86(0x33,&i,&o);

	showmouseptr();

	gotoxy(30,3);
	printf("Press any key to Exit...");
	while(!kbhit())
	{
		getmousepos(&button,&x,&y);
		if((button&1)==1)
		{
			hidemouseptr();
			prevx=x;
			prevy=y;
			while((button&1)==1)
			{
				line(prevx,prevy,x,y);
				prevx=x;
				prevy=y;
				getmousepos(&button,&x,&y);
			}
			showmouseptr();
		}
	}
	clrscr();
	return;
}

void buttonpress()
{
	int gd=DETECT,gm,x1,y1,x2,y2,x,y,xl,yt,xr,yb,msbutton;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	x1=1,y1=1,x2=getmaxx()-1,y2=getmaxy()-1;
	xl=x1,yt=100,xr=x2,yb=125;
	setbkcolor(BLUE);
	restrictmouseptr(x1,y1,x2,y2);
	button(xl,yt,xr,yb,"press kr be");
	showmouseptr();
	while(!kbhit())
	{
		getmousepos(&msbutton,&x,&y);
		if((msbutton & 1)==1)
		{
			hidemouseptr();
			while((msbutton&1)==1)
			{
				if(x>=xl && x<=xr &&y>=yt &&y<=yb)
				{
					sound(2000);
					delay(200);
					nosound();
					pressedbutton(xl,yt,xr,yb,"BHAG YHA SE");
					gotoxy(28,12);
					printf("Press any key to terminate...");
				}
				getmousepos(&msbutton,&x,&y);
			}
			showmouseptr();
		}
	}
	clrscr();
	return;
}

button(int xl, int yt, int xr, int yb, char*butname)
{
	setfillstyle(1,BLACK);
	bar(xl,yt,xr,yb);
	setfillstyle(1,GREEN);
	bar(xl+1,yt+1,xr-1,yt+1);
	bar(xl+1,yt+1,xr+1,yb-1);
	setfillstyle(1,DARKGRAY);
	bar(xl+2,yb-1,xr,yb);
	bar(xr,yt+1,xr+1,yb);
	outtextxy(xl+30,yt+8,butname);
	return;
}
pressedbutton(int xl, int yt, int xr, int yb, char *butname)
{
	setfillstyle(1,LIGHTGRAY);
	bar(xl,yt,xr,yb);
	setfillstyle(1,DARKGRAY);
	bar(xl+1,yt+1,xr-1,yt+1);
	bar(xl+1,yt+1,xl+1,yb);

	setfillstyle(1,WHITE);
	bar(xl+1,yb,xr-1,yb);
	bar(xr,yt+1,xr,yb);
	outtextxy(xl+20,yt+8,butname);
	return;
}

showmouseptr()
{
	i.x.ax=1;
	int86(0x33,&i,&o);
	return;
}
hidemouseptr()
{
	i.x.ax=2;
	int86(0x33,&i,&o);
	return;
}

getmousepos(int *button,int *x,int *y)
{
	i.x.ax=3;
	int86(0x33,&i,&o);
	*button=o.x.bx;
	*x=o.x.cx;
	*y=o.x.dx;
	return;
}

restrictmouseptr(int x1,int y1,int x2, int y2)
{
	i.x.ax=7;
	i.x.cx=x1;
	i.x.dx=x2;
	int86(0x33,&i,&o);
	i.x.ax=8;
	i.x.cx=y1;
	i.x.dx=y2;
	int86(0x33,&i,&o);
	return;
}

void adelete()
{
	int status;
	char s1[50];
	printf("\nEnter the path or name of the folder\n");
	fflush(stdin);
	gets(s1);
	status=rmdir(s1);
	if(status==0)
		printf("folder successfully deleted\n");
	else
		printf("folder cannot be deleted\n");
}

void rename1()
{
	int status;
	char s2[25],s3[25];
	printf("\nenter the old name of the folder\n");
	fflush(stdin);
	gets(s2);
	printf("enter the new name of the folder\n");
	fflush(stdin);
	gets(s3);
	status=rename(s2,s3);
	if(status==0)
		printf("file successfully renamed\n ");
	else
		printf("bad command or file name\n");
}

void create()
{
	int status;
	char s1[25];
	printf("\nenter the path of the directory  where to be created\n");
	fflush(stdin);
	gets(s1);
	status=mkdir(s1);
	if(status==0)
		printf("folder successfully created\n");
	else
		printf("bad command or file name\n");
}

/*void copy_folder()
{
	char s[25],s1[25];
	printf("enter the original path of the folder c:");
	fflush(stdin);
	gets(s);
	printf("enter the path where to copy the folder");
	gets(s1);
} */
void list()
{
	struct dirent *de;
	char s1[25];
	DIR *dr;
	printf("enter the path");
	fflush(stdin);
	gets(s1);
	dr=opendir(s1);
	if(dr==NULL)
	{
		printf("cannot open the file");
		return;
	}
	while((de=readdir(dr))!=NULL)
	{
		printf("%s\n",de->d_name);
		getch();
	}
	closedir(dr);
}

void total_folders()
{
	int count;
	struct dirent *de;
	char s1[25];
	DIR *dr;
	printf("enter the path");
	fflush(stdin);
	gets(s1);
	dr=opendir(s1);
	if(dr==NULL)
	{
		printf("cannot open the file");
	}
	count=0;
	while(readdir(dr)!=NULL)
	{
		count++;
		//if(count==2)
		  //	count=0;
	}
	count=count-2;
	printf("\ntotal folders are :- %d\n",count);
	closedir(dr);
}

//Defination part of open a file option
void myopen()
{
	FILE *fp;
	char ch,fname[60];
	printf("\nEnter the file name with extention like(aaf.c or malloc.c) you want to open :-\t");
	fflush(stdin);
	gets(fname);
	fp=fopen(fname,"r");
	if(fp==NULL)
	{
		printf("ERROR IN OPENING FILE");
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			printf("%c",ch);
		}
	}
}
// defination part of copy a file option
void kopy()
{
	FILE *fp1,*fp2;
	char ch,fname1[30],fname2[30];
	clrscr();
	printf("Enter the file name with path and extention you want to copy");
	fflush(stdin);
	gets(fname1);
	fp1=fopen(fname1,"r");
	printf("Enter the file name in which you want to copy");
	fflush(stdin);
	gets(fname2);
	fp2=fopen(fname2,"w");
	while((ch=fgetc(fp1))!=EOF)
	{
		fputc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
}
//Defination part of Delete a file option
void rmove()
{
	int status;
	char file_name[25];
	printf("Enter the name of file you wish to delete\n");
	gets(file_name);
	status = remove(file_name);
	if( status == 0 )
		printf("%s file deleted successfully.\n",file_name);
	else
	{
		printf("Unable to delete the file\n");
		perror("Error");
	}

}
//defination part of encrypting a file
void encrypt()
{
	FILE *fp,*fp1;
	char ch,fname1[20],fname2[20];
	clrscr();
	printf("Enter the file name with path and extention which you want to encrypt");
	fflush(stdin);
	gets(fname1);
	fp=fopen(fname1,"r");
	printf("Enter the file name in which you want to get encrypted contents");
	fflush(stdin);
	gets(fname2);
	fp1=fopen(fname2,"w");
	if(fp==NULL)
	{
		printf("ERROR IN OPENING FILE");
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			ch=ch+127;
			fputc(ch,fp1);
		}
	}
	fclose(fp);
	fclose(fp1);
	getch();
}
//defination part to decrypt a file
void decrypt()
{
	FILE *fp,*fp1;
	char ch,fname1[20],fname2[20];
	clrscr();
	printf("Enter the file name with path and extention which you want to decrypt");
	fflush(stdin);
	gets(fname1);
	fp=fopen(fname1,"r");
	printf("Enter the file name with path and extention in which you want to get decrypted fyle contents");
	fflush(stdin);
	gets(fname2);
	fp1=fopen(fname2,"w");
	if(fp==NULL)
	{
		printf("ERROR IN OPENING FILE");
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			ch=ch-127;
			fputc(ch,fp1);
		}
	}
	fclose(fp);
	fclose(fp1);
	getch();
}
//defination of move a file option
void move()
{
	FILE *fp1,*fp2;
	char ch,fname1[20],fname2[20];
	int status;
	clrscr();
	printf("Enter the file name you want to move with path and extention:-");
	fflush(stdin);
	gets(fname1);
	fp1=fopen(fname1,"r");
	printf("Enter the file name you want to move with path and extention:-");
	fflush(stdin);
	gets(fname2);
	fp2=fopen(fname2,"w");
	while((ch=fgetc(fp1))!=EOF)
	{
		fputc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	/*fp1=fopen(fname1,"w");
	fflush(stdin);
	gets(fname1);
	*/
	status = remove(fname1);
	if( status == 0 )
	printf("file deleted successfully.\n");
	else
	{
		printf("Unable to delete the file\n");
		perror("Error");
	}
	getch();
}
//Defination part to create a new file
void create2()
{
	char fname[100];
	FILE *fp1;
	printf("Enter the file name with location where you want to create a file");
	fflush(stdin);
	gets(fname);
	fp1=fopen(fname,"wb");
	if(fp1!=NULL)
	{
		printf("File Created Succesfull");
	}
	else
		perror("ERROR");
	getch();
	}
//defination of rename a file
void rname()
{
	int a;
	char oldname[80],newname[80];
	clrscr();
	printf("Enter current filename: ");
	fflush(stdin);
	gets(oldname);
	printf("Enter new name for file: ");
	fflush(stdin);
	gets(newname);
	a=rename(oldname,newname);
	if(a==0)
	{
		printf("%s has been rename %s.\n", oldname, newname);
	}
	else
	{
		fprintf(stderr, "An error has occurred renaming %s.\n", oldname);
	}
}
//Defination part of list a file.
void list1()
{
	int count=0;
	DIR *d;
	char path[100];
	struct dirent *dir;
	clrscr();
	printf("Enter path ");
	fflush(stdin);
	gets(path);
	d=opendir(path);
	if(d)
	{
		while((dir = readdir(d)) !=NULL)
		{
			printf("\n%s",dir->d_name);
			count++;
			if(count% 24==0)
			{
				printf("Press any key to continue ");
				getch();
			}
		}
		closedir(d);
	}
	getch();
}
