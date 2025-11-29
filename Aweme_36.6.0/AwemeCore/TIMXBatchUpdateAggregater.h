@class TIMXBatchUpdateAggregaterRule, TIMXThreadSafeMutableDictionary, NSString, TIMXSDKInstance, TIMXGCDTimer, NSObject;
@protocol OS_dispatch_queue, TIMXBatchUpdateAggregaterDelegate;

@interface TIMXBatchUpdateAggregater : NSObject {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXBatchUpdateAggregaterRule *rule;
@property (retain, nonatomic) TIMXThreadSafeMutableDictionary *currentBatch;
@property (retain, nonatomic) TIMXGCDTimer *timer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *p_sharedOperationQueue;
@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<TIMXBatchUpdateAggregaterDelegate> delegate;

- (void)finishCurrentBatch;
- (void)processBatch:(id)a0;
- (id)initWithRootObject:(id)a0 rule:(id)a1;
- (void)cancelCurrentBatch;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0 forKey:(id)a1;
- (void)_startTimerIfNeeded;

@end
