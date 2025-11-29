@interface HTSLiveRelaxPriceInfo : IESLivePBBaseMessage

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long price;
@property (nonatomic) long long claimDdl;
@property (nonatomic) long long douPrice;

+ (id)descriptor;

@end
