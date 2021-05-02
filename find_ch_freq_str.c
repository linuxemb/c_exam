

#include <stdio.h>

void passStr (char str[])
{
    printf("the sring is \n");
    puts(str);
}
// find the frequence of a char in string 



int main()
{
    char str[120];   

    char chVar;
    int freq =0;
    
    printf( "Write down your string\n");
    fgets(str, sizeof(str), stdin);
    // gets(str);
    printf("write down the char you want ot find hte freq of :");
    scanf("%c", &chVar);
   // passStr(str);
    for (int i=0; str[i]!='\0' ; ++i)
      //if substr(str, chVar)
      {
          if (chVar == str[i])
               ++freq;
      }
    printf("The frequency of %c is %d \n", chVar, freq);

    return 0;


}