@class TIMXMulticastDelegate;
@protocol TIMXMulticastDelegateTargetDelegate;

@interface TIMXMulticastDelegateTarget : NSObject

@property (weak, nonatomic) TIMXMulticastDelegate *target;
@property (weak, nonatomic) id<TIMXMulticastDelegateTargetDelegate> delegate;

- (id)duplicateInvocation:(id)a0;
- (void)measureInvokeWithTarget:(id)a0 node:(id)a1 selector:(SEL)a2 invokeBlock:(id /* block */)a3 serviceGroup:(id)a4;
- (id /* block */)createMeasureBlockWithTarget:(id)a0 selector:(SEL)a1 queueName:(const char *)a2 invokeBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (void)doNothing;

@end
