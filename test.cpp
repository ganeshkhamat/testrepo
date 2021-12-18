/*#include<iostream>
using namespace std;
int main()
{
    int n,i,a=0,b=1;
    for(i=0;i<=9;i++)
    {
        n=a+b;
        a=b;
        b=n;
        cout<<"  "<<n;
    }
   
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
    int main()
    {
    int n,i;
    n=17,i=57;
    if(n%1==0)
    {
        if(i%1==0)
        {
        cout<<"it is a prime number"<<endl;
        }
        else
        {
            cout<<"Not a prime number";
        }

    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n=5225,n1,rev=0,rem;
    n1=n;
    while(n>0)
    {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    }
    if (n1==rev)
{
    cout<<"Given number is palindromic";
}
else
{
    cout<<"Given number is not palindromic";
}

}
*/
#include<iostream>
using namespace std;
int main()
{
    int n=342,sum=0,temp,rem,c;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        c=rem*rem*rem;
        sum=sum+c;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        cout<<"Armstrong number";
       
    }
    else{
        cout<<"Not armstrong number";
    }
return 0;
}