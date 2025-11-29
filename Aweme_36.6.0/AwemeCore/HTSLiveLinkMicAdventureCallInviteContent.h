@class NSString;

@interface HTSLiveLinkMicAdventureCallInviteContent : IESLivePBBaseMessage

@property (nonatomic) long long toUserId;
@property (nonatomic) long long inviteTimeoutDurationS;
@property (nonatomic) long long inviterId;
@property (copy, nonatomic) NSString *toOpenId;
@property (copy, nonatomic) NSString *inviterOpenId;

+ (id)descriptor;

@end
