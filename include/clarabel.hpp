#ifndef CLARABEL_H
#define CLARABEL_H

/* Generated with cbindgen:0.24.5 */

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>

namespace clarabel {

extern "C" {

void *CscMatrix_new(uintptr_t m,
                    uintptr_t n,
                    const uintptr_t *colptr,
                    const uintptr_t *rowval,
                    const double *nzval);

} // extern "C"

} // namespace clarabel

#endif // CLARABEL_H