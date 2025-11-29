@class NSString, QueryIncomeResult_CoinRebateStruct;

@interface QueryIncomeResult_QueryIncomeBalance : IESLivePBBaseMessage

@property (nonatomic) long long cashBalance;
@property (nonatomic) long long maxCash;
@property (copy, nonatomic) NSString *customIncomeExchangeURL;
@property (retain, nonatomic) QueryIncomeResult_CoinRebateStruct *rebateData;
@property (nonatomic) BOOL hasRebateData;
@property (nonatomic) long long goldBalance;
@property (nonatomic) long long maxGoldCount;
@property (nonatomic) long long equivalentCashValue;

+ (id)descriptor;

@end
