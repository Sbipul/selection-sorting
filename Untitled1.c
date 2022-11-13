#include<stdio.h>
int main()
{
    int N = 8,i,j;
    int arr[8] = {2,8,6,1,7,69,82,12};
    int sorted[8];
    for(j=0; j<N; j++)
    {
        int min = arr[0];
        int min_index = 0;
        for(i=0; i<N; i++)
        {
            printf("%d,",arr[i]);
        };
        printf("\n");
        for(i=0; i<N; i++)
        {
            if(arr[i]<min)
            {
                min = arr[i];
                min_index = i;
            };
        };
        sorted[j] = min;
        arr[min_index] = 999;
        for(i=0; i<N; i++)
        {
            printf("%d,",arr[i]);
        };
        printf("\n");
    };
    for(i=0; i<N; i++)
    {
        printf("%d,",sorted[i]);
    };


    return 0;
}
