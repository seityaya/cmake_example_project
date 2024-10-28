#include "my_math.h"

int main(int argc, char* argv[]) {
    if (my_sum(1, 2) != 3) {
        return -1;
    }
    if (my_dif(3, 2) != 1) {
        return -1;
    }
    if (my_mul(1, 2) != 2) {
        return -1;
    }
    if (my_div(4, 2) != 2) {
        return -1;
    }
    if (my_mod(3, 2) != 1) {
        return -1;
    }
    return 0;
}
