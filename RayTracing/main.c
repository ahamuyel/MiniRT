#include "vec3D.h"

int main() {
    int width = 800, height = 600;
    printf("P3\n%d %d\n255\n", width, height);

    t_vec3 ray_orig = {0, 0, 0};
    t_vec3 sphere_center = {0, 0, -5};
    double sphere_radius = 2.0;

    for (int y = height - 1; y >= 0; y--) {
        for (int x = 0; x < width; x++) {
            double u = (2.0 * x / (width - 1)) - 1.0;
            double v = (2.0 * y / (height - 1)) - 1.0;
            t_vec3 ray_dir = {u, v, -1};

            double t = hit_sphere(sphere_center, sphere_radius, ray_orig, ray_dir);
            if (t > 0) {
                printf("255 0 0\n"); // Vermelho para a esfera
            } else {
                printf("0 0 255\n"); // Azul para o fundo
            }
        }
    }
    return 0;
}