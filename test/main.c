#include "my_calc.h"

int main(int argc, char* argv[]) {
    if (my_calc(1, 2, 3) != 0) {
        return -1;
    }

    if (my_calc(1, 2, 3) == 0) {
        return 0;
    }
}
