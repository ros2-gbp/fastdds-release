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
 * @file Benchmark_mediumCdrAux.hpp
 * This source file contains some definitions of CDR related functions.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef FAST_DDS_GENERATED__BENCHMARK_MEDIUMCDRAUX_HPP
#define FAST_DDS_GENERATED__BENCHMARK_MEDIUMCDRAUX_HPP

#include "Benchmark_medium.hpp"

constexpr uint32_t BenchMarkMedium_max_cdr_typesize {524296UL};
constexpr uint32_t BenchMarkMedium_max_key_cdr_typesize {0UL};


namespace eprosima {
namespace fastcdr {

class Cdr;
class CdrSizeCalculator;

eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const BenchMarkMedium& data);


} // namespace fastcdr
} // namespace eprosima

#endif // FAST_DDS_GENERATED__BENCHMARK_MEDIUMCDRAUX_HPP

