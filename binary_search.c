#include<stdio.h>
int main() {
    int arr[100] , n , key;
    int l = 0; int r, mid;

    printf("Enter the numb of elements: ");
    scanf("%d", &n);
    r = n-1;

    printf("Enter the elements: ");
    for(int i = 0 ; i<n ; i++) {
        scanf("%d" , &arr[i]);
       
    }
    printf("Enter the element to be search:");
     scanf("%d" , &key);

     while (l <= r)
     {
        mid = (l+r) / 2;
        if(arr[mid] == key){
            printf("Element found at index: %d\n", mid);
            break;
        }
     
     else if(arr[mid] > key){
        r = mid - 1 ;
     }
     else {
        l = mid + 1 ;
     }

}
}