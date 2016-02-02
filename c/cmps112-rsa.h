#ifndef CMPS112_RSA_H
#define CMPS112_RSA_H

#include "bigint/BigInteger_c.h"

#include <stdlib.h>

typedef char* buffer_t;

size_t encrypt_message(
    bigint_handle_t key_n,
    bigint_handle_t key_e,
    buffer_t input_buffer,
    buffer_t* output_buffer_ptr,
    size_t message_len
);

size_t decrypt_message(
    bigint_handle_t key_n,
    bigint_handle_t key_d,
    buffer_t input_buffer,
    buffer_t* output_buffer_ptr
);

#endif /* CMPS112_RSA_H */