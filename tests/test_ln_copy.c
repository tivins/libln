#include <ln.h>

int main()
{
    ln_t num1, num2;
    ln_env_init();
    ln_init(&num1);
    ln_init(&num2);
    ln_append_int(&num1, 1239);
    ln_copy(&num1, &num2);
    ln_show(&num2, " (result)\n");
    ln_free(&num1);
    ln_free(&num2);
    ln_env_free();
    return 0;
}