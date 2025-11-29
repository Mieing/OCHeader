@interface AWESearchScanInnerEntranceGuideHelper : NSObject

@property (nonatomic) long long modelAppearTimes;

- (BOOL)shouldShield:(id)a0;
- (long long)syncGetInnerScanEntranceGuideFreq;
- (void)updateModelAppearTimes;
- (BOOL)isModelAppearTimesOverFreq;
- (void)resetAppearTimes;
- (void)trackShowSearchIconPop:(id)a0;
- (long long)getModelAppearTimes;

@end
