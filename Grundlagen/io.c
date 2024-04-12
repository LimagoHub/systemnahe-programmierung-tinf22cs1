//
// Created by JoachimWagner on 12.04.2024.
//
#include <stdio.h>
#include "io.h"

static int y;

void io_setY(int neuesY) {
    // Prüfung
    y = neuesY;
}

int io_getY() {
    return y;
}


void io_ausgabe() {
    printf("Hallo Welt");
}
