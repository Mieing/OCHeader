@class NSString;

@interface VoIPMPMemberInfo : WXPBGeneratedMessage

@property (nonatomic) long long mMemberId;
@property (retain, nonatomic) NSString *openId;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *inviteBy;
@property (nonatomic) int memberStatus;
@property (nonatomic) BOOL videoOn;
@property (nonatomic) int screenStatus;

+ (void)initialize;

@end
