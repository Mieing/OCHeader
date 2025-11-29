@interface HTSLiveGuardInfo : IESLivePBBaseMessage

@property (nonatomic) int guardStatus;
@property (nonatomic) long long activeGuardDay;
@property (nonatomic) long long totalGuardDay;
@property (nonatomic) long long expireTime;

+ (id)descriptor;

@end
