@class NSMutableDictionary, AWEPOIVirgoOptiStrategyRuleParsers, NSString, AWEPOIVirgoOptiStrategyResults;

@interface AWEPOIVirgoOptiStrategyManager : NSObject <AWEPOIVirgoOptiStrategyResultsUpdateProtocol, AWEPOIStrategyManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *strategyKeyToRulesDict;
@property (retain, nonatomic) NSMutableDictionary *characterToStrategyKeysDict;
@property (retain, nonatomic) AWEPOIVirgoOptiStrategyRuleParsers *ruleParsers;
@property (retain, nonatomic) AWEPOIVirgoOptiStrategyResults *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)strategyResultWithKey:(id)a0;
- (void)addOptiStrategyRule:(id)a0;
- (void)addOptiStrategyRules:(id)a0;
- (id)opti_Array:(id)a0 addObject:(id)a1;
- (void)strategyResultDidChange:(id)a0 withStrategyKey:(id)a1;
- (void)startStrategyManagement;
- (void)addStrategyUpdateObserver:(id)a0 strategyKey:(id)a1;
- (void)removeStrategyUpdateObserver:(id)a0 strategyKey:(id)a1;
- (void).cxx_destruct;

@end
