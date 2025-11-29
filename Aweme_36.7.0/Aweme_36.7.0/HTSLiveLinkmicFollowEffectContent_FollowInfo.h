@class NSString;

@interface HTSLiveLinkmicFollowEffectContent_FollowInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *targetUserId;
@property (nonatomic) long long followStatus;

+ (id)descriptor;

@end
