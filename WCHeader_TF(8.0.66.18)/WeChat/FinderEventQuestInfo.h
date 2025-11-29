@class NSString;

@interface FinderEventQuestInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long highestReward;
@property (nonatomic) unsigned int sharePercentage;
@property (retain, nonatomic) NSString *shareWording;
@property (retain, nonatomic) NSString *highestRewardSuffixWording;

+ (void)initialize;

@end
