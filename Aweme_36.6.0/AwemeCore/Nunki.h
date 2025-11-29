@class NSArray, NSString;
@protocol NunkiDecisionEngineService, NunkiFactorCenterService, NunkiScheduleEngineService, NunkiConfigCenterService;

@interface Nunki : NSObject <FurionMessage>

@property (readonly, nonatomic) id<NunkiConfigCenterService> configCenter;
@property (readonly, nonatomic) id<NunkiFactorCenterService> factorCenter;
@property (readonly, nonatomic) id<NunkiDecisionEngineService> decisionEngine;
@property (readonly, nonatomic) id<NunkiScheduleEngineService> scheduleEngine;
@property (retain, nonatomic) id<NunkiConfigCenterService> configCenter;
@property (retain, nonatomic) id<NunkiFactorCenterService> factorCenter;
@property (retain, nonatomic) id<NunkiDecisionEngineService> decisionEngine;
@property (retain, nonatomic) id<NunkiScheduleEngineService> scheduleEngine;
@property (copy, nonatomic) NSArray *registerClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)postResourceNotification;
+ (id)dictionaryForNunkiStrategyResult:(id)a0 withTrigger:(id)a1;
+ (id)strategyRegister;
+ (id)dictionaryForNunkiStrategyResult:(id)a0;
+ (id)numberForNunkiStrategyResult:(id)a0;
+ (void)idleExecuteBlock:(id /* block */)a0;
+ (id)arrayForNunkiStrategyResult:(id)a0;
+ (BOOL)boolForNunkiStrategyResult:(id)a0;
+ (id)service;

- (BOOL)shouldStartStrategyWithKey:(id)a0;
- (void)startStrategyWithKey:(id)a0 scheduleTask:(id /* block */)a1;
- (id)strategyResultWithKey:(id)a0;
- (void)startStrategyWithKey:(id)a0 originTask:(id /* block */)a1 scheduleTask:(id /* block */)a2;
- (void)onReceiveFeatureStateChangedWithKey:(id)a0 isOpen:(id)a1;
- (void)startStrategyWithKey:(id)a0 params:(id)a1 scheduleTask:(id /* block */)a2;
- (BOOL)isStrategyEnableWithKey:(id)a0;
- (void)cleanFactorAndDecisionCache;
- (void)registerTimingManager;
- (void)__startStrategyWithKey:(id)a0 params:(id)a1 originTask:(id /* block */)a2 scheduleTask:(id /* block */)a3;
- (id)__startStrategyForResultOnSyncWithKey:(id)a0 params:(id)a1 originTask:(id /* block */)a2 scheduleTask:(id /* block */)a3;
- (BOOL)__startStrategyForOptionOnSyncWithKey:(id)a0 params:(id)a1 originTask:(id /* block */)a2 scheduleTask:(id /* block */)a3;
- (void)startStrategyWithKey:(id)a0 params:(id)a1;
- (void)startStrategyWithKey:(id)a0 params:(id)a1 originTask:(id /* block */)a2 scheduleTask:(id /* block */)a3;
- (id)strategyResultWithKey:(id)a0 params:(id)a1;
- (BOOL)shouldStartStrategyWithKey:(id)a0 params:(id)a1;
- (void)alogMonitorWithKey:(id)a0 config:(id)a1 result:(id)a2;
- (void)startStrategyWithKey:(id)a0;
- (void)setupStrategyWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
