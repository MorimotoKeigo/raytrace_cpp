#include "rayt.h"

int main()
{
    int nx = 200;
    int ny = 100;
    std::unique_ptr<rayt::Scene> scene(std::make_unique<rayt::Scene>(nx, ny));
    scene->render();

    return 0;
}

