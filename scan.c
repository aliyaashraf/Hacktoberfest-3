#include <stdio.h>


void main(){

    int n,h,ar[20],i,s=0,l=0,item,final[20],g,j, tmp;
  
    printf("Enter the number of requests and head position");
  
    scanf("%d %d", &n,&h);
  
    printf("Enter max boundary value:");
 
    int max;
 
    scanf("%d",&max);
   
    for(i=0;i<n;i++){
     
       printf("Enter the requests: ");
      
       scanf("%d",&ar[i]);
 
    }
    
    ar[n]=h;

    g=n+1;
  
    for (i = 0; i < g; i++) {  
   
       for (j = 0; j < g - i - 1; j++) { 
   
          if (ar[j] > ar[j + 1]) {  
    
             tmp = ar[j];
       
             ar[j] = ar[j + 1];
   
             ar[j + 1] = tmp;
    
          } 
  
       } 
   
    }
  
  for(i=0;i<g;i++){
     
         if(ar[i]==h){
       
            item=i;
      
         }
  
         if(ar[i]>=h){
  
            final[l]=ar[i];
     
            l++;
  
         }

    }
    final[l]=max;

    for(i=item-1;i>=0;i--){
    
       final[l+1]=ar[i];
       
       l++;
 
    } 

    printf("MOVEMENT: \n (");
    

    for(i=0;i<g+1;i++){
    
       printf("%d, ",final[i]);
      
      
       if (i!=0 && final[i]>final[i-1]) 
         
            s=s+(final[i]-final[i-1]);
       
     
       else if(i!=0 && final[i-1]>final[i])
  
 
            s=s+(final[i-1]-final[i]);
  
    }
  

    printf(")\nThe seek time is: %d",s);
 
}