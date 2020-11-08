#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char a[100],ch;
  int i=0;
 cout<<" Password:";
 do{
	ch=getch();
	a[i++]=ch;
	cout<<" \b *";
 }while(ch!=13);
 cout<<"\n The Password is:"<<a<<endl;
 getch();
}

