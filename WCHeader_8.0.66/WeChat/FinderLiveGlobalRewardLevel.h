@class NSString;

@interface FinderLiveGlobalRewardLevel : WXPBGeneratedMessage

@property (nonatomic) unsigned int selfRewardLevel;
@property (nonatomic) unsigned long long consumedWecoinAmount;
@property (nonatomic) unsigned long long nextLevelWecoinAmount;
@property (retain, nonatomic) NSString *rightsDetailUrl;
@property (nonatomic) unsigned long long consumedWecoinAmountThisLevel;
@property (nonatomic) unsigned long long needWecoinAmountToNextLevel;

+ (void)initialize;

@end
