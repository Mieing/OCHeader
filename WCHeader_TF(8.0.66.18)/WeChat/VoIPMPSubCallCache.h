@class VoIPMtInviteMsg, ConfRecvInviteInfo, CMessageWrap, NSData;

@interface VoIPMPSubCallCache : NSObject

@property (retain, nonatomic) VoIPMtInviteMsg *inviteMsg;
@property (retain, nonatomic) CMessageWrap *inviteMessageWrap;
@property (retain, nonatomic) ConfRecvInviteInfo *inviteInfo;
@property (nonatomic) unsigned long long inviteType;
@property (retain, nonatomic) NSData *data;

- (id)initWithInviteMsg:(id)a0 messageWrap:(id)a1;
- (id)description;
- (id)voIPMonoMsgWithType:(unsigned int)a0;
- (id)inviteMultiTalkMonoMsg;
- (id)cancelMultiTalkMonoMsg;
- (id)inviteMonoMsg;
- (id)cancelMonoMsg;
- (void).cxx_destruct;

@end
