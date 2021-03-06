
/*
 * !!! DO NOT EDIT DIRECTLY !!!
 * This file was automatically generated from the following template:
 *
 * src/subsys/ngx_subsys_lua_time.h.tt2
 */


/*
 * Copyright (C) Xiaozhe Wang (chaoslawful)
 * Copyright (C) Yichun Zhang (agentzh)
 */


#ifndef _NGX_STREAM_LUA_TIME_H_INCLUDED_
#define _NGX_STREAM_LUA_TIME_H_INCLUDED_


#include "ngx_stream_lua_common.h"


void ngx_stream_lua_inject_time_api(lua_State *L);
void ngx_stream_lua_inject_req_time_api(lua_State *L);


#endif /* _NGX_STREAM_LUA_TIME_H_INCLUDED_ */

/* vi:set ft=c ts=4 sw=4 et fdm=marker: */
