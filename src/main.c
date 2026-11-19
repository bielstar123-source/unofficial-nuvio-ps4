/* Nuvio PS4 - launcher.
 * Abre o navegador do PS4 na pagina do Nuvio (GitHub Pages do proprio repo).
 * A URL e fixada na compilacao com -DNUVIO_URL=\"...\". */
#include <orbis/libkernel.h>

#ifndef NUVIO_URL
#define NUVIO_URL "https://example.invalid/"
#endif

/* Declarada aqui porque o header do toolchain a declara sem parametros. */
extern int sceSystemServiceLaunchWebBrowser(const char *url);

int main(void)
{
    sceKernelUsleep(1500000);               /* deixa o sistema terminar de abrir o app */
    sceSystemServiceLaunchWebBrowser(NUVIO_URL);
    for (;;) sceKernelUsleep(1000000);      /* o navegador assume a tela */
    return 0;
}
