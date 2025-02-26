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
 * @file XtypesTestsTypeDep.hpp
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef FAST_DDS_GENERATED__XTYPESTESTSTYPEDEP_HPP
#define FAST_DDS_GENERATED__XTYPESTESTSTYPEDEP_HPP

#include <cstdint>
#include <string>
#include <utility>
#include <fastcdr/cdr/fixed_size_string.hpp>
#include "XtypesTestsType1.hpp"
#include "XtypesTestsType2.hpp"
#include "XtypesTestsType3.hpp"

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(XTYPESTESTSTYPEDEP_SOURCE)
#define XTYPESTESTSTYPEDEP_DllAPI __declspec( dllexport )
#else
#define XTYPESTESTSTYPEDEP_DllAPI __declspec( dllimport )
#endif // XTYPESTESTSTYPEDEP_SOURCE
#else
#define XTYPESTESTSTYPEDEP_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define XTYPESTESTSTYPEDEP_DllAPI
#endif // _WIN32

/*!
 * @brief This class represents the structure TypeDep defined by the user in the IDL file.
 * @ingroup XtypesTestsTypeDep
 */
class TypeDep
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport TypeDep()
    {
    }

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~TypeDep()
    {
    }

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object TypeDep that will be copied.
     */
    eProsima_user_DllExport TypeDep(
            const TypeDep& x)
    {
                    m_content = x.m_content;

                    m_var_type1 = x.m_var_type1;

                    m_var_type2 = x.m_var_type2;

                    m_var_type3 = x.m_var_type3;

    }

    /*!
     * @brief Move constructor.
     * @param x Reference to the object TypeDep that will be copied.
     */
    eProsima_user_DllExport TypeDep(
            TypeDep&& x) noexcept
    {
        m_content = std::move(x.m_content);
        m_var_type1 = std::move(x.m_var_type1);
        m_var_type2 = std::move(x.m_var_type2);
        m_var_type3 = std::move(x.m_var_type3);
    }

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object TypeDep that will be copied.
     */
    eProsima_user_DllExport TypeDep& operator =(
            const TypeDep& x)
    {

                    m_content = x.m_content;

                    m_var_type1 = x.m_var_type1;

                    m_var_type2 = x.m_var_type2;

                    m_var_type3 = x.m_var_type3;

        return *this;
    }

    /*!
     * @brief Move assignment.
     * @param x Reference to the object TypeDep that will be copied.
     */
    eProsima_user_DllExport TypeDep& operator =(
            TypeDep&& x) noexcept
    {

        m_content = std::move(x.m_content);
        m_var_type1 = std::move(x.m_var_type1);
        m_var_type2 = std::move(x.m_var_type2);
        m_var_type3 = std::move(x.m_var_type3);
        return *this;
    }

    /*!
     * @brief Comparison operator.
     * @param x TypeDep object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const TypeDep& x) const
    {
        return (m_content == x.m_content &&
           m_var_type1 == x.m_var_type1 &&
           m_var_type2 == x.m_var_type2 &&
           m_var_type3 == x.m_var_type3);
    }

    /*!
     * @brief Comparison operator.
     * @param x TypeDep object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const TypeDep& x) const
    {
        return !(*this == x);
    }

    /*!
     * @brief This function copies the value in member content
     * @param _content New value to be copied in member content
     */
    eProsima_user_DllExport void content(
            const std::string& _content)
    {
        m_content = _content;
    }

    /*!
     * @brief This function moves the value in member content
     * @param _content New value to be moved in member content
     */
    eProsima_user_DllExport void content(
            std::string&& _content)
    {
        m_content = std::move(_content);
    }

    /*!
     * @brief This function returns a constant reference to member content
     * @return Constant reference to member content
     */
    eProsima_user_DllExport const std::string& content() const
    {
        return m_content;
    }

    /*!
     * @brief This function returns a reference to member content
     * @return Reference to member content
     */
    eProsima_user_DllExport std::string& content()
    {
        return m_content;
    }


    /*!
     * @brief This function copies the value in member var_type1
     * @param _var_type1 New value to be copied in member var_type1
     */
    eProsima_user_DllExport void var_type1(
            const Type1& _var_type1)
    {
        m_var_type1 = _var_type1;
    }

    /*!
     * @brief This function moves the value in member var_type1
     * @param _var_type1 New value to be moved in member var_type1
     */
    eProsima_user_DllExport void var_type1(
            Type1&& _var_type1)
    {
        m_var_type1 = std::move(_var_type1);
    }

    /*!
     * @brief This function returns a constant reference to member var_type1
     * @return Constant reference to member var_type1
     */
    eProsima_user_DllExport const Type1& var_type1() const
    {
        return m_var_type1;
    }

    /*!
     * @brief This function returns a reference to member var_type1
     * @return Reference to member var_type1
     */
    eProsima_user_DllExport Type1& var_type1()
    {
        return m_var_type1;
    }


    /*!
     * @brief This function copies the value in member var_type2
     * @param _var_type2 New value to be copied in member var_type2
     */
    eProsima_user_DllExport void var_type2(
            const Type2& _var_type2)
    {
        m_var_type2 = _var_type2;
    }

    /*!
     * @brief This function moves the value in member var_type2
     * @param _var_type2 New value to be moved in member var_type2
     */
    eProsima_user_DllExport void var_type2(
            Type2&& _var_type2)
    {
        m_var_type2 = std::move(_var_type2);
    }

    /*!
     * @brief This function returns a constant reference to member var_type2
     * @return Constant reference to member var_type2
     */
    eProsima_user_DllExport const Type2& var_type2() const
    {
        return m_var_type2;
    }

    /*!
     * @brief This function returns a reference to member var_type2
     * @return Reference to member var_type2
     */
    eProsima_user_DllExport Type2& var_type2()
    {
        return m_var_type2;
    }


    /*!
     * @brief This function copies the value in member var_type3
     * @param _var_type3 New value to be copied in member var_type3
     */
    eProsima_user_DllExport void var_type3(
            const Type3& _var_type3)
    {
        m_var_type3 = _var_type3;
    }

    /*!
     * @brief This function moves the value in member var_type3
     * @param _var_type3 New value to be moved in member var_type3
     */
    eProsima_user_DllExport void var_type3(
            Type3&& _var_type3)
    {
        m_var_type3 = std::move(_var_type3);
    }

    /*!
     * @brief This function returns a constant reference to member var_type3
     * @return Constant reference to member var_type3
     */
    eProsima_user_DllExport const Type3& var_type3() const
    {
        return m_var_type3;
    }

    /*!
     * @brief This function returns a reference to member var_type3
     * @return Reference to member var_type3
     */
    eProsima_user_DllExport Type3& var_type3()
    {
        return m_var_type3;
    }



private:

    std::string m_content;
    Type1 m_var_type1;
    Type2 m_var_type2;
    Type3 m_var_type3;

};

#endif // _FAST_DDS_GENERATED_XTYPESTESTSTYPEDEP_HPP_


