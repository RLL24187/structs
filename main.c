#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "structs.h"
struct villager {
  char* name; int id;
};


int main() {

    struct villager s0;
    struct villager s1;

    struct villager *p0 = &s0;
    struct villager *p1 = &s1;

    s0.name = "Heather";
    s0.id = 130;

    s1.name = "Gerry";
    s1.id = 90;

    printf("s0|| name: %s\t| id: %d\n", s0.name, s0.id);
    printf("s1|| name: %s\t| id: %d\n", s1.name, s1.id);

    printf("Testing examplevillager: \n");
    examplevillager();
    return 0;
 }
