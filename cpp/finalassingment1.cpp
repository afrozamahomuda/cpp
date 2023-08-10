#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    string n;
    cout<<" type a sentence: ";
    getline (cin,n);

    int i, numOfchar = n.length();

    int v=0, c=0;

    for  (i=0; i<n.length(); i++)
    {
        if(n.at(i) == 32)

        {
            numOfchar--;
        }
        if((n[i]>=65 && n[i]<=90)|| (n[i]>=97 && n[i]<=122))
    	{

            if(n[i]=='a'|| n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u'||n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='O' ||n[i]=='U')
		      v++;
            else
             c++;
        }


    }

      cout<< "num of char: "<<numOfchar<<endl;

      cout<<"Number of vowels : "<< v <<endl;
      cout<<"Number of consonants : "<< c <<endl;


      return 0;
}
