#ifndef VEC3D_H

#define VEC3D_H

#include <math.h>
#include <stdio.h>

typedef struct s_vec3 {
    double x, y, z;
} t_vec3;

// Equação do raio: P = ray_orig + t * ray_dir
double hit_sphere(t_vec3 center, double radius, t_vec3 ray_orig, t_vec3 ray_dir);

#endif