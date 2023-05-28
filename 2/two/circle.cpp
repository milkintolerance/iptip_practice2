#include "circle.h"
#include <cmath>
circle:: circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}
void circle::set_circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}
float circle::square() {
    return M_PI * radius * radius;
}
bool circle::triangle_around(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float S = sqrt(p * (p - a) * (p - b) * (p - c));
    float R = (a * b * c) / (4 * S);
    if (radius >= R) {
        return true;
    }
    else {
        return false;
    }
}
bool circle::triangle_in(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float S = sqrt((p - a) * (p - b) * (p - c));
    float r = S / p;
    if (radius <= r) {
        return true;
    }
    else {
        return false;
    }
}
bool circle::check_circle(float r, float x_cntr, float y_cntr) {
    float distance = sqrt(pow(x_center - x_cntr, 2) + pow(y_center - y_cntr, 2));
    return distance <= radius + r;
}
float circle::get_radius() {
    return radius;
}

float circle::get_x_center() {
    return x_center;
}

float circle::get_y_center() {
    return y_center;
}