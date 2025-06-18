//-----------------------------------------------------
// feito por - diogo simão 2013
// 
//-----------------------------------------------------
#include "raylib.h"
#include "math.h"

#define alturaMAP  6
#define larguraMAP  10
#define TAMparede 50

int map [alturaMAP][larguraMAP] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,0,0,0,0,1},
    {1,1,1,1,1,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1}
};

int main() {
    InitWindow(640, 480, "jogo");
    BeginDrawing();
    while (!WindowShouldClose()) {
        for (int x = 0; x < larguraMAP; x++) {
            for (int y = 0; y < alturaMAP; y++) {
                if (map[y][x] == 1) {
                    DrawRectangle(x * TAMparede, y * TAMparede, TAMparede, TAMparede, GRAY);
                }
            }
        }
    EndDrawing();
    }
    return 0;
}