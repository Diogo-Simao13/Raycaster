//-----------------------------------------------------
// feito por - diogo simão 2013
// 
//-----------------------------------------------------

#include "raylib.h"
#include "math.h"

#define alturaMAP  6
#define larguraMAP  10
#define TAMparede 65

//player vars

float speed = 0.1f;
float playerX = 320.0f;
float playerY = 240.0f;
float rot = 90.0f;

int playerParede = ((int)pla)

Vector2 Origen = {10, 10};

int map [alturaMAP][larguraMAP] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,1,0,1},
    {1,0,0,0,0,0,0,1,0,1},
    {1,1,0,0,0,0,0,0,0,1},
    {1,1,0,0,0,0,0,0,0,1},
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

    ClearBackground(WHITE);

    Rectangle rec1 = {playerX, playerY, 20, 20};
    DrawRectanglePro(rec1, Origen, rot, GREEN);
    
    if (IsKeyDown(KEY_UP)) {
        float rad = rot * (PI / 180);
        playerX += cos(rad) * speed;
        playerY += sin(rad) * speed;
    }

    if (IsKeyDown(KEY_DOWN)) {
        float rad = rot * (PI / 180);
        playerX -= cos(rad) * speed;
        playerY -= sin(rad) * speed;
    }

    if (IsKeyDown(KEY_LEFT)) {
        rot -= speed;
    }

    if (IsKeyDown(KEY_RIGHT)) {
        rot += speed;
    }

    if ()
    {
        /* code */
    }
    
    EndDrawing();
    }
    return 0;
}