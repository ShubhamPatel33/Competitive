// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int seat_num = 0;
    printf("Enter Seat Number");
    scanf("%d",&seat_num);
    int g1[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int g2[12] = {13,14,15,16,17,18,19,20,21,22,23,24};
    int g3[12] = {25,26,27,28,29,30,31,32,33,34,35,36};
    int g4[12] = {37,38,39,40,41,42,43,44,45,46,47,48};
    int diff[12] = {11,9,7,5,3,1,1,3,5,7,9,11};
    char *diff_colors[12] = {"Green","Yellow","Blue","Blue","Yellow","Green","Green","Yellow","Blue","Blue","Yellow","Green"};
    int posofseat_num = 0;
    int i = 0;
    
    // Group 1 
    if(seat_num >= 1 && seat_num<=12){
        int posofseat_num=0;
        char *colorofseat_num;
        for(i=g1[0];i<=seat_num;i++){
            posofseat_num++;
        }
        //printf("Seat num = %d",posofseat_num);
        
        posofseat_num--;
        if(seat_num <=g1[5])
        {
            colorofseat_num = diff_colors[posofseat_num];
            posofseat_num = diff[posofseat_num] + seat_num;
            
        }
        else
        {
            colorofseat_num = diff_colors[posofseat_num];
            posofseat_num = seat_num - diff[posofseat_num];
        }
        printf("The Opposite Seat number is %d and Color is: %s",posofseat_num,colorofseat_num);
    }
    // Group 2
    if(seat_num >=13 && seat_num <=24){
        int posofseat_num=0;
        char *colorofseat_num;
        for(i=g2[0];i<=seat_num;i++){
            posofseat_num++;
        }
        //printf("Seat num = %d",posofseat_num);
        
        posofseat_num--;
        if(seat_num <=g2[5])
        {
            colorofseat_num = diff_colors[posofseat_num];
            posofseat_num = diff[posofseat_num] + seat_num;
            
        }
        else
        {
            colorofseat_num = diff_colors[posofseat_num];
            posofseat_num = seat_num - diff[posofseat_num];
        }
        printf("The Opposite Seat number is %d and Color is: %s",posofseat_num,colorofseat_num);
    }
    //Group3
    if(seat_num >=25 && seat_num <=36){
        int posofseat_num=0;
        char *colorofseat_num;
        for(i=g3[0];i<=seat_num;i++){
            printf("Executed");
            posofseat_num++;
        }
       
        printf("Seat %d",posofseat_num);
        
        posofseat_num--;
        if(seat_num <=g3[5])
        {
            colorofseat_num = diff_colors[posofseat_num];
            posofseat_num = diff[posofseat_num] + seat_num;
            
        }
        else
          {  colorofseat_num = diff_colors[posofseat_num];
            posofseat_num = seat_num - diff[posofseat_num];
          }
        printf("The Opposite Seat number is %d and Color is: %s",posofseat_num,colorofseat_num);
    }
    // Group 4
    if(seat_num >=37 && seat_num <=48){
        int posofseat_num=0;
        char *colorofseat_num;
        for(i=g4[0];i<=seat_num;i++){
            posofseat_num++;
        }
        //printf("Seat num = %d",posofseat_num);
        
        posofseat_num--;
        if(seat_num <=g4[5])
        {
            colorofseat_num = diff_colors[posofseat_num];
            posofseat_num = diff[posofseat_num] + seat_num;
            
        }
        else
            { colorofseat_num = diff_colors[posofseat_num];
            posofseat_num = seat_num - diff[posofseat_num];
            }
        printf("The Opposite Seat number is %d and Color is: %s",posofseat_num,colorofseat_num);
    }
    
    return 0;
}
