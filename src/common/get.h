/* $Id$ */

/*
 * Copyright (c) 2001-2010 Aaron Turner.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the names of the copyright owners nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
 * IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#ifndef __GET_H__
#define __GET_H__

#include "config.h"
#include "defines.h"
#include "common.h"


int get_l2len(const u_char *pktdata, const int datalen, const int datalink);

u_int16_t get_l2protocol(const u_char *pktdata, const int datalen, const int datalink);

void *get_layer4_v4(const ipv4_hdr_t *ip_hdr);
void *get_layer4_v6(const ipv6_hdr_t *ip_hdr);

u_int8_t get_ipv6_l4proto(const ipv6_hdr_t *ip6_hdr);
void *get_ipv6_next(struct tcpr_ipv6_ext_hdr_base *exthdr);

const u_char *get_ipv4(const u_char *pktdata, int datalen, int datalink, u_char **newbuff);
const u_char *get_ipv6(const u_char *pktdata, int datalen, int datalink, u_char **newbuff);

u_int32_t get_name2addr4(const char *hostname, u_int8_t dnslookup);
const char *get_addr2name4(const u_int32_t ip, u_int8_t dnslookup);
const char *get_addr2name6(const struct tcpr_in6_addr *addr, u_int8_t dnslookup);
const char *get_pcap_version(void);

int get_name2addr6(const char *hostname, u_int8_t dnslookup, struct tcpr_in6_addr *addr);


const char *get_cidr2name(const tcpr_cidr_t *cidr_ptr, u_int8_t dnslookup);


#endif

/*
 Local Variables:
 mode:c
 indent-tabs-mode:nil
 c-basic-offset:4
 End:
*/

