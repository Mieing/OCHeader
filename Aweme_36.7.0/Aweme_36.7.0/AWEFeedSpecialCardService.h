@class NSString;

@interface AWEFeedSpecialCardService : HTSService <AWEFeedSpecialCardService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSpecialCard:(id)a0;
+ (id)mainCardTypeForModel:(id)a0;

- (id)specialCardStatsParamManager;
- (void)setHotListNewNetWorkRequest:(BOOL)a0 awemeType:(long long)a1;
- (BOOL)shouldCancelInsertCardForReversalWithType:(long long)a0;
- (BOOL)isFeedSpecialCardShowStrategyEnableWithType:(long long)a0;
- (BOOL)isFeedSpecialCardShowStrategyEnableWithReferString:(id)a0;
- (BOOL)canBeExemptForShowStrategyWithSourceFromDataList:(BOOL)a0 index:(long long)a1 cardName:(id)a2;
- (BOOL)canBeExemptForShowStrategyWithSourceFromDataList:(BOOL)a0 index:(long long)a1 model:(id)a2 cardName:(id)a3;
- (BOOL)judgeCanBeExemptForShowStrategyWithSourceFromDataList:(BOOL)a0 index:(long long)a1;
- (BOOL)judgeCanBeExemptForShowStrategyWithSourceFromDataList:(BOOL)a0 index:(long long)a1 cardName:(id)a2;
- (void)didExemptForShowStrategyWithSourceFromDataList:(BOOL)a0 index:(long long)a1 model:(id)a2;
- (id)feedCardFrequencyControlParams;
- (Class)specialCardDataSourceHandler;
- (Class)specialCardMonitorClass;
- (BOOL)enableStatsRefactor;

@end
