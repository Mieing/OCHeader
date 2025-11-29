@class NSString;

@interface ExpandLotteryConfig : IESLivePBBaseMessage

@property (nonatomic) long long expandPrizeType;
@property (copy, nonatomic) NSString *rulePageLink;

+ (id)descriptor;

@end
