@class NSString;

@interface ConditionBizInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL hasLoadRevenueComponent;
@property (copy, nonatomic) NSString *cancelLoadRevenueComponentLink;
@property (nonatomic) long long roomId;

+ (id)descriptor;

@end
