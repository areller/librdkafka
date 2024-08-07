/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8-dev */

#ifndef PB_OPENTELEMETRY_PROTO_RESOURCE_V1_OPENTELEMETRY_PROTO_RESOURCE_V1_RESOURCE_PB_H_INCLUDED
#define PB_OPENTELEMETRY_PROTO_RESOURCE_V1_OPENTELEMETRY_PROTO_RESOURCE_V1_RESOURCE_PB_H_INCLUDED
#include <nanopb/pb.h>
#include "opentelemetry/common.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
/* Resource information. */
typedef struct _opentelemetry_proto_resource_v1_Resource {
    /* Set of attributes that describe the resource.
 Attribute keys MUST be unique (it is not allowed to have more than one
 attribute with the same key). */
    pb_callback_t attributes;
    /* dropped_attributes_count is the number of dropped attributes. If the value is 0, then
 no attributes were dropped. */
    uint32_t dropped_attributes_count;
} opentelemetry_proto_resource_v1_Resource;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define opentelemetry_proto_resource_v1_Resource_init_default {{{NULL}, NULL}, 0}
#define opentelemetry_proto_resource_v1_Resource_init_zero {{{NULL}, NULL}, 0}

/* Field tags (for use in manual encoding/decoding) */
#define opentelemetry_proto_resource_v1_Resource_attributes_tag 1
#define opentelemetry_proto_resource_v1_Resource_dropped_attributes_count_tag 2

/* Struct field encoding specification for nanopb */
#define opentelemetry_proto_resource_v1_Resource_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  attributes,        1) \
X(a, STATIC,   SINGULAR, UINT32,   dropped_attributes_count,   2)
#define opentelemetry_proto_resource_v1_Resource_CALLBACK pb_default_field_callback
#define opentelemetry_proto_resource_v1_Resource_DEFAULT NULL
#define opentelemetry_proto_resource_v1_Resource_attributes_MSGTYPE opentelemetry_proto_common_v1_KeyValue

extern const pb_msgdesc_t opentelemetry_proto_resource_v1_Resource_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define opentelemetry_proto_resource_v1_Resource_fields &opentelemetry_proto_resource_v1_Resource_msg

/* Maximum encoded size of messages (where known) */
/* opentelemetry_proto_resource_v1_Resource_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
