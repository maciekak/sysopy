//
// Created by Michał Osadnik on 25/03/2018.
//
#include <stdlib.h>

int main() {
    int *dummy_array = malloc(sizeof(int) * 1000000000);
    for (int i = 0; i< 1000000000; i++) {
        dummy_array[i] = 9;
    }
    return 0;
}
