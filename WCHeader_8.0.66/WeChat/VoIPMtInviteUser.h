@class NSData, VoIPMtUserInfo;

@interface VoIPMtInviteUser : WXPBGeneratedMessage

@property (retain, nonatomic) VoIPMtUserInfo *userInfo;
@property (retain, nonatomic) NSData *inviteData;

+ (void)initialize;

@end
