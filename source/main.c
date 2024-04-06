#include "raylib.h"
#include "test.h"

int main(void)
{
    InitWindow(valueButBetter, value, "Flappy Bird");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

            ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}