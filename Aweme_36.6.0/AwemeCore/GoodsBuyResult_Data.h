@class ProfitCheckConfig;

@interface GoodsBuyResult_Data : IESLivePBBaseMessage

@property (retain, nonatomic) ProfitCheckConfig *profitCheckConfig;
@property (nonatomic) BOOL hasProfitCheckConfig;

+ (id)descriptor;

@end
