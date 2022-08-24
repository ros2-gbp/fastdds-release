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

/**
 * @file RTPSDomain.h
 */

#ifndef _FASTDDS_RTPS_DOMAIN_H_
#define _FASTDDS_RTPS_DOMAIN_H_

#include <fastdds/rtps/common/Types.h>
#include <fastdds/rtps/history/IPayloadPool.h>

#include <fastdds/rtps/attributes/RTPSParticipantAttributes.h>

#include <atomic>
#include <mutex>
#include <set>

namespace eprosima {
namespace fastrtps {
namespace rtps {

class RTPSParticipantImpl;
class RTPSParticipant;
class RTPSParticipantListener;
class RTPSWriter;
class WriterAttributes;
class WriterHistory;
class WriterListener;
class RTPSReader;
class ReaderAttributes;
class ReaderHistory;
class ReaderListener;
class RTPSDomainImpl;

/**
 * Class RTPSDomain,it manages the creation and destruction of RTPSParticipant RTPSWriter and RTPSReader. It stores
 * a list of all created RTPSParticipant. Is has only static methods.
 * @ingroup RTPS_MODULE
 */
class RTPSDomain
{

    friend class RTPSDomainImpl;

public:

    /**
     * Method to shut down all RTPSParticipants, readers, writers, etc.
     * It must be called at the end of the process to avoid memory leaks.
     * It also shut downs the DomainRTPSParticipant.
     */
    RTPS_DllAPI static void stopAll();

    /**
     * @brief Create a RTPSParticipant.
     * @param domain_id DomainId to be used by the RTPSParticipant (80 by default).
     * @param attrs RTPSParticipant Attributes.
     * @param plisten Pointer to the ParticipantListener.
     * @return Pointer to the RTPSParticipant.
     */
    RTPS_DllAPI static RTPSParticipant* createParticipant(
            uint32_t domain_id,
            const RTPSParticipantAttributes& attrs,
            RTPSParticipantListener* plisten = nullptr);

    /**
     * @brief Create a RTPSParticipant.
     * @param domain_id DomainId to be used by the RTPSParticipant (80 by default).
     * @param enabled True if the RTPSParticipant should be enabled on creation. False if it will be enabled later with RTPSParticipant::enable()
     * @param attrs RTPSParticipant Attributes.
     * @param plisten Pointer to the ParticipantListener.
     * @return Pointer to the RTPSParticipant.
     */
    RTPS_DllAPI static RTPSParticipant* createParticipant(
            uint32_t domain_id,
            bool enabled,
            const RTPSParticipantAttributes& attrs,
            RTPSParticipantListener* plisten = nullptr);

    /**
     * Create a RTPSWriter in a participant.
     * @param p Pointer to the RTPSParticipant.
     * @param watt Writer Attributes.
     * @param hist Pointer to the WriterHistory.
     * @param listen Pointer to the WriterListener.
     * @return Pointer to the created RTPSWriter.
     */
    RTPS_DllAPI static RTPSWriter* createRTPSWriter(
            RTPSParticipant* p,
            WriterAttributes& watt,
            WriterHistory* hist,
            WriterListener* listen = nullptr);

    /**
     * Create a RTPSWriter in a participant using a custom payload pool.
     * @param p Pointer to the RTPSParticipant.
     * @param watt Writer Attributes.
     * @param payload_pool Shared pointer to the IPayloadPool
     * @param hist Pointer to the WriterHistory.
     * @param listen Pointer to the WriterListener.
     * @return Pointer to the created RTPSWriter.
     */
    RTPS_DllAPI static RTPSWriter* createRTPSWriter(
            RTPSParticipant* p,
            WriterAttributes& watt,
            const std::shared_ptr<IPayloadPool>& payload_pool,
            WriterHistory* hist,
            WriterListener* listen = nullptr);

    /**
     * Remove a RTPSWriter.
     * @param writer Pointer to the writer you want to remove.
     * @return  True if correctly removed.
     */
    RTPS_DllAPI static bool removeRTPSWriter(
            RTPSWriter* writer);

    /**
     * Create a RTPSReader in a participant.
     * @param p Pointer to the RTPSParticipant.
     * @param ratt Reader Attributes.
     * @param hist Pointer to the ReaderHistory.
     * @param listen Pointer to the ReaderListener.
     * @return Pointer to the created RTPSReader.
     */
    RTPS_DllAPI static RTPSReader* createRTPSReader(
            RTPSParticipant* p,
            ReaderAttributes& ratt,
            ReaderHistory* hist,
            ReaderListener* listen = nullptr);

    /**
     * Create a RTPSWriter in a participant using a custom payload pool.
     * @param p Pointer to the RTPSParticipant.
     * @param ratt Reader Attributes.
     * @param payload_pool Shared pointer to the IPayloadPool
     * @param hist Pointer to the ReaderHistory.
     * @param listen Pointer to the ReaderListener.
     * @return Pointer to the created RTPSReader.
     */
    RTPS_DllAPI static RTPSReader* createRTPSReader(
            RTPSParticipant* p,
            ReaderAttributes& ratt,
            const std::shared_ptr<IPayloadPool>& payload_pool,
            ReaderHistory* hist,
            ReaderListener* listen = nullptr);

    /**
     * Remove a RTPSReader.
     * @param reader Pointer to the reader you want to remove.
     * @return  True if correctly removed.
     */
    RTPS_DllAPI static bool removeRTPSReader(
            RTPSReader* reader);

    /**
     * Remove a RTPSParticipant and delete all its associated Writers, Readers, resources, etc.
     * @param[in] p Pointer to the RTPSParticipant;
     * @return True if correct.
     */
    RTPS_DllAPI static bool removeRTPSParticipant(
            RTPSParticipant* p);

    /**
     * Set the maximum RTPSParticipantID.
     * @param maxRTPSParticipantId ID.
     */
    static inline void setMaxRTPSParticipantId(
            uint32_t maxRTPSParticipantId)
    {
        m_maxRTPSParticipantID = maxRTPSParticipantId;
    }

    /**
     * Creates a RTPSParticipant as default server or client if ROS_MASTER_URI environment variable is set.
     * @param domain_id DDS domain associated
     * @param enabled True if the RTPSParticipant should be enabled on creation. False if it will be enabled later with RTPSParticipant::enable()
     * @param attrs RTPSParticipant Attributes.
     * @param listen Pointer to the ParticipantListener.
     * @return Pointer to the RTPSParticipant.
     */
    static RTPSParticipant* clientServerEnvironmentCreationOverride(
            uint32_t domain_id,
            bool enabled,
            const RTPSParticipantAttributes& attrs,
            RTPSParticipantListener* listen /*= nullptr*/);

private:

    typedef std::pair<RTPSParticipant*, RTPSParticipantImpl*> t_p_RTPSParticipant;

    RTPSDomain() = delete;

    /**
     * DomainRTPSParticipant destructor
     */
    ~RTPSDomain() = delete;

    /**
     * @brief Get Id to create a RTPSParticipant.
     * @return Different ID for each call.
     */
    static inline uint32_t getNewId()
    {
        return m_maxRTPSParticipantID++;
    }

    static void removeRTPSParticipant_nts(
            t_p_RTPSParticipant&);

    static std::mutex m_mutex;

    static std::atomic<uint32_t> m_maxRTPSParticipantID;

    static std::vector<t_p_RTPSParticipant> m_RTPSParticipants;

    static std::set<uint32_t> m_RTPSParticipantIDs;
};

} // namespace rtps
} /* namespace fastrtps  */
} /* namespace eprosima */

#endif /* _FASTDDS_RTPS_DOMAIN_H_*/
