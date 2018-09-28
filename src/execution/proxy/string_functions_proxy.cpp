//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// string_functions_proxy.cpp
//
// Identification: src/execution/proxy/string_functions_proxy.cpp
//
// Copyright (c) 2015-2018, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#include "execution/proxy/string_functions_proxy.h"

#include "execution/proxy/executor_context_proxy.h"
#include "execution/proxy/pool_proxy.h"
#include "execution/proxy/runtime_functions_proxy.h"

namespace terrier::execution {


// StrWithLen struct
DEFINE_TYPE(StrWithLen, "peloton::StrWithLen", str, length);

DEFINE_METHOD(peloton::function, StringFunctions, Ascii);
DEFINE_METHOD(peloton::function, StringFunctions, Like);
DEFINE_METHOD(peloton::function, StringFunctions, Length);
DEFINE_METHOD(peloton::function, StringFunctions, BTrim);
DEFINE_METHOD(peloton::function, StringFunctions, Trim);
DEFINE_METHOD(peloton::function, StringFunctions, LTrim);
DEFINE_METHOD(peloton::function, StringFunctions, RTrim);
DEFINE_METHOD(peloton::function, StringFunctions, Substr);
DEFINE_METHOD(peloton::function, StringFunctions, Repeat);
DEFINE_METHOD(peloton::function, StringFunctions, CompareStrings);
DEFINE_METHOD(peloton::function, StringFunctions, WriteString);
DEFINE_METHOD(peloton::function, StringFunctions, InputString);


}  // namespace terrier::execution
