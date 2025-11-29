@class NSOperationQueue;
@protocol RxInjector, RTVStateMachineInterface;

@interface RTVStateTransferActionHandler : NSObject

@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (weak, nonatomic) id<RTVStateMachineInterface> stateMachine;

+ (struct _RTVActionTypeRange { long long x0; long long x1; })supportActionTypeRange;
+ (long long)supportState;

- (void)initialOperationQueue;
- (id)doHandleAction:(id)a0;
- (id)unhandleActionError:(id)a0;
- (void).cxx_destruct;
- (id)initWithOperationQueue:(id)a0;
- (id)handleAction:(id)a0;

@end
