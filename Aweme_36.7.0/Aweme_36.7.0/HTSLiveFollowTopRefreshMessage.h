@interface HTSLiveFollowTopRefreshMessage : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) int notifyType;
@property (nonatomic) long long delayTime;

+ (id)descriptor;

@end
