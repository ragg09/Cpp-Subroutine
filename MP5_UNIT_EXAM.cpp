//2018 sample codes
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<windows.h>
#include<string.h>
#include<iostream>
using namespace std;

void inputting(char &name, int &prelim, int &midterm, int &final)
{
	cout<<"Name: ";
	scanf("%s", &name);
	cout<<"Prelims: ";
	cin>>prelim;
	cout<<"Midterm: ";
	cin>>midterm;
	cout<<"Final: ";
	cin>>final;
}

int wprelim(char &name, int &prelim, int &midterm, int &final)
{
	int a;
	a=prelim*0.25;
	return a;
}

int wmidterm(char &name, int &prelim, int &midterm, int &final)
{
	int a;
	a=midterm*0.25;
	return a;
}

int wfinal(char &name, int &prelim, int &midterm, int &final)
{
	int a;
	a=final*0.50;
	return a;
}

int ave(char &name, int &prelim, int &midterm, int &final)
{

	int a;
	a=wprelim(name,prelim,midterm,final)+wmidterm(name,prelim,midterm,final)+wfinal(name,prelim,midterm,final);
	return a;
}

printing()
{
	
	char name;
	int prelim,midterm,final,passed=0,failed=0;
	inputting(name,prelim,midterm,final);
	
	if(ave(name,prelim,midterm,final)>=90)
	{
		cout<<"Prelims/w: "<<wprelim(name,prelim,midterm,final)<<endl;
		cout<<"Midterm/w: "<<wmidterm(name,prelim,midterm,final)<<endl;
		cout<<"Final/w :"<<wfinal(name,prelim,midterm,final)<<endl;
		cout<<"Average: "<<ave(name,prelim,midterm,final)<<endl;
		cout<<"Letter Remark: A"<<endl;
		cout<<"Remark: Passed"<<endl;
	}
	else if(ave(name,prelim,midterm,final)>=80)
	{
		cout<<"Prelims/w: "<<wprelim(name,prelim,midterm,final)<<endl;
		cout<<"Midterm/w: "<<wmidterm(name,prelim,midterm,final)<<endl;
		cout<<"Final/w :"<<wfinal(name,prelim,midterm,final)<<endl;
		cout<<"Average: "<<ave(name,prelim,midterm,final)<<endl;
		cout<<"Letter Remark: B"<<endl;
		cout<<"Remark: Passed"<<endl;
	}
	else if(ave(name,prelim,midterm,final)>=70)
	{
		cout<<"Prelims/w: "<<wprelim(name,prelim,midterm,final)<<endl;
		cout<<"Midterm/w: "<<wmidterm(name,prelim,midterm,final)<<endl;
		cout<<"Final/w :"<<wfinal(name,prelim,midterm,final)<<endl;
		cout<<"Average: "<<ave(name,prelim,midterm,final)<<endl;
		cout<<"Letter Remark: C"<<endl;
		cout<<"Remark: Passed"<<endl;
	}
		else if(ave(name,prelim,midterm,final)>=61)
	{
		cout<<"Prelims/w: "<<wprelim(name,prelim,midterm,final)<<endl;
		cout<<"Midterm/w: "<<wmidterm(name,prelim,midterm,final)<<endl;
		cout<<"Final/w :"<<wfinal(name,prelim,midterm,final)<<endl;
		cout<<"Average: "<<ave(name,prelim,midterm,final)<<endl;
		cout<<"Letter Remark: D"<<endl;
		cout<<"Remark: Passed"<<endl;
	}
	else
	{
		cout<<"Prelims/w: "<<wprelim(name,prelim,midterm,final)<<endl;
		cout<<"Midterm/w: "<<wmidterm(name,prelim,midterm,final)<<endl;
		cout<<"Final/w :"<<wfinal(name,prelim,midterm,final)<<endl;
		cout<<"Average: "<<ave(name,prelim,midterm,final)<<endl;
		cout<<"Letter Remark: F"<<endl;
		cout<<"Remark: Failed"<<endl;
	}
}

void trap(char &ans)
{
	do
	{
	cout<<endl<<endl<<"Press Y to continue N to exit"<<endl<<endl;
		ans=toupper(getch());
	}while(!(ans=='Y'||ans=='N'));
}

main()
{
	char ans;
	
	do
	{
		printing();
		trap(ans);
	}while(ans=='Y');
}

