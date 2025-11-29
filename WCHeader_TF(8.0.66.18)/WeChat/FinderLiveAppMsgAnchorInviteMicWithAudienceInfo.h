@class NSData;

@interface FinderLiveAppMsgAnchorInviteMicWithAudienceInfo : WXPBGeneratedMessage

@property (nonatomic) int micType;
@property (nonatomic) unsigned int inviteSeatId;
@property (nonatomic) unsigned long long confirmExpiredTime;
@property (retain, nonatomic) NSData *inviteMicBuffer;

+ (void)initialize;

@end
