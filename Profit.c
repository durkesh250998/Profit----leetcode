#include<stdio.h>
void maxProfit(int arr[] ,int);
int main(){
	      int w;
	      scanf("%d",&w);
	      printf("enter %d values : ", w);
	      int arr[w];
              
              for(int i=0;i<w;i++){
                               scanf("%d",&arr[w]);   
              }
              int size=sizeof(arr)/sizeof(0);
              printf("%d\n",size);
              maxProfit(arr,size);
              
}
void maxProfit(int arr[],int size){
              int i=0,j=0,sum=0;
              
              while(i<size){								// [7  1  5  3  6  4]
                         j=i;
                         while(arr[i]<arr[i+1] && i<size-1){
                                                        i++;
                                 
                         }
                         sum+=(arr[i]-arr[j]);
                         i++;
                         printf("%d",sum);
                }
                              
              }
              

