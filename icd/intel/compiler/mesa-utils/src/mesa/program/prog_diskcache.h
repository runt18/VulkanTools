/* -*- c -*- */
/*
 * Copyright © 2013 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#pragma once
#ifndef PROGRAM_DISKCACHE_H
#define PROGRAM_DISKCACHE_H

#include "main/mtypes.h"

#ifdef __cplusplus
extern "C" {
#endif

int
mesa_program_diskcache_init(struct gl_context *ctx);

int
mesa_program_diskcache_cache(struct gl_context *ctx, struct gl_shader_program *prog);

int
mesa_program_diskcache_find(struct gl_context *ctx, struct gl_shader_program *prog);

extern int
mesa_shader_diskcache_find(struct gl_context *ctx, struct gl_shader *shader);

extern int
mesa_shader_diskcache_cache(struct gl_context *ctx, struct gl_shader *shader);

int
mesa_shader_diskcache_init(struct gl_context *ctx);

#ifdef __cplusplus
}
#endif

#endif /* PROGRAM_DISKCACHE_H */
