
#define RSDP 1
#define CATEGORY_3 1
#define SPEED 1

#define NO_TREES 1

/* liboqs-edit: when compiling avx2 just assume that Intel Instrinsics are available */
#define IMPLEMENTATION_clean

/* PQClean-edit: avoid VLA */
#define CSPRNG_INPUT_LENGTH (SALT_LENGTH_BYTES+SEED_LENGTH_BYTES)

/* PQClean-edit: skip asserts so that verify() always returns a value */
#define SKIP_ASSERT

/* Undefine unused macros to facilitate dead code removal using unifdef */
#undef SHA_3_LIBKECCAK
/* Variant */
#undef RSDPG
/* Category */
#undef CATEGORY_1
#undef CATEGORY_5
/* Target */
#undef BALANCED
#undef SIG_SIZE
