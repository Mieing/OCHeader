@interface HTSLivePaidLivePriceInfo : IESLivePBBaseMessage

@property (nonatomic) int startTime;
@property (nonatomic) int endTime;
@property (nonatomic) long long price;
@property (nonatomic) int claimDdl;
@property (nonatomic) long long skuId;

+ (id)descriptor;

@end
