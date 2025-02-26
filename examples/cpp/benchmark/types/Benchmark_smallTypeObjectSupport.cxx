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
 * @file Benchmark_smallTypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "Benchmark_smallTypeObjectSupport.hpp"

#include <mutex>
#include <string>

#include <fastcdr/xcdr/external.hpp>
#include <fastcdr/xcdr/optional.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/xtypes/common.hpp>
#include <fastdds/dds/xtypes/type_representation/ITypeObjectRegistry.hpp>
#include <fastdds/dds/xtypes/type_representation/TypeObject.hpp>
#include <fastdds/dds/xtypes/type_representation/TypeObjectUtils.hpp>

#include "Benchmark_small.hpp"


using namespace eprosima::fastdds::dds::xtypes;

// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_BenchMarkSmall_type_identifier(
        TypeIdentifierPair& type_ids_BenchMarkSmall)
{

    ReturnCode_t return_code_BenchMarkSmall {eprosima::fastdds::dds::RETCODE_OK};
    return_code_BenchMarkSmall =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "BenchMarkSmall", type_ids_BenchMarkSmall);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_BenchMarkSmall)
    {
        StructTypeFlag struct_flags_BenchMarkSmall = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::APPENDABLE,
                false, false);
        QualifiedTypeName type_name_BenchMarkSmall = "BenchMarkSmall";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_BenchMarkSmall;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_BenchMarkSmall;
        CompleteTypeDetail detail_BenchMarkSmall = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_BenchMarkSmall, ann_custom_BenchMarkSmall, type_name_BenchMarkSmall.to_string());
        CompleteStructHeader header_BenchMarkSmall;
        header_BenchMarkSmall = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_BenchMarkSmall);
        CompleteStructMemberSeq member_seq_BenchMarkSmall;
        {
            TypeIdentifierPair type_ids_array;
            ReturnCode_t return_code_array {eprosima::fastdds::dds::RETCODE_OK};
            return_code_array =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "anonymous_array_char_16384", type_ids_array);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_array)
            {
                return_code_array =
                    eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                    "_char", type_ids_array);

                if (eprosima::fastdds::dds::RETCODE_OK != return_code_array)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "Array element TypeIdentifier unknown to TypeObjectRegistry.");
                    return;
                }
                bool element_identifier_anonymous_array_char_16384_ec {false};
                TypeIdentifier* element_identifier_anonymous_array_char_16384 {new TypeIdentifier(TypeObjectUtils::retrieve_complete_type_identifier(type_ids_array, element_identifier_anonymous_array_char_16384_ec))};
                if (!element_identifier_anonymous_array_char_16384_ec)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Array element TypeIdentifier inconsistent.");
                    return;
                }
                EquivalenceKind equiv_kind_anonymous_array_char_16384 = EK_COMPLETE;
                if (TK_NONE == type_ids_array.type_identifier2()._d())
                {
                    equiv_kind_anonymous_array_char_16384 = EK_BOTH;
                }
                CollectionElementFlag element_flags_anonymous_array_char_16384 = 0;
                PlainCollectionHeader header_anonymous_array_char_16384 = TypeObjectUtils::build_plain_collection_header(equiv_kind_anonymous_array_char_16384, element_flags_anonymous_array_char_16384);
                {
                    LBoundSeq array_bound_seq;
                        TypeObjectUtils::add_array_dimension(array_bound_seq, static_cast<LBound>(16384));

                    PlainArrayLElemDefn array_ldefn = TypeObjectUtils::build_plain_array_l_elem_defn(header_anonymous_array_char_16384, array_bound_seq,
                                eprosima::fastcdr::external<TypeIdentifier>(element_identifier_anonymous_array_char_16384));
                    if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                            TypeObjectUtils::build_and_register_l_array_type_identifier(array_ldefn, "anonymous_array_char_16384", type_ids_array))
                    {
                        EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "anonymous_array_char_16384 already registered in TypeObjectRegistry for a different type.");
                    }
                }
            }
            StructMemberFlag member_flags_array = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_array = 0x00000000;
            bool common_array_ec {false};
            CommonStructMember common_array {TypeObjectUtils::build_common_struct_member(member_id_array, member_flags_array, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_array, common_array_ec))};
            if (!common_array_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure array member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_array = "array";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_array;
            ann_custom_BenchMarkSmall.reset();
            CompleteMemberDetail detail_array = TypeObjectUtils::build_complete_member_detail(name_array, member_ann_builtin_array, ann_custom_BenchMarkSmall);
            CompleteStructMember member_array = TypeObjectUtils::build_complete_struct_member(common_array, detail_array);
            TypeObjectUtils::add_complete_struct_member(member_seq_BenchMarkSmall, member_array);
        }
        {
            TypeIdentifierPair type_ids_index;
            ReturnCode_t return_code_index {eprosima::fastdds::dds::RETCODE_OK};
            return_code_index =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_uint32_t", type_ids_index);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_index)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "index Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_index = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_index = 0x00000001;
            bool common_index_ec {false};
            CommonStructMember common_index {TypeObjectUtils::build_common_struct_member(member_id_index, member_flags_index, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_index, common_index_ec))};
            if (!common_index_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure index member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_index = "index";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_index;
            ann_custom_BenchMarkSmall.reset();
            CompleteMemberDetail detail_index = TypeObjectUtils::build_complete_member_detail(name_index, member_ann_builtin_index, ann_custom_BenchMarkSmall);
            CompleteStructMember member_index = TypeObjectUtils::build_complete_struct_member(common_index, detail_index);
            TypeObjectUtils::add_complete_struct_member(member_seq_BenchMarkSmall, member_index);
        }
        CompleteStructType struct_type_BenchMarkSmall = TypeObjectUtils::build_complete_struct_type(struct_flags_BenchMarkSmall, header_BenchMarkSmall, member_seq_BenchMarkSmall);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_BenchMarkSmall, type_name_BenchMarkSmall.to_string(), type_ids_BenchMarkSmall))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "BenchMarkSmall already registered in TypeObjectRegistry for a different type.");
        }
    }
}

