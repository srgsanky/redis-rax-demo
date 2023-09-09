#include <stdio.h>
#include "rax/rax.h"

void showRaxInfo(rax *r) {
    printf("############# Rax info ##############\n");
    printf("Size of rax: %lu\n", raxSize(r));
    raxShow(r);
    printf("\n");
}

int main() {
    // Create rax
    rax *fruits = raxNew();

    raxInsert(fruits, "Orange", 6, "My favorite", NULL);

    showRaxInfo(fruits);

    void *previousData;
    raxInsert(fruits, "Orange", 6, "My favorite during spring time", &previousData);
    printf("Updated orange. Previous data: %s\n", (char *)previousData);

    showRaxInfo(fruits);

    raxInsert(fruits, "Orangelo", 8, "Just another fruit with common prefix", NULL);

    showRaxInfo(fruits);

    raxRemove(fruits, "Orange", 6, &previousData);

    showRaxInfo(fruits);

    // Destroy the rax
    raxFree(fruits);

    return 0;
}