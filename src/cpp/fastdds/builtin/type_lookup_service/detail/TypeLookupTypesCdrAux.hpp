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
 * @file TypeLookupTypesCdrAux.hpp
 * This source file contains some definitions of CDR related functions.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef FAST_DDS_GENERATED__EPROSIMA_FASTDDS_DDS_BUILTIN_TYPELOOKUPTYPESCDRAUX_HPP
#define FAST_DDS_GENERATED__EPROSIMA_FASTDDS_DDS_BUILTIN_TYPELOOKUPTYPESCDRAUX_HPP

#include "TypeLookupTypes.hpp"

constexpr uint32_t eprosima_fastdds_dds_builtin_TypeLookup_Reply_max_cdr_typesize {116UL};
constexpr uint32_t eprosima_fastdds_dds_builtin_TypeLookup_Reply_max_key_cdr_typesize {0UL};

















constexpr uint32_t eprosima_fastdds_dds_builtin_TypeLookup_getTypes_In_max_cdr_typesize {24UL};
constexpr uint32_t eprosima_fastdds_dds_builtin_TypeLookup_getTypes_In_max_key_cdr_typesize {0UL};




































constexpr uint32_t eprosima_fastdds_dds_builtin_TypeLookup_getTypeDependencies_Out_max_cdr_typesize {72UL};
constexpr uint32_t eprosima_fastdds_dds_builtin_TypeLookup_getTypeDependencies_Out_max_key_cdr_typesize {0UL};












constexpr uint32_t eprosima_fastdds_dds_builtin_TypeLookup_getTypeDependencies_In_max_cdr_typesize {72UL};
constexpr uint32_t eprosima_fastdds_dds_builtin_TypeLookup_getTypeDependencies_In_max_key_cdr_typesize {0UL};










constexpr uint32_t eprosima_fastdds_dds_builtin_TypeLookup_getTypes_Out_max_cdr_typesize {44UL};
constexpr uint32_t eprosima_fastdds_dds_builtin_TypeLookup_getTypes_Out_max_key_cdr_typesize {0UL};
















constexpr uint32_t eprosima_fastdds_dds_builtin_TypeLookup_Request_max_cdr_typesize {364UL};
constexpr uint32_t eprosima_fastdds_dds_builtin_TypeLookup_Request_max_key_cdr_typesize {0UL};







































namespace eprosima {
namespace fastcdr {

class Cdr;
class CdrSizeCalculator;

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::dds::builtin::TypeLookup_getTypes_In& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::dds::builtin::TypeLookup_getTypes_Out& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::dds::builtin::TypeLookup_getTypeDependencies_In& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::dds::builtin::TypeLookup_getTypeDependencies_Out& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::dds::builtin::TypeLookup_Request& data);

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::dds::builtin::TypeLookup_Reply& data);


} // namespace fastcdr
} // namespace eprosima

#endif // FAST_DDS_GENERATED__EPROSIMA_FASTDDS_DDS_BUILTIN_TYPELOOKUPTYPESCDRAUX_HPP

