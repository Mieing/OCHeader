@class AWEPOIVirgoSmartStrategyManager, NSString, AWEPOIVirgoRuleTaskManager, AWEPOIVirgoOptiStrategyManager, AWEPOIVirgoCharactersManager;

@interface AWEPOIVirgoService : HTSService <AWEPOIVirgoService>

@property (retain, nonatomic) AWEPOIVirgoOptiStrategyManager *optiStrategyManager;
@property (retain, nonatomic) AWEPOIVirgoSmartStrategyManager *smartStrategyManager;
@property (retain, nonatomic) AWEPOIVirgoRuleTaskManager *ruleTaskManager;
@property (retain, nonatomic) AWEPOIVirgoCharactersManager *charactersManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)characterValueForKey:(id)a0;
- (void)triggerTimingWithKey:(id)a0;
- (void)registerUnit:(id /* block */)a0 withKey:(id)a1;
- (id)buildStrategyObserverForKey:(id)a0 withContainer:(id)a1;
- (id)observerForKey:(id)a0 withContainer:(id)a1;
- (void)removeRuleWithTaskKey:(id)a0;
- (void)removeUnitWithKey:(id)a0;
- (void)startVirgo;
- (void)addOptiStrategyRule:(id)a0;
- (id)strategyResultWithKey:(id)a0 type:(unsigned long long)a1;
- (void)addStrategyUpdateObserver:(id)a0 strategyKey:(id)a1 type:(unsigned long long)a2;
- (void)removeStrategyUpdateObserver:(id)a0 strategyKey:(id)a1 type:(unsigned long long)a2;
- (id)characterValueForKey:(id)a0 value:(id)a1;
- (id)characterValueForKey:(id)a0 sourceType:(unsigned long long)a1;
- (id)characterValueForKey:(id)a0 sourceType:(unsigned long long)a1 value:(id)a2;
- (void)updateCharacters:(id)a0 sourceType:(unsigned long long)a1;
- (void)addCharacterUpdateObserver:(id)a0 characterKey:(id)a1 type:(unsigned long long)a2;
- (void)removeCharacterUpdateObserver:(id)a0 characterKey:(id)a1 type:(unsigned long long)a2;
- (void)addRuleTaskObserverWithFactorKey:(id)a0;
- (id)strategyManagerWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
