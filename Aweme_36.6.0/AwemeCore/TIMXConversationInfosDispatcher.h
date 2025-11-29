@class TIMXSDKInstance, TIMXGCDTimer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, TIMXConversationInfosDispatcherDelegate;

@interface TIMXConversationInfosDispatcher : NSObject {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXGCDTimer *immediatePriorityTimer;
@property (retain, nonatomic) TIMXGCDTimer *highPriorityTimer;
@property (retain, nonatomic) TIMXGCDTimer *lowPriorityTimer;
@property (nonatomic) float immediateDuration;
@property (nonatomic) float highPriorityDuration;
@property (nonatomic) float lowPriorityDuration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSMutableArray *immediatelyPriorityContextsPool;
@property (retain, nonatomic) NSMutableArray *highPriorityContextsPool;
@property (retain, nonatomic) NSMutableArray *lowPriorityContextsPool;
@property (weak, nonatomic) id<TIMXConversationInfosDispatcherDelegate> delegate;

- (void)stopTimerIfNeed;
- (void)didReceiveNoti:(id)a0;
- (void)triggerTimerIfNeed;
- (void)p_dispatchContext:(id)a0 triggerTimer:(BOOL)a1;
- (void)immediateTimerFired:(id)a0;
- (void)highPriorityTimerFired:(id)a0;
- (void)lowPriorityTimerFired:(id)a0;
- (void)p_timerFiredWithType:(unsigned long long)a0 timer:(id)a1;
- (void)p_pumpFromPools:(unsigned long long)a0 pumpedPool:(id)a1 trimedPool:(id)a2;
- (void)dispatchContext:(id)a0;
- (void)dispatchContexts:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
