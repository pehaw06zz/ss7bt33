#include<stdio.h>
int main(){
int arrayInt[5]={1,2,4,7,9};// co the thay doi 
int sochan=0;
printf("trong mang co 1,2,4,7,9: \n");
for(int i =0;i<5;i++){
    if (arrayInt[i]%2==0){
    	printf("so chan la; %d\n ",arrayInt[i]);
     sochan=1;	
    }
}
if(!sochan){
	printf("khong chua so chan");
}
return 0;
}

