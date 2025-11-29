@class NSNumber, NSString, NSDictionary;

@interface IESLiveScreencastLinkerModel : IESLiveDynamicModel

@property (retain, nonatomic) NSNumber *channelID;
@property (copy, nonatomic) NSString *inviteUID;
@property (copy, nonatomic) NSString *inviteSecUID;
@property (copy, nonatomic) NSString *receiveUID;
@property (copy, nonatomic) NSString *linkmicID;
@property (nonatomic) BOOL initiativeEnd;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL didLeaveChannel;
@property (nonatomic) unsigned long long inviteeListType;
@property (nonatomic) long long endReason;
@property (nonatomic) unsigned long long vendor;
@property (copy, nonatomic) NSDictionary *rtcExtraInfo;

- (void)resolveWithInviteRespnse:(id)a0;
- (void)resolveFromReplyResponse:(id)a0;
- (void)resolveWithInviteMessage:(id)a0 extra:(id)a1;
- (void)resolveFromReplyMessage:(id)a0;
- (id)transformInviteeListToString;
- (void).cxx_destruct;

@end
