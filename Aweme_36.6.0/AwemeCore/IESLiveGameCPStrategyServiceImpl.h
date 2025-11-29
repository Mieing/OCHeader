@class NSString, NSMutableDictionary;

@interface IESLiveGameCPStrategyServiceImpl : NSObject <IESGCPLiveStrategyService>

@property (retain, nonatomic) NSMutableDictionary *dispatchers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveStrategyService;
- (void)removeStrategyObserver:(id)a0;
- (void)batchCollectInformation:(id)a0;
- (id)getLatestFactor:(id)a0;
- (void)addStrategyObserver:(id)a0 factorName:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
