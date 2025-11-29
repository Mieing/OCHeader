@class NSString;

@interface HTSLiveLotteryCondition : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long needDiamondCount;
@property (nonatomic) long long minFansLevel;
@property (copy, nonatomic) NSString *remarks;
@property (copy, nonatomic) NSString *bizInfo;

+ (id)descriptor;

@end
