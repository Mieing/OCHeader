@class NSString;

@interface IncomeExchangeResult_IncomeExchangeData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *orderId;
@property (nonatomic) long long rebateAmount;

+ (id)descriptor;

@end
