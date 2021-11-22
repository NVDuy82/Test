#include <cstdio>
#include <conio.h>
#include <math.h>
#include <cassert>

struct x2quadratic{
    struct tup {
        float x1 = NULL;
        bool b1 = true;
        float x2 = NULL;
        bool b2 = true;
    };

    tup func(const float &a, const float &b, const float &c) {
        tup res;

        if (a == 0){
            res.b2 = false;
            if (b == 0){
                if (c == 0){
                    res.b1 = false;
                } else {
                    // ????????
                }
            } else {
                res.x1 = -c / b;
            }
        } else {
            float dComma = b * b / 4 - a * c;
            if (dComma == 0) {
                res.x1 = res.x2 = -b / (2 * a);
            } else if (dComma > 0) {
                res.x1 = (-b / 2 - sqrt(dComma)) / a;
                res.x2 = (-b / 2 + sqrt(dComma)) / a;
            }
        }
        return res;
    }

    tup res;
    x2quadratic(const float &a, const float &b, const float &c){
        res = this->func(a, b, c);
    }
};

int main() {
    float a, b, c;
    // Input
    printf("Solve: ax2 + bx + c = 0\n");
	printf("Enter a:");
    scanf("%f", &a);
    printf("Enter b:");
    scanf("%f", &b);
    printf("Enter c:");
    scanf("%f", &c);

    // Output
    x2quadratic *res = new x2quadratic(a, b, c);
    if (!(res->res.x1 != NULL || b*b + c*c == 0)){
        return 0;
    };
    printf("x1 = %f\n", res->res.x1);
    if (!(res->res.x2 != NULL)){
        return 0;
    };
    printf("x2 = %f\n", res->res.x2);

    //End main
	return 0;
}