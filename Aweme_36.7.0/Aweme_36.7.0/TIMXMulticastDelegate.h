@class NSMutableDictionary, TIMXMulticastDelegateTarget, NSString, NSLock;
@protocol TIMXMulticastDelegateEventDelegate, TIMXMulticastInvocationTrackDelegate;

@interface TIMXMulticastDelegate : NSObject <TIMXMulticastDelegateTargetDelegate>

@property (retain, nonatomic) NSMutableDictionary *allNodes;
@property (retain, nonatomic) NSLock *allNodesLock;
@property (retain, nonatomic) TIMXMulticastDelegateTarget *target;
@property (weak, nonatomic) id<TIMXMulticastDelegateEventDelegate> forwardInvokeDelegate;
@property (weak, nonatomic) id<TIMXMulticastInvocationTrackDelegate> forwardInvocationTrackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addWeakDelegate:(id)a0 onQueue:(id)a1;
- (void)removeDelegateWithIdentifier:(id)a0;
- (id)addWeakDelegate:(id)a0 onQueue:(id)a1 priority:(int)a2;
- (BOOL)shouldRecordTheInvocation;
- (void)trackInvocationWithMethod:(id)a0 timeConsumption:(double)a1 notifiedNodeCount:(long long)a2;
- (BOOL)multicastDelegateTarget:(id)a0 shouldMeasureWithQueueName:(const char *)a1;
- (void)multicastDelegateTarget:(id)a0 didForwardInvocationWithParams:(id)a1;
- (BOOL)enableMulticastDelegateTargeTrackFeature:(id)a0;
- (id)addSyncCallbackWeakDelegate:(id)a0 priority:(int)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)mediator;

@end
