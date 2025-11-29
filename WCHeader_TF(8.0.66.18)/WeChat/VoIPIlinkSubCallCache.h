@class VoIPMtInviteMsg, ConfRecvInviteInfo, CMessageWrap;

@interface VoIPIlinkSubCallCache : NSObject

@property (retain, nonatomic) VoIPMtInviteMsg *inviteMsg;
@property (retain, nonatomic) CMessageWrap *inviteMessageWrap;
@property (retain, nonatomic) ConfRecvInviteInfo *inviteInfo;

- (id)initWithInviteMsg:(id)a0 messageWrap:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
