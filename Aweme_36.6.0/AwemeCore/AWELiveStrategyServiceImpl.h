@class NSLock, NSMutableDictionary, NSString;
@protocol IESLiveStrategyService;

@interface AWELiveStrategyServiceImpl : NSObject <IESLiveStrategyEventDispatcherObserver, AWELiveStrategyServiceAdapter>

@property (retain, nonatomic) id<IESLiveStrategyService> strategyService;
@property (retain, nonatomic) NSMutableDictionary *observerList;
@property (retain, nonatomic) NSLock *observerListLock;
@property (retain, nonatomic) NSMutableDictionary *hasAddObserverDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)batchCollectInformation:(id)a0;
- (void)clearRoomFeature;
- (void)storeRoomFeature:(id)a0;
- (id)characterValueForKey:(id)a0;
- (id)getLatestFactor:(id)a0;
- (void)eventDispatcherWillDispatchValue:(id)a0 withFactorKey:(id)a1;
- (void)addStrategyObserver:(id)a0 InFactor:(id)a1;
- (void)removeStrategyObserver:(id)a0 InFactor:(id)a1;
- (void).cxx_destruct;

@end
