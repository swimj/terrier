//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// deleter_proxy.h
//
// Identification: src/include/execution/proxy/deleter_proxy.h
//
// Copyright (c) 2015-2018, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#pragma once

#include "execution/proxy/proxy.h"
#include "execution/deleter.h"

namespace terrier::execution {


PROXY(Deleter) {
  /// We don't need access to internal fields, so use an opaque byte array
  DECLARE_MEMBER(0, char[sizeof(Deleter)], opaque);
  DECLARE_TYPE;

  /// Proxy Init() and Delete() in codegen::Deleter
  DECLARE_METHOD(Init);
  DECLARE_METHOD(Delete);
};

TYPE_BUILDER(Deleter, codegen::Deleter);


}  // namespace terrier::execution
