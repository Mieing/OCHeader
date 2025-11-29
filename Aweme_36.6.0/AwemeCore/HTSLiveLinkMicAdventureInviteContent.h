@class NSString;

@interface HTSLiveLinkMicAdventureInviteContent : IESLivePBBaseMessage

@property (nonatomic) long long toUserId;
@property (copy, nonatomic) NSString *toOpenId;

+ (id)descriptor;

@end
