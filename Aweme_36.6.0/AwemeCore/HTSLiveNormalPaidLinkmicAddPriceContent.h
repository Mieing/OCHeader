@interface HTSLiveNormalPaidLinkmicAddPriceContent : IESLivePBBaseMessage

@property (nonatomic) int addPriceStrategy;
@property (nonatomic) long long customAddPriceValue;

+ (id)descriptor;

@end
