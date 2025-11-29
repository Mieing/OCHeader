@class NSString;

@interface HTSLiveTab_TopText : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *finishText;
@property (copy, nonatomic) NSString *rewardText;
@property (copy, nonatomic) NSString *strategyText;
@property (copy, nonatomic) NSString *rulesText;

+ (id)descriptor;

@end
