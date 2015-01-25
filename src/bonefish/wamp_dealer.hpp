#ifndef BONEFISH_WAMP_DEALER_HPP
#define BONEFISH_WAMP_DEALER_HPP

#include <bonefish/identifiers/wamp_session_id.hpp>
#include <memory>
#include <unordered_map>

namespace bonefish {

class wamp_session;

class wamp_dealer
{
public:
    wamp_dealer();
    ~wamp_dealer();

    bool attach_session(const std::shared_ptr<wamp_session>& session);
    bool detach_session(const wamp_session_id& id);

private:
    std::unordered_map<wamp_session_id, std::shared_ptr<wamp_session>> m_sessions;
};

} // namespace bonefish

#endif // BONEFISH_WAMP_DEALER_HPP