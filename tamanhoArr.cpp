#include <iostream>
int main (){
    int arr[] = {1, 2, 3,4,5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    printf("tamanho array:%d\n", tamanho);

    return 0;
}