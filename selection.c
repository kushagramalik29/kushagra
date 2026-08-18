#include <stdio.h>

int main() {

    int arr[100] , i , j , min , n , temp ;

      printf("Enter the number of elements: ");
    scanf("%d", &n);

      printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

       for (i = 0; i < n ; i++) {
        int min = i;

          for (j = i + 1; j < n; j++)  {
            if(arr[j] < arr[min]) {
                min = j;
            }
          }

             temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
       }
       printf("Array after sorting = \n");
        for (i = 0; i < n ; i++){
            printf("%d ",arr[i]);
        }


       return 0 ;
}