/*
 * Copyright (c) 2017 Ilya Kaliman
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef XM_BITMAP_H_INCLUDED
#define XM_BITMAP_H_INCLUDED

static inline void bitmap_set(void *p, unsigned int b)
{
  unsigned char *ptr = p;

  ptr[b / 8] |= 1U << (b & 7);
}

static inline void bitmap_clear(void *p, unsigned int b)
{
  unsigned char *ptr = p;

  ptr[b / 8] &= ~(1U << (b & 7));
}

static inline int bitmap_test(void *p, unsigned int b)
{
  unsigned char *ptr = p;

  return (ptr[b / 8] >> (b & 7)) & 1;
}

#endif /* XM_BITMAP_H_INCLUDED */
