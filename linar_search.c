#include<stdio.h>
int main()
{
    int arr[100] , n , key; 
    int flag = 0;
    printf("Enter the numb of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i = 0 ; i<n ; i++) {
        scanf("%d" , &arr[i]);
       
    }
    printf("Enter the element to be search:");
     scanf("%d" , &key);

      for(int i = 0 ; i<n ; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            flag = 1;
            break;
        }
      }
      if(flag = 0)
      {
        printf("Element not found\n");
      }
      return 0;

}