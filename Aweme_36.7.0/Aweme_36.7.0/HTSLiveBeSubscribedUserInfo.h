@class NSString;

@interface HTSLiveBeSubscribedUserInfo : IESLivePBBaseMessage

@property (nonatomic) long long deviceId;
@property (nonatomic) long long userId;
@property (nonatomic) long long distributionScenes;
@property (nonatomic) long long isLiving;
@property (nonatomic) long long feedTimeMs;
@property (nonatomic) long long subscribeTimeMs;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *openId;

+ (id)descriptor;

@end
