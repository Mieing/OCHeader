@class NSString, NSMutableDictionary, IESLiveGCDTimer, NSDictionary, NSMutableArray, NSDateFormatter, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface IESLiveDispatchBlockView : NSObject <IESLiveDispatchSamplingService> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (retain, nonatomic) NSMapTable *taskContainer;
@property (retain, nonatomic) NSMapTable *dispatchGroupQueues;
@property (retain, nonatomic) NSMutableDictionary *blockOverviewSnapshot;
@property (retain, nonatomic) NSMutableArray *mainQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerBlockQueue;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDictionary *liveDispatchMetrics;
@property (nonatomic) long long limitCount;
@property (retain, nonatomic) IESLiveGCDTimer *autoTriggerTimer;
@property (nonatomic) long long optimizeQOS;
@property (readonly, nonatomic) long long overviewLevel;
@property (readonly, nonatomic) NSDictionary *dispatchCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)reportDispatchInfo;
- (void)startAutoSampling;
- (void)stopAutoSampling;
- (void)autoTriggerDispatchSampling;
- (id)getMaxMetrics:(id)a0 metrics:(id)a1;
- (id)getTopMetrics:(id)a0;
- (void)handlerDispatchNode:(id)a0 subsummary:(id)a1;
- (void)dispatchMainBlockNode:(id)a0;
- (void)dispatchSubBlockNode:(id)a0;
- (long long)maxQueues;
- (void)enmainqueue:(id)a0;
- (void)demainqueue;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)dispatchQueues;
- (id)init;
- (void)dequeue;
- (void)clean;

@end
