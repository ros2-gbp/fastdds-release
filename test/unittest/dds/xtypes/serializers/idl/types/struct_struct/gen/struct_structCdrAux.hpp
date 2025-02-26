// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file struct_structCdrAux.hpp
 * This source file contains some definitions of CDR related functions.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef FAST_DDS_GENERATED__STRUCT_STRUCTCDRAUX_HPP
#define FAST_DDS_GENERATED__STRUCT_STRUCTCDRAUX_HPP

#include "struct_struct.hpp"

constexpr uint32_t NestedStructElement_max_cdr_typesize {5UL};
constexpr uint32_t NestedStructElement_max_key_cdr_typesize {0UL};

constexpr uint32_t ParentStruct_max_cdr_typesize {280UL};
constexpr uint32_t ParentStruct_max_key_cdr_typesize {0UL};

constexpr uint32_t GrandparentStruct_max_cdr_typesize {8UL};
constexpr uint32_t GrandparentStruct_max_key_cdr_typesize {0UL};

constexpr uint32_t StructStruct_max_cdr_typesize {286UL};
constexpr uint32_t StructStruct_max_key_cdr_typesize {0UL};


namespace eprosima {
namespace fastcdr {

class Cdr;
class CdrSizeCalculator;

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const GrandparentStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const ParentStruct& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const NestedStructElement& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const StructStruct& data);


} // namespace fastcdr
} // namespace eprosima

#endif // FAST_DDS_GENERATED__STRUCT_STRUCTCDRAUX_HPP

