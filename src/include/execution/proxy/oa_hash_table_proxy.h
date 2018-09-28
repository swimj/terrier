//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// oa_hash_table_proxy.h
//
// Identification: src/include/execution/proxy/oa_hash_table_proxy.h
//
// Copyright (c) 2015-2018, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#pragma once

#include "execution/proxy/proxy.h"
#include "execution/runtime/oa_hash_table.h"

namespace terrier::execution {


PROXY(KeyValueList) {
  DECLARE_MEMBER(0, int32_t, capacity);
  DECLARE_MEMBER(1, int32_t, size);
  DECLARE_TYPE;
};

PROXY(OAHashEntry) {
  DECLARE_MEMBER(0, util::OAHashTable::KeyValueList *, kv_list);
  DECLARE_MEMBER(0, uint64_t, hash);
  DECLARE_TYPE;
};

PROXY(OAHashTable) {
  DECLARE_MEMBER(0, util::OAHashTable::HashEntry *, buckets);
  DECLARE_MEMBER(1, int64_t, num_buckets);
  DECLARE_MEMBER(2, int64_t, bucket_mask);
  DECLARE_MEMBER(3, int64_t, num_occupied_buckets);
  DECLARE_MEMBER(4, int64_t, num_entries);
  DECLARE_MEMBER(5, int64_t, resize_threshold);
  DECLARE_MEMBER(6, int64_t, entry_size);
  DECLARE_MEMBER(7, int64_t, key_size);
  DECLARE_MEMBER(8, int64_t, value_size);

  DECLARE_TYPE;

  DECLARE_METHOD(Init);
  DECLARE_METHOD(StoreTuple);
  DECLARE_METHOD(Destroy);
};

TYPE_BUILDER(KeyValueList, util::OAHashTable::KeyValueList);
TYPE_BUILDER(OAHashEntry, util::OAHashTable::HashEntry);
TYPE_BUILDER(OAHashTable, util::OAHashTable);


}  // namespace terrier::execution