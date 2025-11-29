@interface OpenGameSubscribeInfo : IESLivePBBaseMessage

@property (nonatomic) long long expireAt;
@property (nonatomic) long long monthlyCost;

+ (id)descriptor;

@end