/*
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
void gotoxy(int x, int y)
{ HANDLE hConsoleOutput;
COORD dwCursorPosition;
dwCursorPosition.X=x;
dwCursorPosition.Y=y;
hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}

int main()
{
	char ans, name[20];
	int prelim=0, midterm=0, final=0, wprelim=0, wmidterm=0, wfinal=0, ave=0, passed=0, failed=0, row=5;
	
	start:
	gotoxy(27,1);printf("Total Grade of a Student/s");	
	
	gotoxy(3,3);printf("Name");
	gotoxy(10,3);printf("Prelims/W");
	gotoxy(22,3);printf("Midterm/W");
	gotoxy(34,3);printf("Final/W");
	gotoxy(44,3);printf("Ave");
	gotoxy(50,3);printf("Let");
	gotoxy(56,3);printf("Remark");
	gotoxy(65,3);printf("Pass");
	gotoxy(72,3);printf("Fail");
	
	
	gotoxy(20,18);printf("                                                    ");	
	gotoxy(20,18);	
	printf("Enter name: ");
	scanf("%s", name);
	
	gotoxy(20,18);printf("                                                    ");	
	gotoxy(20,18);
	printf("Enter prelim score: ");
	scanf("%d", &prelim);

	gotoxy(20,18);printf("                                                    ");	
	gotoxy(20,18);
	printf("Enter midterm score: ");
	scanf("%d", &midterm);
	
	gotoxy(20,18);printf("                                                    ");	
	gotoxy(20,18);
	printf("Enter final score: ");
	scanf("%d", &final);

	
	wprelim=prelim*0.25;
	wmidterm=0.25*midterm;
	wfinal=0.50*final;		
	ave=wprelim+wmidterm+wfinal;

	
	filter:
	if(prelim<0||prelim>100||midterm<0||midterm>100||final<0||final>100)
	{
		printf("Invalid score\n");
		printf("Do you want to try again? Y/N");
		ans=toupper(getch());
		if(!(ans=='Y'||ans=='N'))
		{
			goto filter;
		}
		else if(ans='Y')
		{
			goto start;
		}
		else
		{
			exit(0);	
		}
	}

	
	if(ave>=90)
	{	
	gotoxy(3,row);printf("%s", name);
	gotoxy(10,row);printf("%d=%d", prelim, wprelim);
	gotoxy(22,row);printf("%d=%d", midterm, wmidterm);
	gotoxy(34,row);printf("%d=%d", final, wfinal);
	gotoxy(44,row);printf("%d", ave);
	gotoxy(50,row);printf("A");
	gotoxy(56,row);printf("Passed");
	passed=passed+1;
	failed=failed+0;
	gotoxy(65,row);printf("%d", passed);
	gotoxy(72,row);printf("%d", failed);
	row++;
	}
	
	else if(ave>=80)
	{
	gotoxy(3,row);printf("%s", name);
	gotoxy(10,row);printf("%d=%d", prelim, wprelim);
	gotoxy(22,row);printf("%d=%d", midterm, wmidterm);
	gotoxy(34,row);printf("%d=%d", final, wfinal);
	gotoxy(44,row);printf("%d", ave);
	gotoxy(50,row);printf("B");
	gotoxy(56,row);printf("Passed");
	passed=passed+1;
	failed=failed+0;
	gotoxy(65,row);printf("%d", passed);
	gotoxy(72,row);printf("%d", failed);
	row++;
	}
	
	else if(ave>=70)
	{
gotoxy(3,row);printf("%s", name);
	gotoxy(10,row);printf("%d=%d", prelim, wprelim);
	gotoxy(22,row);printf("%d=%d", midterm, wmidterm);
	gotoxy(34,row);printf("%d=%d", final, wfinal);
	gotoxy(44,row);printf("%d", ave);
	gotoxy(50,row);printf("C");
	gotoxy(56,row);printf("Passed");
	passed=passed+1;
	failed=failed+0;
	gotoxy(65,row);printf("%d", passed);
	gotoxy(72,row);printf("%d", failed);
	row++;
	}

	else if(ave>=61)
	{
	gotoxy(3,row);printf("%s", name);
	gotoxy(10,row);printf("%d=%d", prelim, wprelim);
	gotoxy(22,row);printf("%d=%d", midterm, wmidterm);
	gotoxy(34,row);printf("%d=%d", final, wfinal);
	gotoxy(44,row);printf("%d", ave);
	gotoxy(50,row);printf("D");
	gotoxy(56,row);printf("Passed");
	passed=passed+1;
	failed=failed+0;
	gotoxy(65,row);printf("%d", passed);
	gotoxy(72,row);printf("%d", failed);
	row++;
	}
	
	else
	{
	gotoxy(3,row);printf("%s", name);
	gotoxy(10,row);printf("%d=%d", prelim, wprelim);
	gotoxy(22,row);printf("%d=%d", midterm, wmidterm);
	gotoxy(34,row);printf("%d=%d", final, wfinal);
	gotoxy(44,row);printf("%d", ave);
	gotoxy(50,row);printf("F");
	gotoxy(56,row);printf("Failed");
	passed=passed+0;
	failed=failed+1;
	gotoxy(65,row);printf("%d", passed);
	gotoxy(72,row);printf("%d", failed);
	row++;
	}
	
	gotoxy(1,20);printf("                                                                                                  ");
	gotoxy(1,20);
	Exit:
		printf("\n\nDo you want to continue? Y/N");
		ans=toupper(getch());
		if(!(ans=='Y'||ans=='N'))
		{
			goto Exit;
		}
		else if(ans='Y')
		{
				if(row<=15)
			{
				goto start;
				
			}
			else
			{
				row=6;
				system("cls");
				goto start;
			}
		}
		else
		{
			exit(0);	
		}
	
	
	
	return 0;
	getch();	
}
*/
