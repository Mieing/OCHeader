@interface HTSLiveIncrPriceList : IESLivePBBaseMessage

@property (nonatomic) long long price;
@property (nonatomic) long long range;

+ (id)descriptor;

@end
