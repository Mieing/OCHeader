@class AWEPzDomain, NSString, NSDictionary, NSHashTable, AWEPzEngineConfigModel, NSMutableDictionary, AWEPzContextManager;

@interface AWEPzEngine : NSObject <AWEPzEngineProtocol>

@property (copy, nonatomic) NSString *domainName;
@property (copy, nonatomic) NSDictionary *stateReferStringMap;
@property (retain, nonatomic) NSHashTable *generateComponents;
@property (retain, nonatomic) AWEPzEngineConfigModel *engineConfig;
@property (nonatomic) BOOL hasLoadConfig;
@property (retain, nonatomic) NSDictionary *componentModelMap;
@property (retain, nonatomic) NSDictionary *strategyModelMap;
@property (retain, nonatomic) NSMutableDictionary *strategyMap;
@property (nonatomic) long long configFrom;
@property (retain, nonatomic) NSString *dataHash;
@property (nonatomic) BOOL hasHotSwitch;
@property (weak, nonatomic) AWEPzDomain *domain;
@property (retain, nonatomic) AWEPzContextManager *contextManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateComponentWithConfig:(id)a0;
- (void)asyncVerifyComponent:(id)a0 completion:(id /* block */)a1;
- (id)selectComponents:(id)a0;
- (void)getComponentModelWithID:(id)a0 completion:(id /* block */)a1;
- (void)showComponent:(id)a0;
- (void)consumeComponent:(id)a0;
- (void)hideComponent:(id)a0;
- (void)queryComponentModelListWithComponentType:(id)a0 completion:(id /* block */)a1;
- (void)registerVerifyComponent:(id)a0 completion:(id /* block */)a1;
- (void)strategyVerifyComponent:(id)a0 completion:(id /* block */)a1;
- (id)registerVerifyComponent:(id)a0;
- (id)strategyVerifyComponent:(id)a0;
- (id)initWithDomain:(id)a0 config:(id)a1;
- (void)loadComponentAndStrategyMapIfNeed;
- (void)loadComponentAndStrategyMapIfNeedCompletion:(id /* block */)a0;
- (void)domainConfigDidChangeWithComponentModelMap:(id)a0 strategyModelMap:(id)a1;
- (id)getComponentModel:(id)a0;
- (void)trackRegisterVerifyWithResult:(long long)a0 component:(id)a1 componentID:(id)a2 componentType:(id)a3 startTime:(double)a4 trackContext:(id)a5;
- (id)getStrategiesWithComponent:(id)a0 strategyIDList:(id)a1;
- (void)registerVerifyComponent:(id)a0 paramModel:(id)a1 completion:(id /* block */)a2;
- (void)getComponentModel:(id)a0 completion:(id /* block */)a1;
- (id)descSortedStrategyListByPriority:(id)a0;
- (void)trackStrategyVerifyWithResult:(long long)a0 component:(id)a1 inWhiteList:(BOOL)a2 strategyID:(id)a3 startTime:(double)a4 trackContext:(id)a5;
- (void)strategyVerifyComponent:(id)a0 paramModel:(id)a1 completion:(id /* block */)a2;
- (void)p_strategyVerifyComponent:(id)a0 paramModel:(id)a1 completion:(id /* block */)a2;
- (void)trackVerifyWithContext:(id)a0;
- (id)getStrategiesWithComponent:(id)a0 conformsToProtocol:(id)a1;
- (BOOL)changeComponent:(id)a0 toState:(long long)a1;
- (void)enumerateStrategiesWithComponent:(id)a0 conformsToProtocol:(id)a1 usingBlock:(id /* block */)a2;
- (void)trackComponent:(id)a0 action:(id)a1 result:(BOOL)a2 fromState:(long long)a3 stayTime:(long long)a4;
- (BOOL)changeComponentConsumed:(id)a0;
- (void)reloadWithComponentModelMap:(id)a0 strategyModelMap:(id)a1;
- (id)loadStrategyWithComponent:(id)a0 strategyIDList:(id)a1;
- (id)getStrategyWithStrategyID:(id)a0;
- (id)p_sortedStrategyList:(id)a0 domain:(id)a1 paramModel:(id)a2;
- (void)asyncExecuteVerifyStrategyList:(id)a0 component:(id)a1 paramModel:(id)a2 completion:(id /* block */)a3;
- (void)getStrategiesWithComponent:(id)a0 strategyIDList:(id)a1 completion:(id /* block */)a2;
- (void)asyncLoopVerifyStrategyList:(id)a0 index:(long long)a1 component:(id)a2 paramModel:(id)a3 hitStrategy:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (void)reset;
- (void)addComponent:(id)a0;
- (void)removeComponent:(id)a0;

@end
