#include <stdio.h>

void passStr (char str[])
{
    printf("the sring is \n");
    puts(str);
}
// find the frequence of a char in string 

// 2 Remove all char in string except alphabet
int main()
{
    char str[120];   

   
    int k, i;
    printf( "Write down your stringaaaaa===\n");
    fgets(str, sizeof(str), stdin);
 
    for ( i=0; str[i]!='\0' ; ++i)
     
      {
        
            while (!((str[i] >='a' && str[i] <= 'z') || (str[i] >='A' && str[i] <'Z') || str[i]=='\0'))
            {
                //remove str [i] shaffle
                int k =i;
                while( str[k] != '\0')
                {
                str[k] = str[k+1]; 
                k++;
                }
                // way 2
                // for ( k =i; str[k] !='\0'; ++k)
                // {
                //     str[k] = str [k+1];
                // }
                // str[k]='\0';

            }

      }
  //  printf("The frequency of %c is %d \n", chVar, freq);
        printf("The string without char iand with alphbe on yf====== \n" );

        puts(str);
        printf("\n");
        
    return 0;


}