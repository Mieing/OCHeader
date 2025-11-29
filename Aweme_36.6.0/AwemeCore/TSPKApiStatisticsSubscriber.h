@class NSMutableDictionary, NSString, TSPKStatisticConfig, NSObject;
@protocol OS_dispatch_source;

@interface TSPKApiStatisticsSubscriber : NSObject <TSPKSubscriber>

@property (retain, nonatomic) NSMutableDictionary *statisticsAPIDict;
@property (retain, nonatomic) TSPKStatisticConfig *statisticConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canHandelEvent:(id)a0;
- (id)hanleEvent:(id)a0;
- (id)getAllStates;
- (void)reportThenRemoveTargetKey:(id)a0;
- (void)reportThenStoreHostStates:(id)a0 eventData:(id)a1 hostStates:(id)a2;
- (void)reportStatisticEvent:(id)a0;
- (void).cxx_destruct;
- (id)uniqueId;
- (id)init;
- (void)dealloc;

@end
