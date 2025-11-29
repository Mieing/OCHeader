@class NSArray, NSMutableDictionary, NSString, NSLock;
@protocol AWELiveStrategyServiceAdapter;

@interface VIRStrategySmartManager : NSObject <AWELiveStrategyEventDispatcherObserver>

@property (retain, nonatomic) id<AWELiveStrategyServiceAdapter> strategyService;
@property (retain, nonatomic) NSMutableDictionary *observerList;
@property (retain, nonatomic) NSMutableDictionary *factorToTask;
@property (retain, nonatomic) NSMutableDictionary *factorValueDic;
@property (retain, nonatomic) NSMutableDictionary *lynxContainerObservers;
@property (copy, nonatomic) NSArray *keyList;
@property (retain, nonatomic) NSLock *observerListLock;
@property (retain, nonatomic) NSLock *factorToTaskLock;
@property (retain, nonatomic) NSLock *factorValueDicLock;
@property (retain, nonatomic) NSLock *lynxContainerObserverLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)strategyResultWithKey:(id)a0;
- (void)eventDispatcherWillDispatchValue:(id)a0 withFactorKey:(id)a1;
- (void)addStrategyObserver:(id)a0 forKey:(id)a1;
- (void)removeStrategyObserver:(id)a0 forKey:(id)a1;
- (void)addFactorWithKey:(id)a0;
- (id)buildStrategyObserverForKey:(id)a0 withContainer:(id)a1;
- (id)observerForKey:(id)a0 withContainer:(id)a1;
- (void)commitRule:(id)a0 factorKey:(id)a1 taskKey:(id)a2;
- (BOOL)isValidWithTaskKey:(id)a0 task:(id)a1;
- (void)updateFactors:(id)a0;
- (void).cxx_destruct;
- (void)setupManager;

@end
