#include<iostream.h>
#include<conio.h>
#define max 20
int a[max];
void bubble(int n)
{int i,j,t;
cout<<"enter elements";
for(i=0;i<n;i++)
   {
   cin>>a[i];
   }
for(i=0;i<n-1;i++)
    {for(j=0;j<n-1-i;j++)
	{if(a[j]>a[j+1])
	    {	t=a[j+1];
		a[j+1]=a[j];
		a[j]=t;
	    }
	}
    }
}
int display(int n)
{int i;
cout<<"elements in sorted order are"<<endl;
for(i=0;i<n;i++)
	{cout<<a[i]<<endl;
	}
return 0;
}
int main()
{clrscr();
int b;
cout<<"enter number of elements please";
cin>>b;
bubble(b);
display(b);
getch();
return 0;
}
