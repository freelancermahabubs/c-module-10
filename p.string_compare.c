#include <stdio.h>
#include<string.h>
int main(){
    char a[100], b[100];
    scanf("%s" "%s", a, b);
    int i =0;
    while (1)
    {
       if (a[i] == '\0' && b[i] == '\0')
       {
       printf("Same as above\n");
       break;
       }
       else if(a[i]== '\0'){
        printf("A Sammller\n");
        break;
       }
       else if(b[i] == '\0'){
        printf("B Sammller\n");
        break;
    }
  if (a[i] == b[i]){
i++;
}
 else if (a[i]<b[i])
 {
   printf("A choto\n");
   break;
 }
 else{
    printf("B Choto\n");
 }
 
}
 return 0;
}