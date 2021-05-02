

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

// #include <assert.h>
// #include <ctype.h>
// #include <limits.h>
// #include <math.h>
// #include <stdbool.h>
// #include <stddef.h>
// #include <stdint.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char* findSubstring(char* s, int k) {
// // static allocation  need find substring of 3 of s
//       char buf[80];
       

//      size_t len = strlen(s);
//       if ( k> len )  return;
     
//      char * strp =  malloc(len+1);
//      char * subsp = malloc(k+1) ;
//      puts(strp);
     
//    // take out substr of k elem

//      for (int i =0; i<=k; i++)
//       {
//           * subsp =  *strp;
//           * subsp++;
//           * strp++;
//       }   
//           subsp = '/0';

//    // calulate vowel of substr
//       static count [numofsub];
      
//      buf = strstr(strp, k);
//      strp = s;
  
  
// }


    
// int main()
// {
//     FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

//     char* s = readline();

//     int k = parse_int(ltrim(rtrim(readline())));

//     char* result = findSubstring(s, k);

//     fprintf(fptr, "%s\n", result);

//     fclose(fptr);

//     return 0;
// }

// char* readline() {
//     size_t alloc_length = 1024;
//     size_t data_length = 0;

//     char* data = malloc(alloc_length);

//     while (true) {
//         char* cursor = data + data_length;
//         char* line = fgets(cursor, alloc_length - data_length, stdin);

//         if (!line) {
//             break;
//         }

//         data_length += strlen(cursor);

//         if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
//             break;
//         }

//         alloc_length <<= 1;

//         data = realloc(data, alloc_length);

//         if (!data) {
//             data = '\0';

//             break;
//         }
//     }

//     if (data[data_length - 1] == '\n') {
//         data[data_length - 1] = '\0';

//         data = realloc(data, data_length);

//         if (!data) {
//             data = '\0';
//         }
//     } else {
//         data = realloc(data, data_length + 1);

//         if (!data) {
//             data = '\0';
//         } else {
//             data[data_length] = '\0';
//         }
//     }

//     return data;
// }

// char* ltrim(char* str) {
//     if (!str) {
//         return '\0';
//     }

//     if (!*str) {
//         return str;
//     }

//     while (*str != '\0' && isspace(*str)) {
//         str++;
//     }

//     return str;
// }

// char* rtrim(char* str) {
//     if (!str) {
//         return '\0';
//     }

//     if (!*str) {
//         return str;
//     }

//     char* end = str + strlen(str) - 1;

//     while (end >= str && isspace(*end)) {
//         end--;
//     }

//     *(end + 1) = '\0';

//     return str;
// }

// int parse_int(char* str) {
//     char* endptr;
//     int value = strtol(str, &endptr, 10);

//     if (endptr == str || *endptr != '\0') {
//         exit(EXIT_FAILURE);
//     }

//     return value;
// }

// }

//===================================
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// // int main() {

// // int count ;
 
 
// // int a[1000];
// // int  sum[1000]; 
// // //scanf("%d" ,  &count);
// //  count =9;
// // printf("%d", sum[count]);

// // for (int i=0; i<count; i++)
// // {
// //     int* tmp;
// //     scanf("%d", &tmp);
// //     a[i] = *tmp;
// //     sum[i] = sum[i] + a[i]; 
// // }
// // printf("%d", count);
// // printf("%d", sum[count]);
// //     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
// //     return 0;char* tmp = a;

// #define NUM_OF_STR 4
// #define MAX_STR_SIZE 40
// int lexicographic_sort(const char* a, const char* b) {
//  return strcmp(a,b) > 0;
// }


// int lexicographic_sort_reverse(const char* a, const char* b) {
//  return strcmp(a,b) < 0;
// }

// int sort_by_number_of_distinct_characters(const char* a, const char* b) {
//     return 0;
// }

// int sort_by_length(const char* a, const char* b) {
//     if(strlen(a) !=strlen(b))
//         return strlen(a) >strlen(b);
//     else
//         return strcmp(a,b) <0;
// }

// void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
//         for (int i =1;i <len;i++)
//         {
//             int j = i;
//             char *p =arr[i];
//             while (j>0) {
//                 if ( cmp_func( arr[j-1] ,p) >0 )
//                     arr[j] = arr[j-1];
//                 else
//                     break;
//                 j--;    
        
//            }
//             arr[j] = p;
//         }
// }

// void print_array(const char arr[NUM_OF_STR][MAX_STR_SIZE])

// {
//     for (int i=0;i< NUM_OF_STR; i++)
//     {
//        printf("'%s' has length %d\n", arr[i], strlen(arr[i]));

//     }

// }
// int main() 
// {
//     int n;   
//    // char** arr;
// 	char arr[NUM_OF_STR][MAX_STR_SIZE] =
// 	{ "array of c string",
// 	  "is fun to use",
// 	  "make sure to properly",
// 	  "tell the array size"
// 	};

// printf("Before revvers \n" );
// print_array(arr);


// for (int i= 0; i< NUM_OF_STR; i++)
// {
//     for (int j=0 , k=strlen(arr[i]) -1; j<k; j++ ,k-- )
//     {
//         char tmp = arr[i][j];
//         arr[i][j] = arr[i][k];
//         arr[i][k] = tmp;
//     }
// }


