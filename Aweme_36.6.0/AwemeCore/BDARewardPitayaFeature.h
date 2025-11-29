@interface BDARewardPitayaFeature : NSObject

@property (nonatomic) long long currentAmount;
@property (nonatomic) long long nextAmount;
@property (nonatomic) long long totalRewardShowTimes;
@property (nonatomic) long long rewardAgainShowTimes;
@property (nonatomic) long long rewardChangeShowTimes;

- (id)todayDateKey;
- (long long)cacheValueForKey:(id)a0 dateKey:(id)a1;
- (void)updateCacheValue:(long long)a0 forKey:(id)a1 dateKey:(id)a2;
- (id)yesterdayDateKey;
- (void)setCurrentRewardInfo:(id)a0;
- (void)setNextRewardInfo:(id)a0;
- (void)addTotalRewardShowTimes;
- (void)addRewardChangeShowTimes;
- (void)addRewardAgainShowTimes;
- (void)addRewardAgainPanelShowTimes;
- (void)addRewardAgainPanelClickTimes;
- (id)rewardAgainTaskParams;
- (void)cleanCacheData;
- (id)dateFormatter;

@end
