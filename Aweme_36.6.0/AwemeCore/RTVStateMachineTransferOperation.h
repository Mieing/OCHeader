@class RTVStateTransferContext, RTVStateEvent;
@protocol RTVStateMachineInterface;

@interface RTVStateMachineTransferOperation : RTVStateActionBaseOperation

@property (readonly, nonatomic) RTVStateEvent *event;
@property (readonly, nonatomic) RTVStateTransferContext *context;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) id<RTVStateMachineInterface> stateMachine;

- (id)initWithReactEvent:(id)a0 stateMachine:(id)a1 context:(id)a2 completionBlock:(id /* block */)a3;
- (id)initWithReactEvent:(id)a0 stateMachine:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)main;

@end
