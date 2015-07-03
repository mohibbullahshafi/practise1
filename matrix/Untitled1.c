#include <stdio.h>
#include <math.h>

int main()
{
    int array[100];
    int i, j, key, n, cas = 1;

    while (scanf("%d", &n) != EOF){
            for (i = 0; i < n ; i++ ){
            scanf("%d", &array[i]);
        }

        scanf("%d", &key);

        for (i = 0; i < n ; i++ ){
            if (array[i] == key){
                break;
            }
        }

        printf("Case %d: ",cas);
        cas++;
        if (i != n){
            printf("%d\n", i + 1);
        }
        else{
            printf("No\n");
        }
    }





    return 0;
}
