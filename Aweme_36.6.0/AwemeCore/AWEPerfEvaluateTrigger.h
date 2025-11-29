@class NSTimer, NSObject;
@protocol AWEPerfEvaluateTriggerHandler, OS_dispatch_queue;

@interface AWEPerfEvaluateTrigger : NSObject <IESFCEventObserver>

@property (weak, nonatomic) id<AWEPerfEvaluateTriggerHandler> handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *triggerQueue;
@property (nonatomic) BOOL enableBootTrigger;
@property (nonatomic) BOOL trigger_after_feed_ready;
@property (retain, nonatomic) NSTimer *triggerTimer;
@property (nonatomic) double triggerInterval;
@property (nonatomic) double lastTriggerTime;

- (void)onTriggerEvent:(unsigned long long)a0 params:(id)a1;
- (id)initWithPerfEvaluateJSONConfig:(id)a0 triggerHandler:(id)a1;
- (void)triggerBootCollect;
- (void)timerTriggerCollect;
- (void)dispatchCollectOnSceneIfNeeded:(unsigned long long)a0;
- (void)_dispatchCollectOnSceneIfNeeded:(unsigned long long)a0;
- (void).cxx_destruct;

@end
