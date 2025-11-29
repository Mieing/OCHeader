@class NSString, NSMutableDictionary, NSMutableArray;
@protocol AWELiveStrategyServiceAdapter;

@interface AWEPOIVirgoSmartStrategyManager : NSObject <AWELiveStrategyEventDispatcherObserver, AWEPOIStrategyManagerProtocol>

@property (retain, nonatomic) id<AWELiveStrategyServiceAdapter> strategyService;
@property (retain, nonatomic) NSMutableDictionary *observersDictionary;
@property (retain, nonatomic) NSMutableDictionary *factorKeyToLynxContainerObservers;
@property (retain, nonatomic) NSMutableArray *factorKeys;
@property (retain, nonatomic) NSMutableDictionary *factorKeyToValueDictionary;
@property (retain, nonatomic) NSMutableDictionary *factorKeyToRuleTaskDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)strategyResultWithKey:(id)a0;
- (void)eventDispatcherWillDispatchValue:(id)a0 withFactorKey:(id)a1;
- (id)buildStrategyObserverForKey:(id)a0 withContainer:(id)a1;
- (id)observerForKey:(id)a0 withContainer:(id)a1;
- (void)addRuleTaskObserverWithFactorKey:(id)a0;
- (void)startStrategyManagement;
- (void)addStrategyUpdateObserver:(id)a0 strategyKey:(id)a1;
- (void)removeStrategyUpdateObserver:(id)a0 strategyKey:(id)a1;
- (void)addRuleTaskObserverWithSettings;
- (void)commitRule:(id)a0 factorKey:(id)a1 taskKey:(id)a2;
- (BOOL)isValidWithTaskKey:(id)a0 task:(id)a1;
- (void).cxx_destruct;

@end
