#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        }
        if(c==0)
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
