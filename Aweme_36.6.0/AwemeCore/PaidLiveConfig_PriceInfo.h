@interface PaidLiveConfig_PriceInfo : IESLivePBBaseMessage

@property (nonatomic) int payType;
@property (nonatomic) long long price;
@property (nonatomic) int rightDuration;

+ (id)descriptor;

@end
