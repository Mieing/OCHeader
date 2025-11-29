@class NSString, NSRecursiveLock, NSSet, NSMutableDictionary, NSDictionary, IESLiveGCDTimer, NSObject, IESLiveStrategyConfig, IESLiveStrategyTrace;
@protocol IESLiveStrategyFeatureProtocol, OS_dispatch_queue;

@interface IESLiveStrategyEngine : NSObject <IESLiveStrategyCombineItemDelegate, IESLiveStrategyDataCenterDelegate>

@property (retain, nonatomic) NSMutableDictionary *observerMap;
@property (retain, nonatomic) NSRecursiveLock *observerLock;
@property (retain, nonatomic) id<IESLiveStrategyFeatureProtocol> dataCenter;
@property (retain) NSDictionary *factorIndexing;
@property (retain) NSDictionary *characterIndexing;
@property (retain) NSSet *autoUpdateCharacters;
@property (retain, nonatomic) NSMutableDictionary *factorValueCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (weak, nonatomic) IESLiveStrategyConfig *config;
@property (retain, nonatomic) IESLiveStrategyTrace *tracker;
@property (retain, nonatomic) NSString *anchorId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLatestFactor:(id)a0 scene:(id)a1;
- (id)getLatestFactor:(id)a0 anchorId:(id)a1 scene:(id)a2;
- (id)getCloudFeatureForName:(id)a0;
- (id)getCloudFeatureForName:(id)a0 anchorId:(id)a1;
- (void)addFactorChangeObserver:(id)a0 forFactor:(id)a1 withImmediateTrigger:(BOOL)a2;
- (void)removeStrategyObserver:(id)a0;
- (void)removeStrategyObserver:(id)a0 factor:(id)a1;
- (void)updateAnchorId:(id)a0;
- (void)updateStrategy:(id)a0;
- (id)combineGetCharacterValue:(id)a0 anchorId:(id)a1 ts:(double)a2;
- (void)dataCenter:(id)a0 characterDidUpdated:(id)a1;
- (void)dataCenter:(id)a0 characterBatchUpdate:(id)a1;
- (void)parseStrategyInfo:(id)a0;
- (void)trackerCombineEvent:(id)a0 withFactor:(id)a1 scene:(id)a2;
- (id)executeStrategyWithFactorIndexing:(id)a0 source:(unsigned long long)a1 anchorId:(id)a2 scene:(id)a3;
- (void)executeStrategyWithCharacters:(id)a0 anchorId:(id)a1 scene:(id)a2 sync:(BOOL)a3;
- (void)executeStrategyCalculateWithScene:(id)a0;
- (id)executeStrategyWithFactorIndexingV2:(id)a0 source:(unsigned long long)a1 anchorId:(id)a2 scene:(id)a3;
- (id)executeStrategyWithFactorIndexingV1:(id)a0 source:(unsigned long long)a1 anchorId:(id)a2 scene:(id)a3;
- (void)triggerObserverWithCombine:(id)a0 factor:(id)a1 scene:(id)a2 complete:(id /* block */)a3;
- (void)dataCenter:(id)a0 characterBatchUpdate:(id)a1 withAnchorId:(id)a2;
- (id)initWithDataCenter:(id)a0;
- (void)addStrategyObserver:(id)a0 WithFactor:(id)a1;
- (id)getStrategyIdByFactor:(id)a0;
- (void)characterDidUpdated:(id)a0 sync:(BOOL)a1;
- (void).cxx_destruct;
- (void)fire;

@end
