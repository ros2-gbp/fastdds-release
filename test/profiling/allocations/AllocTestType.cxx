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
 * @file AllocTestType.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "AllocTestType.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define AllocTestType_max_cdr_typesize 4ULL;
#define AllocTestType_max_key_cdr_typesize 0ULL;

AllocTestType::AllocTestType()
{
    // unsigned long m_index
    m_index = 0;

}

AllocTestType::~AllocTestType()
{
}

AllocTestType::AllocTestType(
        const AllocTestType& x)
{
    m_index = x.m_index;
}

AllocTestType::AllocTestType(
        AllocTestType&& x) noexcept 
{
    m_index = x.m_index;
}

AllocTestType& AllocTestType::operator =(
        const AllocTestType& x)
{

    m_index = x.m_index;

    return *this;
}

AllocTestType& AllocTestType::operator =(
        AllocTestType&& x) noexcept
{

    m_index = x.m_index;

    return *this;
}

bool AllocTestType::operator ==(
        const AllocTestType& x) const
{

    return (m_index == x.m_index);
}

bool AllocTestType::operator !=(
        const AllocTestType& x) const
{
    return !(*this == x);
}

size_t AllocTestType::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return AllocTestType_max_cdr_typesize;
}

size_t AllocTestType::getCdrSerializedSize(
        const AllocTestType& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void AllocTestType::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_index;

}

void AllocTestType::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_index;
}

/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void AllocTestType::index(
        uint32_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint32_t AllocTestType::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint32_t& AllocTestType::index()
{
    return m_index;
}



size_t AllocTestType::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return AllocTestType_max_key_cdr_typesize;
}

bool AllocTestType::isKeyDefined()
{
    return false;
}

void AllocTestType::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

