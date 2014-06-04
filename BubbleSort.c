#include <stdio.h>

// Function to find biggest number in an array
//int find_biggest_number(int givenArray[], int array_len)
//{
//    
//    int a=0;
//    int retval = givenArray[0];
//    for (a=1; a<array_len; a++)
//                if (givenArray[a]>retval)
//                    retval = givenArray[a];
//    return retval;
//}//int biggestnumber


#define MAX_NUMS 10

int main()
{
    printf("Enter the numbers you want to sort.\n");
    int s;
    int i,j;
    
    //input for array
    int array[MAX_NUMS];
    for (i=0; i<MAX_NUMS; i++)
    {
        scanf("%d", &s);
        array[i]= s;
    }//end of scanner for
    
    //actual sorter
    for (i  = 0; i<MAX_NUMS; i++)
    {
    
        for (j=0; j<MAX_NUMS-1-i; j++)
        {
            if(array[j]>array[j+1])
            {
                //swap j and j+1
                int temp = array[j+1];
                array[j+1]= array[j];
                array[j]= temp;
            }
        }
    }
    
    //print of sort
    printf("Here are the sorted Numbers:\n");
    for (int printVar = 0; printVar<10; printVar++)
    {
        printf("%d\n", array[printVar]);
    }
    
    
    return 0;
}


/*
 EXPERIMENTS ON POINTERS
 
 
 //int find_circumference(int *address_of_radius)
 //{
 //    *address_of_radius = 100;
 //    printf("radius in function is  %d\n", *address_of_radius);
 //    return 10;
 //}

 
 int main(){
    int radius;
        scanf("%d", &radius);
    printf("radius before is %d\n", radius);

    int circumference= find_circumference(&radius);
    printf("radius after function is %d\n", radius);
}

int main(){
    
    int tony = 1;
    printf("address of tony in hex is %x\n", &tony);
    printf("address of tony in int is %d \n", &tony);
    printf("value of tony is %d", *tony);

}

int main() {
    int array[3];
    array[0]= 1;
    array[1]=2;
    array[2]=3;
    printf("address of array[0] in hex is %d\n", &array[0]);
    printf("address of array[1] in hex is %d\n", &array[1]);
    printf("address of array[2] in hex is %d\n", &array[2]);
    printf("%d\n", array);
}*/