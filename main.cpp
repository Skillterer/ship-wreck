// main.cpp
#include "raylib.h"
#include "spaceship.hpp"

#define HEIGHT 800
#define WIDTH 600
#define TITLE "Ship Wreck"

int main(void)
{
    InitWindow(HEIGHT, WIDTH, TITLE);
    SetTargetFPS(60);

    Ship ship(400, 400, 2, 0);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ship.Movement();
        ship.Draw();

        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
