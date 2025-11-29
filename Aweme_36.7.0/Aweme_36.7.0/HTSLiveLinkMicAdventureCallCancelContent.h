@class NSString;

@interface HTSLiveLinkMicAdventureCallCancelContent : IESLivePBBaseMessage

@property (nonatomic) long long inviteeUserId;
@property (nonatomic) long long pairId;
@property (copy, nonatomic) NSString *pairIdStr;
@property (copy, nonatomic) NSString *inviteeOpenId;

+ (id)descriptor;

@end
