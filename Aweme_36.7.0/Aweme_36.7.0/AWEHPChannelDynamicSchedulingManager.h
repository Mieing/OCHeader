@class NSMutableDictionary, AWEHPChannelDynamicSchedulingTabChangeSeparateTimingStrategy, AWEHPChannelDynamicSchedulingTimingStrategy, NSMutableArray;
@protocol AWEHPChannelDynamicSchedulingTimingStrategyProtocol;

@interface AWEHPChannelDynamicSchedulingManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *channelDictionary;
@property (retain, nonatomic) AWEHPChannelDynamicSchedulingTimingStrategy *tabChangeStrategy;
@property (retain, nonatomic) AWEHPChannelDynamicSchedulingTabChangeSeparateTimingStrategy *tabChangeSeparateStrategy;
@property (retain, nonatomic) AWEHPChannelDynamicSchedulingTimingStrategy *dangerMemoryStrategy;
@property (retain, nonatomic) AWEHPChannelDynamicSchedulingTimingStrategy *restrictMemoryStrategy;
@property (retain, nonatomic) AWEHPChannelDynamicSchedulingTimingStrategy *feedBigMomoryUseStraery;
@property (retain, nonatomic) NSMutableArray *strategyQueue;
@property (retain, nonatomic) NSMutableArray *retryStrategyQueue;
@property (retain, nonatomic) id<AWEHPChannelDynamicSchedulingTimingStrategyProtocol> releaseStrategy;

+ (BOOL)channelDynamicSchedulingConfigEnableABTest;
+ (id)p_globalExcuseStrategy;
+ (id)sharedInstance;

- (void)p_initTopChannelDynamicSchedulingStrategy;
- (void)p_topChannelControllerViewDidInit:(id)a0;
- (void)p_monitorTopChannelController:(id)a0 withModel:(id)a1;
- (void)p_tryReleaseChannelWithDangerMemory;
- (void)p_triggerReleaseChannelWithStrategyContext:(id)a0;
- (void)p_tryReleaseChannelFeedBigMemoryUse;
- (void)p_tryReleaseChannelWithRestrictMemory;
- (void)p_tryReleaseChannelWithTabChange;
- (double)channelLeaveLimitTimeWithChannelID:(id)a0;
- (void)p_triggerTabChangeSeparateStrategy:(id)a0;
- (void)p_retryFailStrategy;
- (void)p_tryReleaseChannelWithStrategyContext:(id)a0;
- (void)p_tryUseNextStrategyContext;
- (BOOL)p_checkFailReasonCanRetryWithError:(id)a0;
- (BOOL)p_checkStrategyNeedRetryWithTriggerReason:(id)a0;
- (BOOL)p_checkContentCanReleaseWithChannelModel:(id)a0 withError:(id *)a1;
- (id)p_getNeedTryReleaseChannelModels;
- (BOOL)p_handleChannelModelIfNeed:(id)a0;
- (id)p_timingStrategyWithDic:(id)a0;
- (id)p_tabChangeSeparateTimingStrategyWithDic:(id)a0;
- (void)hpTopChannelControllerViewDidLoad:(id)a0;
- (void)hpTopChannelControllerViewDidResume:(id)a0;
- (void)hpTopChannelControllerViewDidAppear:(id)a0;
- (void)triggerDangerMemoryStrategy;
- (void)triggerFeedBigMemoryUseStrategy;
- (void)triggerRestrictMemoryStrategy;
- (void)triggerTabChangeStrategy;
- (BOOL)hasTabChangeSeparateStrategy;
- (void)triggerTabChangeSeparateStrategy:(id)a0;
- (void)triggerFailStrategy;
- (void).cxx_destruct;

@end
