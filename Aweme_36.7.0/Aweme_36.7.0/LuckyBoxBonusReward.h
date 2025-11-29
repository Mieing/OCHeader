@class NSString;

@interface LuckyBoxBonusReward : IESLivePBBaseMessage

@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long giftId;

+ (id)descriptor;

@end
