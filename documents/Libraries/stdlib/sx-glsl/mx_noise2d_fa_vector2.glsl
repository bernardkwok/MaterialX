#include "stdlib/sx-glsl/lib/sxnoise.glsl"

void mx_noise2d_fa_vector2(float amplitude, float pivot, vec2 texcoord, out vec2 result)
{
    vec3 value = sx_perlin_noise_vec3(texcoord);
    result = value.xy * amplitude + pivot;
}