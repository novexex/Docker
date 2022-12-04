#include <fcgiapp.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    FCGX_Init();
    FCGX_Request req;
    FCGX_InitRequest(&req, 0, 0);

    while (FCGX_Accept_r(&req) >= 0) {
        FCGX_FPrintF(req.out, "Content-Type: text/html\n\n");
        FCGX_FPrintF(req.out, "Hello world!");
        FCGX_Finish_r(&req);
    }

    return 0;
}
