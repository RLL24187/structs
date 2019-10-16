#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "structs.h"
struct villager {
  char* name; int id;
};


int main() {

    struct villager v0;
    struct villager v1;

    // struct villager *p0 = &v0;
    // struct villager *p1 = &v1;

    v0.name = "Heather";
    v0.id = 130;

    v1.name = "Gerry";
    v1.id = 90;

    printf("v0|| name: %s\t| id: %d\n", v0.name, v0.id);
    printf("v1|| name: %s\t| id: %d\n", v1.name, v1.id);

    printf("Testing examplevillager: \n");
    examplevillager();

    printf("Testing printvillager: \n");
    printvillager(v0);
    printvillager(v1);
    return 0;
 }
