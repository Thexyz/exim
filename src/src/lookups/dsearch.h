/* $Cambridge: exim/src/src/lookups/dsearch.h,v 1.3 2006/02/07 11:19:01 ph10 Exp $ */

/*************************************************
*     Exim - an Internet mail transport agent    *
*************************************************/

/* Copyright (c) University of Cambridge 1995 - 2006 */
/* See the file NOTICE for conditions of use and distribution. */

/* Header for the dsearch lookup */

extern void *dsearch_open(uschar *, uschar **);
extern BOOL  dsearch_check(void *, uschar *, int, uid_t *, gid_t *, uschar **);
extern int   dsearch_find(void *, uschar *, uschar *, int, uschar **, uschar **,
               BOOL *);
extern void  dsearch_close(void *);

/* End of lookups/dsearch.h */
