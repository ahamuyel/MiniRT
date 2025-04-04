#include "vec3D.h"

// Equação do raio: P = ray_orig + t * ray_dir
double hit_sphere(t_vec3 center, double radius, t_vec3 ray_orig, t_vec3 ray_dir) {
    t_vec3 oc = {
        ray_orig.x - center.x,
        ray_orig.y - center.y,
        ray_orig.z - center.z
    };
    double a = ray_dir.x * ray_dir.x + ray_dir.y * ray_dir.y + ray_dir.z * ray_dir.z;
    double b = 2.0 * (oc.x * ray_dir.x + oc.y * ray_dir.y + oc.z * ray_dir.z);
    double c = (oc.x * oc.x + oc.y * oc.y + oc.z * oc.z) - radius * radius;
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
        return -1.0; // Sem interseção
    return (-b - sqrt(discriminant)) / (2.0 * a); // Retorna o 't' mais próximo
}