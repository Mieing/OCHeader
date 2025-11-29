@class NSString;

@interface QueryIncomeResult_QueryIncomeResultExtra : IESLivePBBaseMessage

@property (nonatomic) BOOL isFirstIncomeExchange;
@property (nonatomic) BOOL iosFastCoinEntrance;
@property (nonatomic) BOOL hideCombineExchange;
@property (nonatomic) BOOL hideCashExchange;
@property (nonatomic) long long giftPanelType;
@property (copy, nonatomic) NSString *assetParamsResult;

+ (id)descriptor;

@end
