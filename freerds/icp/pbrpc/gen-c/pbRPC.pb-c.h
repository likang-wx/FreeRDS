/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_pbRPC_2eproto__INCLUDED
#define PROTOBUF_C_pbRPC_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _Freerds__Pbrpc__RPCBase Freerds__Pbrpc__RPCBase;


/* --- enums --- */

typedef enum _Freerds__Pbrpc__RPCBase__RPCSTATUS {
  FREERDS__PBRPC__RPCBASE__RPCSTATUS__SUCCESS = 0,
  FREERDS__PBRPC__RPCBASE__RPCSTATUS__FAILED = 1,
  FREERDS__PBRPC__RPCBASE__RPCSTATUS__NOTFOUND = 2
} Freerds__Pbrpc__RPCBase__RPCSTATUS;

/* --- messages --- */

struct  _Freerds__Pbrpc__RPCBase
{
  ProtobufCMessage base;
  uint32_t tag;
  protobuf_c_boolean isresponse;
  Freerds__Pbrpc__RPCBase__RPCSTATUS status;
  uint32_t msgtype;
  protobuf_c_boolean has_payload;
  ProtobufCBinaryData payload;
  char *errordescription;
};
#define FREERDS__PBRPC__RPCBASE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&freerds__pbrpc__rpcbase__descriptor) \
    , 0, 0, FREERDS__PBRPC__RPCBASE__RPCSTATUS__SUCCESS, 0, 0,{0,NULL}, NULL }


/* Freerds__Pbrpc__RPCBase methods */
void   freerds__pbrpc__rpcbase__init
                     (Freerds__Pbrpc__RPCBase         *message);
size_t freerds__pbrpc__rpcbase__get_packed_size
                     (const Freerds__Pbrpc__RPCBase   *message);
size_t freerds__pbrpc__rpcbase__pack
                     (const Freerds__Pbrpc__RPCBase   *message,
                      uint8_t             *out);
size_t freerds__pbrpc__rpcbase__pack_to_buffer
                     (const Freerds__Pbrpc__RPCBase   *message,
                      ProtobufCBuffer     *buffer);
Freerds__Pbrpc__RPCBase *
       freerds__pbrpc__rpcbase__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   freerds__pbrpc__rpcbase__free_unpacked
                     (Freerds__Pbrpc__RPCBase *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Freerds__Pbrpc__RPCBase_Closure)
                 (const Freerds__Pbrpc__RPCBase *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor freerds__pbrpc__rpcbase__descriptor;
extern const ProtobufCEnumDescriptor    freerds__pbrpc__rpcbase__rpcstatus__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_pbRPC_2eproto__INCLUDED */
