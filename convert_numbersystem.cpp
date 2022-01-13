#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    int ch;
    do{
        cout<<endl;
        cout<<"Which number system do you wish to convert"<<endl;
        cout<<"---------------------------------------------"<<endl;
        cout<<"|   1 decimal to binary,octal,hexadecimal   |"<<endl;
        cout<<"|   2 binary to decimal,octal,hexadecimal   |"<<endl;
        cout<<"|   3 octal to decimal,binary,hexadecimal   |"<<endl;
        cout<<"|   4 hexadecimal to decimal,binary,octal   |"<<endl;
        cout<<"|   5 exit                                  |"<<endl;
        cout<<"---------------------------------------------"<<endl;
        
        cout<<"Enter your choice : ";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
        case 1:
            {
                int dno1,hno1;
                cout<<"Enter decimal number : ";
                cin>>dno1;
                cout<<endl;
                int ono1=dno1;
                hno1=dno1;
                //DECIMAL TO BINARY
                int arr[500],i=0;
                while(dno1>=1)
                {
                    arr[i]=dno1%2;
                    dno1=dno1/2;
                    i++;
                }
                cout<<"Binary value : ";
                for(int j=i-1;j>=0;j--)
                {
                    cout<<arr[j];
                }
                cout<<endl;
                //DECIMAL TO OCTAL
                int arr2[500],k=0;
                while(ono1>=1)
                {
                    arr2[k]=ono1%8;
                    ono1=ono1/8;
                    k++;
                }
                cout<<"Octal value : ";
                for(int j=k-1;j>=0;j--)
                {
                    cout<<arr2[j];
                }
                cout<<endl;
                //DECIMAL TO HEXADECIMAL
                int arr3[32],l=0;
                while(hno1>0)
                {
                    arr3[l]=hno1%16;
                    hno1=hno1/16;
                    l++;
                }
                cout<<"Hexadecimal value : ";
                for(int m=l-1;m>=0;m--)
                {
                    if(arr3[m]==10)
                        cout<<"A";
                    else if(arr3[m]==11)
                        cout<<"B";
                    else if(arr3[m]==12)
                        cout<<"C";
                    else if(arr3[m]==13)
                        cout<<"D";
                    else if(arr3[m]==14)
                        cout<<"E";
                    else if(arr3[m]==15)
                        cout<<"F";
                    else
                        cout<<arr3[m];
                }
                cout<<endl;
                break;
            }
        case 2:
            {
                int bno2;
                cout<<"Enter binary number : ";
                cin>>bno2;
                cout<<endl;
                //BINARY TO DECIMAL
                int dno2=0,b=1,temp=bno2;
                while(temp)
                {
                    int lst=temp%10;
                    temp/=10;
                    dno2+=lst*b;
                    b*=2;
                }
                cout<<"Decimal value : "<<dno2<<endl;
                int t=dno2;
                //BINARY TO OCTAL
                int arr2[500],k=0;
                while(dno2>=1)
                {
                    arr2[k]=dno2%8;
                    dno2=dno2/8;
                    k++;
                }
                cout<<"Octal value : ";
                for(int j=k-1;j>=0;j--)
                {
                    cout<<arr2[j];
                }
                cout<<endl;
                //BINARY TO HEXADECIMAL
                int arr3[32],l=0;
                dno2=t;
                while(dno2>0)
                {
                    arr3[l]=dno2%16;
                    dno2=dno2/16;
                    l++;
                }
                cout<<"Hexadecimal value : ";
                for(int m=l-1;m>=0;m--)
                {
                    if(arr3[m]==10)
                        cout<<"A";
                    else if(arr3[m]==11)
                        cout<<"B";
                    else if(arr3[m]==12)
                        cout<<"C";
                    else if(arr3[m]==13)
                        cout<<"D";
                    else if(arr3[m]==14)
                        cout<<"E";
                    else if(arr3[m]==15)
                        cout<<"F";
                    else
                        cout<<arr3[m];
                }
                cout<<endl;
                break;
            }
        case 3:
            {
                int ono3;
                cout<<"Enter octal number : ";
                cin>>ono3;
                cout<<endl;
                //OCTAL TO DECIMAL
                int dno3=0,b=1,temp=ono3;
                while(temp)
                {
                    int lst=temp%10;
                    temp/=10;
                    dno3+=lst*b;
                    b*=8;
                }
                cout<<"Decimal value : "<<dno3<<endl;
                int t=dno3;
                //OCTAL TO BINARY
                int arr[500],i=0;
                while(dno3>=1)
                {
                    arr[i]=dno3%2;
                    dno3=dno3/2;
                    i++;
                }
                cout<<"Binary value : ";
                for(int j=i-1;j>=0;j--)
                {
                    cout<<arr[j];
                }
                cout<<endl;
                //OCTAL TO HEXADECIMAL
                dno3=t;
                int arr3[32],l=0;
                while(dno3>0)
                {
                    arr3[l]=dno3%16;
                    dno3=dno3/16;
                    l++;
                }
                cout<<"Hexadecimal value : ";
                for(int m=l-1;m>=0;m--)
                {
                    if(arr3[m]==10)
                        cout<<"A";
                    else if(arr3[m]==11)
                        cout<<"B";
                    else if(arr3[m]==12)
                        cout<<"C";
                    else if(arr3[m]==13)
                        cout<<"D";
                    else if(arr3[m]==14)
                        cout<<"E";
                    else if(arr3[m]==15)
                        cout<<"F";
                    else
                        cout<<arr3[m];
                }
                cout<<endl;
                break;
            }
        case 4:
            {
                int dno4=0;
                char ar[500];
                int r,l;
                cout<<"Enter Hexadecimal number : ";
                cin>>ar;
                cout<<endl;
                //HEXADECIMAL TO DECIMAL
                l=strlen(ar);
                for(int i=0;ar[i]!='\0';i++)
                {
                    l--;
                    if(ar[i]>='0'&&ar[i]<='9')
                        r=ar[i]-48;
                    else if(ar[i]>='a'&&ar[i]<='r')
                        r=ar[i]-87;
                    else if(ar[i]>='A'&&ar[i]<='F')
                        r=ar[i]-55;
                    dno4+=r*pow(16,l);
                }
                cout<<"Decimal value : "<<dno4;
                cout<<endl;
                //HEXADECIMAL TO BINARY
                int temp=dno4;
                int arr[500],i=0;
                while(temp>=1)
                {
                    arr[i]=temp%2;
                    temp=temp/2;
                    i++;
                }
                cout<<"Binary value : ";
                for(int j=i-1;j>=0;j--)
                {
                    cout<<arr[j];
                }
                cout<<endl;
                //HEXADECIMAL TO OCTAL
                int temp2=dno4;
                int arr2[500],k=0;
                while(temp2>=1)
                {
                    arr2[k]=temp2%8;
                    temp2=temp2/8;
                    k++;
                }
                cout<<"Octal value : ";
                for(int j=k-1;j>=0;j--)
                {
                    cout<<arr2[j];
                }
                cout<<endl;
                break;
            }
        case 5:
            {
                exit(0);
            }
        }
        cout<<"Made by : Krish Patel, 20CE089"<<endl;
    }while(ch!=5);
    return 0;
}