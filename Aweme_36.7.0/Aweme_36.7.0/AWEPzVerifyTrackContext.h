@class NSString, NSMutableDictionary;

@interface AWEPzVerifyTrackContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *strategyIDCostTimeMap;
@property (retain, nonatomic) NSMutableDictionary *strategyTypeCostTimeMap;
@property (nonatomic) long long costEnterMainQueue;
@property (nonatomic) long long timesEnterMainQueue;
@property (nonatomic) long long costEnterSubQueue;
@property (nonatomic) long long timesEnterSubQueue;
@property (nonatomic) BOOL isPreCheck;
@property (nonatomic) BOOL extraVerify;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *componentType;
@property (nonatomic) BOOL onlyVerifyRegister;
@property (nonatomic) long long registerVerifyCostTime;
@property (nonatomic) long long registerVerifyResult;
@property (nonatomic) BOOL noEffectStrategy;
@property (nonatomic) BOOL inWhitelist;
@property (copy, nonatomic) NSString *strategyID;
@property (nonatomic) long long strategyVerifyCostTime;
@property (nonatomic) long long strategyVerifyResult;
@property (nonatomic) long long durationFromColdLaunch;
@property (nonatomic) long long launchStageMask;
@property (nonatomic) long long launchType;
@property (nonatomic) long long feedReadyFromLaunch;
@property (nonatomic) long long prefetchRecordFromLaunch;
@property (nonatomic) long long sortType;
@property (copy, nonatomic) NSString *cacheState;
@property (nonatomic) long long memoryLevel;

- (void)addCostEnterQueue:(long long)a0 isMainQueue:(BOOL)a1;
- (void)setCostTime:(long long)a0 forStrategyID:(id)a1;
- (void)addCostTime:(long long)a0 forStrategyType:(id)a1;
- (id)strategyIDCostTimeJSONString;
- (id)strategyTypeCostTimeJSONString;
- (void).cxx_destruct;
- (id)init;

@end
