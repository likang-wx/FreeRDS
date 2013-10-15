/**
 * pbRPC - a simple, protocol buffer based RCP mechanism
 * Named pipe transport
 *
 * Copyright 2013 Thinstuff Technologies GmbH
 * Copyright 2013 Bernhard Miklautz <bmiklautz@thinstuff.at>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _PIPE_TRANSPORT_H
#define _PIPE_TRANSPORT_H

#include "pbrpc.h"
#include "pbrpc_transport.h"

pbRPCTransportContext* tp_npipe_new();
void tp_npipe_free(pbRPCTransportContext *context);
#endif //_PIPE_TRANSPORT_H
