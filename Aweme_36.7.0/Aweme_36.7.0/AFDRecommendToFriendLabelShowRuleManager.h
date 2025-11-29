@class NSMutableDictionary, NSString, AFDFrequencyCountRule, NSMutableArray;

@interface AFDRecommendToFriendLabelShowRuleManager : NSObject <AFDRecommendToFriendLabelShowRuleManagerProtocol>

@property (retain, nonatomic) AFDFrequencyCountRule *recommendToFriendLabelShowRule;
@property (retain, nonatomic) NSMutableDictionary *recommendToFriendLabelShowRuleDict;
@property (retain, nonatomic) NSMutableArray *passiveSlideWindowInfoCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)recommendToFriendPitayaManager;
- (void)addPassiveSlideWindowInfoCache:(id)a0 referString:(id)a1;
- (BOOL)isGreaterThanRecommendPredictRateWithActionType:(unsigned long long)a0 context:(id)a1;
- (BOOL)isHitScatterLabelShowControlWithModel:(id)a0;
- (BOOL)isHitLabelShowControlWithActionType:(unsigned long long)a0 referString:(id)a1;
- (void)addLabelShowCountWithActionType:(unsigned long long)a0 referString:(id)a1;
- (void)updatePassiveSlideWindowInfoCacheWithModel:(id)a0;
- (void)resetShowRuleWithContext:(id)a0;
- (long long)familiarRecommendShowEntrancePassiveSlideWindowSize;
- (long long)familiarRecommendShowEntrancePassiveStoreMaxSize;
- (id)ruleKeyForActionType:(unsigned long long)a0 referString:(id)a1;
- (id)createRecommendToFriendLabelShowRuleWithActionType:(unsigned long long)a0 referString:(id)a1;
- (void)addLabelShowCountWithActionType:(unsigned long long)a0 rule:(id)a1;
- (BOOL)isHitLabelShowControlWithActionType:(unsigned long long)a0 rule:(id)a1;
- (id)ruleIDWithActionType:(unsigned long long)a0 referString:(id)a1;
- (long long)familiarRecommendLabelRelatedActionFrequencyCountDigg;
- (long long)familiarRecommendLabelRelatedActionFrequencyCountShare;
- (long long)familiarRecommendLabelRelatedActionFrequencyCountPlayProgress;
- (long long)familiarRecommendLabelRelatedActionFrequencyTimeInterval;
- (long long)familiarRecommendLabelRelatedActionFrequencyCountTotal;
- (id)debug_getTotalRecommendToFriendLabelShowRule;
- (id)debug_getTotalRecommendToFriendLabelShowRuleDic;
- (void).cxx_destruct;
- (id)init;

@end
