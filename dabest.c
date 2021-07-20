#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void type_pinakes2d(int** arr,int size,int size2);
int push(int **arr,int z,int m,int n,int x);

int main(void){
    int z=0,m=4,n=4,i=0,j=0;
    int **arr;
srand(time(NULL));

    printf("\t\tWELCOME TO DA BEST GAME\n \t\t\t**2_0_4_8**\n");
    
    arr=(int**) malloc(m*sizeof(int*));// malloc 1d    
    for(i=0;i<m;i++){
        arr[i]=(int*) malloc(n*sizeof(int));// 2d
    }
           for(i=0;i<m;i++)         //oles oi theseis me 0 wste na min exoume skoupidia kai # gia tin bitrina
        {
            for(j=0;j<n;j++)
                arr[i][j]=0;
            }
    while(1){
                                                              //TA TYXAI BALTA SE KANA FUNCTION GIA NA MPEI COPYCAT
                    i=rand()%m; //tyxaio 2 mesa stin while
                    j=rand()%n;
                    if(arr[i][j]==0)
                    arr[i][j]=2;
                    
                    
                        //i=rand()%m; //tyxaio 4 mesa stin while
                        //j=rand()%n;
                        //arr[i][j]=4;
                        
    type_pinakes2d(arr,m,n); //prwth print

    printf("\n4:< 8:^ 6:> 2:v ZZ\n");
    scanf("%d",&z);
    if(z==1)
    break;
    
    

    for(i=0;i<4;i++){
        
        push(arr,z,m,n,i);
    }
        
   // type_pinakes2d(arr,m,n); //prwth print
}
for(i=0;i<m;i++)free(arr[i]);
free(arr);
return 0;
}

//////////////////// F U N C T I O N S //////////////////////////////////////////////////////////////////////////

void type_pinakes2d(int** arr,int size,int size2)
{
	int i,j;
      printf("\t\t\t"); 


        printf("\n");
        printf("\t\t\t "); 

        for(i=0;i<size2;i++) //paules
        printf("--");
    printf("\n");
	for(i=0;i<size;i++)
	{ 
    printf("\t\t\t\b\b"); //to paw kentro
    printf("%d|  ",i+1); 
		for(j=0;j<size2;j++)
		{
			printf("%d  ",arr[i][j]);
		}
	printf("\n");}
}
int push(int **arr,int z,int m,int n,int x){ //y=0 int x gia na epilegw tin seira pou thelw meta apo auto mia fora mesa stin push
int j=0,k=0;
           

        switch(z){

        case 4:                     /////////////////////////////               4444444444444444444444

      for(k=0;k<n;k++)  {//meta to k tha mpei to j
       for(j=0;j<n;j++)//sorts
       {
           if(j+1<n){
           if(arr[x][j]==0 && arr[x][j+1]!=0)
           {
               arr[x][j]=arr[x][j+1];
               arr[x][j+1]=0;
           }
           }
       }
      }
      for(j=0;j<n;j++){//combos
        if(j+1<n){
         
            if(arr[x][j]==arr[x][j+1] && arr[x][j]!=0){
                arr[x][j]*=2;
                arr[x][j+1]=0;
            }
        }
      }
              for(k=0;k<n;k++)  {//meta to k tha mpei to j  sort meta apo ta combo anagkastika--plot holes
       for(j=0;j<n;j++)//sorts
       {
           if(j+1<n){
         
           if(arr[x][j]==0 && arr[x][j+1]!=0)
           {
               arr[x][j]=arr[x][j+1];
               arr[x][j+1]=0;
           }

           }
       }
      }               
        break;
        case 8:         ///////////////////                         88888888888888888888888888
          for(k=0;k<n;k++)  {//meta to k tha mpei to j
       for(j=0;j<n;j++)//sorts
       {
           if(j+1<n){
           if(arr[j][x]==0 && arr[j+1][x]!=0)
           {
               arr[j][x]=arr[j+1][x];
               arr[j+1][x]=0;
           }
           }
       }
      }
      for(j=0;j<n;j++){//combos
        if(j+1<n){
         
            if(arr[j][x]==arr[j+1][x] && arr[j][x]!=0){
                arr[j][x]*=2;
                arr[j+1][x]=0;
            }
        }
      }
              for(k=0;k<n;k++)  {//meta to k tha mpei to j  sort meta apo ta combo anagkastika--plot holes
       for(j=0;j<n;j++)//sorts
       {
           if(j+1<n){
         
           if(arr[j][x]==0 && arr[j+1][x]!=0)
           {
               arr[j][x]=arr[j+1][x];
               arr[j+1][x]=0;
           }

           }
       }
      }
        break;
        case 6:             /////////////////////////////
      for(k=0;k<n;k++)  {//>                                    6666666666666666666
       for(j=n;j>0;j--)//sorts
       {
           if(j-1>=0){
           if(arr[x][j]==0 && arr[x][j-1]!=0)
           {
               arr[x][j]=arr[x][j-1];
               arr[x][j-1]=0;
           }
           }
       }
      }
      for(j=n;j>0;j--){//combos
        if(j-1>=0){
         
            if(arr[x][j]==arr[x][j-1] && arr[x][j]!=0){
                arr[x][j]*=2;
                arr[x][j-1]=0;
            }
        }
      }
              for(k=0;k<n;k++)  {
       for(j=n;j>0;j--)//sorts
       {
           if(j-1>=0){
         
           if(arr[x][j]==0 && arr[x][j-1]!=0)
           {
               arr[x][j]=arr[x][j-1];
               arr[x][j-1]=0;
           }

           }
       }
      }
        break;
        case 2: 
        
                   /////////////////////////////      etsi k etsi
         for(k=0;k<n;k++)  {//meta to k tha mpei to j
       for(j=0;j<n;j++)//sorts
       {
           if(j+1<n){
           if(arr[j+1][x]==0 && arr[j][x]!=0)
           {
               arr[j+1][x]=arr[j][x];
               arr[j][x]=0;
           }
           }
       }
      }
      for(j=0;j<n;j++){//combos
        if(j+1<n){
            //if(j==0 || j==2)
            if(arr[j+1][x]==arr[j][x] && arr[j][x]!=0){
                arr[j+1][x]*=2;
                arr[j][x]=0;
            }
        }
      }
              for(k=0;k<n+1;k++)  {//meta to k tha mpei to j  sort meta apo ta combo anagkastika--plot holes
       for(j=0;j<n;j++)//sorts
       {
           if(j+1<n){
         
           if(arr[j+1][x]==0 && arr[j][x]!=0)
           {
               arr[j+1][x]=arr[j][x];
               arr[j][x]=0;
           }

           }
       }
      }
        break;
        default:
        printf("ti FASH\t\t.....\n");
        break;
    }
    
    return 0;
}
