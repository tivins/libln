#include <ln.h>

int main()
{
    ln_t out;
    ln_env_init();
    ln_init(&out);
    ln_pow(&out, 2, 12, NULL);
    ln_show(&out, " (result)\n");
    ln_free(&out);
    ln_env_free();
    return 0;
}