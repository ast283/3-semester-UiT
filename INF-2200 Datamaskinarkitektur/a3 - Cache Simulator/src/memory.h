/** @file memory.h
 *  @brief Public API of memory hierarchy.
 *  @see memory.c
 */

#ifndef MEMORY_H
#define MEMORY_H

#include "common.h"

/* data_t can be any 32-bit type, such as (unsigned long), (void *) or size_t
 * (on 32-bit x86).
 */
typedef unsigned long data_t;

/** Initialize memory hierarchy.
 */
void memory_init(void);

/** Fetch instruction at given memory address.
 *
 *  @param[in] address Memory address of instruction.
 *  @param[out] data Instruction data returned by reference.
 */
void memory_fetch(unsigned int address, data_t *data, cache_t *l1Ins, cache_t *l2Uni);

/** Read data from memory at given memory address.
 *
 *  @param[in] address Memory address to read from.
 *  @param[out] data Memory data returned by reference.
 */
void memory_read(unsigned int address, data_t *data, cache_t *l1Data, cache_t *l2Uni);

/** Write to memory at given memory address.
 *
 *  @param[in] address Memory address to write to.
 *  @param[in] data Data to write to memory.
 */
void memory_write(unsigned int address, data_t *data, cache_t *l1Data, cache_t *l2Uni);

/** Clean up and deinitialize memory hierarchy.
 */
void memory_finish (void);

#endif
