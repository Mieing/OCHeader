@class NSString, BDStrategyProviderManager, BDStrategyStore;

@interface BDStrategyCenter : NSObject <BDStrategyUpdateProtocol>

@property (retain, nonatomic) BDStrategyStore *store;
@property (retain, nonatomic) BDStrategyProviderManager *providerCenter;
@property (retain, nonatomic) Class selectCacheImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)validateParams:(id)a0;
+ (id)validateParams:(id)a0 source:(id)a1;
+ (id)validateParams:(id)a0 source:(id)a1 strategyNames:(id)a2;
+ (id)formatValueToLog:(id)a0;
+ (void)setupWithDelegate:(id)a0;
+ (void)registerStrategyProvider:(id)a0;
+ (id)generateStrategiesInSource:(id)a0 params:(id)a1;
+ (id)sharedInstance;

- (id)validateParams:(id)a0;
- (id)validateParams:(id)a0 source:(id)a1;
- (id)validateParams:(id)a0 source:(id)a1 strategyNames:(id)a2;
- (id)__strategyCenterError:(long long)a0 uuid:(id)a1;
- (id)_validateParams:(id)a0;
- (void)logExecuteRuleEngineResult:(id)a0 withInputParams:(id)a1;
- (void)debugLogExecuteRuleEngineResult:(id)a0;
- (id)_validateParams:(id)a0 source:(id)a1;
- (id)_validateParams:(id)a0 source:(id)a1 strategyNames:(id)a2;
- (id)_generateStrategiesInSource:(id)a0 params:(id)a1;
- (void)logExecuteStrategiesSelectResult:(id)a0 withSource:(id)a1 inputParams:(id)a2;
- (id)__validateParams:(id)a0 context:(id)a1;
- (id)__validateParams:(id)a0 source:(id)a1 context:(id)a2;
- (id)__validateParams:(id)a0 source:(id)a1 strategyNames:(id)a2 context:(id)a3;
- (id)__generateStrategiesInSource:(id)a0 params:(id)a1 context:(id)a2;
- (void)preprocessStrategy:(id)a0;
- (id)generateStrategiesInSource:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
