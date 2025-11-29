@class NSString;

@interface StageGiftTaskRoundInfo : IESLivePBBaseMessage

@property (nonatomic) long long totalAmount;
@property (copy, nonatomic) NSString *awardUnit;
@property (nonatomic) long long totalCost;
@property (copy, nonatomic) NSString *costUnit;
@property (nonatomic) int status;

+ (id)descriptor;

@end
