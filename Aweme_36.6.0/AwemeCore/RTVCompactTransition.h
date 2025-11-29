@class RTVCompactEvent, RTVCompactState, RxDeferred, RTVCompactStateMachine, RTVCompactEventContext;
@protocol RTVCompactTransitionDelegate;

@interface RTVCompactTransition : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ eventOperation;
@property (readonly, weak, nonatomic) RTVCompactStateMachine *stateMachine;
@property (weak, nonatomic) id<RTVCompactTransitionDelegate> delegate;
@property (readonly, nonatomic) RTVCompactEvent *event;
@property (readonly, nonatomic) RTVCompactState *sourceState;
@property (readonly, nonatomic) RTVCompactState *destinationState;
@property (readonly, nonatomic) RxDeferred *defer;
@property (readonly, copy, nonatomic) RTVCompactEventContext *context;

+ (id)transitionForEvent:(id)a0 fromState:(id)a1 context:(id)a2 stateMachine:(id)a3;

- (id)initWithEvent:(id)a0 fromState:(id)a1 context:(id)a2 stateMachine:(id)a3;
- (void)__finishResult:(BOOL)a0;
- (void).cxx_destruct;
- (void)setExecuting:(BOOL)a0;
- (void)setFinished:(BOOL)a0;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (BOOL)isFinished;

@end
