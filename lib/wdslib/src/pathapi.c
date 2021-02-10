/*

Copyright (c) Microsoft Corporation
Reverse-engineered by github/masonleeback

*/

#include <Windows.h>

PWSTR GetCurrDirectory()
{
    PWSTR result = NULL;
    DWORD dirLen;
    DWORD errRes = ERROR_SUCCESS;

    dirLen = GetCurrentDirectory(0, 0);
    if (dirLen == NULL) {
        errRes = GetLastError();
        if (errRes == ERROR_SUCCESS) {
            goto end;
        }
        errRes = ERROR_GEN_FAILURE;
        goto end;
    }

    result = (wchar_t*)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(wchar_t) * dirLen);
    if (!result) {
        errRes = ERROR_OUTOFMEMORY;
        goto end;
    }

    if (GetCurrentDirectory(dirLen, result) == NULL) {
        errRes = GetLastError();
        if (errRes == ERROR_SUCCESS) {
            errRes = ERROR_GEN_FAILURE;
        }
        if (HeapFree(GetProcessHeap(), 0, result)) {
            result = NULL;
        }
    }

end:
    SetLastError(errRes);
    return result;
}