// printf("\nAfter revvers \n" );
// print_array(arr);
// return 0;
// }
//  // n=2;
//     //n =scanf("%d", &n);
//   //  arr = (char**)malloc(n * sizeof(char*)); 
// // for(int i = 0; i <= n; i++) {
// //         *(arr + i) = malloc(1024 * sizeof(char));
// //         scanf("%s", *(arr + i));
// //         *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
// //       }
// //   char st1[12] = "je";
// //   char str2[3] ="ne";
// // array of string



// //     string_sort(arr, n, lexicographic_sort);
// //     for(int i = 0; i < n; i++) { 
// //         printf("%s\n", arr[i]);
// //     printf("\n");
// //     }
// //     string_sort(arr, n, lexicographic_sort_reverse);
// //     for(int i = 0; i < n; i++) {
// //         printf("%s\n", arr[i]); 
// //     printf("\n");
// //     }
// //     string_sort(arr, n, sort_by_length);
 
// //     for(int i = 0; i <n; i++) {
// //         printf("%s\n", arr[i]);    
// //     printf("\n");
// //     }
// //     string_sort(arr, n, sort_by_number_of_distinct_characters);
// //     for(int i = 0; i < n; i++)  {
// //         printf("%s\n", arr[i]); 
// //     printf("\n");
// //     }
// //  return 0;
// // }



// int lexicographic_sort(const char* a, const char* b){
//     return strcmp(a, b) > 0;
// }

// int lexicographic_sort_reverse(const char* a, const char* b){
//     return strcmp(a, b) <= 0;
// }

// int sort_by_number_of_distinct_characters(const char* a, const char* b){
//     int c1 = 0, c2 = 0;
//     int hsh1[26] = {0}, hsh2[26] = {0};
//     int n1 = strlen(a);
//     int n2 = strlen(b);

//     for(int i = 0; i < n1; i++){
//         hsh1[a[i] - 'a'] = 1;   
//     }

//     for(int i = 0; i < n2; i++){
//         hsh2[b[i] - 'a'] = 1;   
//     }

//     for(int i = 0; i < 26; i++){
//         if(hsh1[i])
//             c1++;
//         if(hsh2[i])
//             c2++;
//     }
//     if( c1 != c2)
//         return c1 > c2;
//     else
//         return strcmp(a, b)  > 0;

// }

// int sort_by_length(const char* a, const char* b){
//     if(strlen(a) != strlen(b))
//         return strlen(a) > strlen(b);
//     else
//         return strcmp(a, b) >  0;
// }

// void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
//     for(int i = 1; i < len; i++){
//         int j = i;
//         char* p = arr[i];
//         while(j > 0){
//             if((*cmp_func)(arr[j-1],p) > 0 )
//                 arr[j] = arr[j-1];
//             else
//                 break;
//             j--;
//         }
//         arr[j] = p;
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int lexicographic_sort(const char* a, const char* b){
//     return strcmp(a, b) > 0;
// }

// int lexicographic_sort_reverse(const char* a, const char* b){
//     return strcmp(a, b) <= 0;
// }

// int sort_by_number_of_distinct_characters(const char* a, const char* b){
//     int c1 = 0, c2 = 0;
//     int hsh1[26] = {0}, hsh2[26] = {0};
//     int n1 = strlen(a);
//     int n2 = strlen(b);

//     for(int i = 0; i < n1; i++){
//         hsh1[a[i] - 'a'] = 1;   
//     }

//     for(int i = 0; i < n2; i++){
//         hsh2[b[i] - 'a'] = 1;   
//     }

//     for(int i = 0; i < 26; i++){
//         if(hsh1[i])
//             c1++;
//         if(hsh2[i])
//             c2++;
//     }
//     if( c1 != c2)
//         return c1 > c2;
//     else
//         return strcmp(a, b)  > 0;

// }

// int sort_by_length(const char* a, const char* b){
//     if(strlen(a) != strlen(b))
//         return strlen(a) > strlen(b);
//     else
//         return strcmp(a, b) >  0;
// }

// void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
//     for(int i = 1; i < len; i++){
//         int j = i;
//         char* p = arr[i];
//         while(j > 0){
//             if((*cmp_func)(arr[j-1],p) > 0 )
//                 arr[j] = arr[j-1];
//             else
//                 break;
//             j--;
//         }
//         arr[j] = p;
//     }
// }


// int main()

// {
//     int n;
//     scanf("%d", &n);
  
//     char** arr;
// 	arr = (char**)malloc(n * sizeof(char*));
  
//     for(int i = 0; i < n; i++){
//         *(arr + i) = malloc(1024 * sizeof(char));
//         scanf("%s", *(arr + i));
//         *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
//     }
  
//     string_sort(arr, n, lexicographic_sort);
//     for(int i = 0; i < n; i++)
//         printf("%s\n", arr[i]);
//     printf("\n");

//     string_sort(arr, n, lexicographic_sort_reverse);
//     for(int i = 0; i < n; i++)
//         printf("%s\n", arr[i]); 
//     printf("\n");

//     string_sort(arr, n, sort_by_length);
//     for(int i = 0; i < n; i++)
//         printf("%s\n", arr[i]);    
//     printf("\n");

//     string_sort(arr, n, sort_by_number_of_distinct_characters);
//     for(int i = 0; i < n; i++)
//         printf("%s\n", arr[i]); 
//     printf("\n");
// }

//----------------------------------