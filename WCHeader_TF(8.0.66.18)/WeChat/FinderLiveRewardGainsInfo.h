@class FinderLiveContact;

@interface FinderLiveRewardGainsInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveContact *contact;
@property (nonatomic) unsigned long long rewardTime;
@property (nonatomic) unsigned int rewardTotalAmountInWecoin;

+ (void)initialize;

@end
