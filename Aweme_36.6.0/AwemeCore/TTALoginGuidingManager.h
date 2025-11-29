@class NSDictionary, NSMutableDictionary, NSString;

@interface TTALoginGuidingManager : NSObject <TTAccountMulticastProtocol>

@property (retain, nonatomic) NSDictionary *currentStrategy;
@property (retain, nonatomic) NSMutableDictionary *currentRecord;
@property (retain, nonatomic) NSMutableDictionary *totalHistRecord;
@property (nonatomic) BOOL isLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)clearRecord;
- (void)onAccountLogin;
- (BOOL)shouldLoginInScene:(id)a0 loginMethod:(id)a1 extraParams:(id *)a2 reloadStrategyIfNeeded:(BOOL)a3;
- (void)reloadStrategyIfNeeded;
- (id)strategyWithLoginMethod:(id)a0 scene:(id)a1;
- (id)recordRecordWithLoginMethod:(id)a0 scene:(id)a1;
- (id)strategyFrequencySetWithLoginMethod:(id)a0 scene:(id)a1;
- (BOOL)p_shouldClearSceneRecordWithFrequencySet:(id)a0 record:(id)a1;
- (void)clearSceneRecordWithLoginMethod:(id)a0 scene:(id)a1;
- (id)totalHistRecordWithMethod:(id)a0 scene:(id)a1;
- (id)strategyExtraWithLoginMethod:(id)a0 scene:(id)a1;
- (id)strategyFrequencyControlWithLoginMethod:(id)a0 scene:(id)a1;
- (void)saveCurrentRecord;
- (id)strategyTriggerWithLoginMethod:(id)a0 scene:(id)a1;
- (BOOL)p_shouldLoginByTriggerWithTrigger:(id)a0 record:(id)a1;
- (BOOL)p_shouldLoginByCountWithFrequencyControl:(id)a0 record:(id)a1;
- (BOOL)p_shouldLoginByFrequencyWithFrequencyControl:(id)a0 record:(id)a1 currentTime:(double)a2;
- (id)strategyMostLaunchTimeListWithLoginMethod:(id)a0 scene:(id)a1;
- (BOOL)p_LimitedByMostLaunchTimeList:(id)a0;
- (double)rangeIntervalWithFrequencyControl:(id)a0;
- (double)rangeIntervalWithFrequencySet:(id)a0;
- (void)trackLoginGuideFequencyStateWithLoginMethod:(id)a0 scene:(id)a1;
- (void)saveTotalHistorySceneRecord;
- (void)loginDidPopupInScene:(id)a0 loginMethod:(id)a1;
- (BOOL)shouldLoginInScene:(id)a0 loginMethod:(id)a1 extraParams:(id *)a2;
- (void)loginDidPopupInScene:(id)a0;
- (void)loginDidPopupInScene:(id)a0 loginMethod:(id)a1 isGuideLogin:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)getCacheData;

@end
