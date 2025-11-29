@class NSArray, NSString, RTVEventBus;

@interface RTVStateTransferNotificationCenter : NSObject <RTVStateTransferNotificationCenterInterface, RTVStateMachineDelegate>

@property (readonly, nonatomic) RTVEventBus *eventBus;
@property (readonly, nonatomic) NSArray *allStates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stateMachine:(id)a0 didTransferFrom:(id)a1 to:(id)a2 context:(id)a3;
- (id)observeStateTransferFrom:(id)a0 toState:(id)a1 observer:(id)a2 action:(SEL)a3;
- (id)observeStateTransferFrom:(id)a0 toState:(id)a1 block:(id /* block */)a2 priority:(long long)a3;
- (id)observeStateTransferFrom:(id)a0 toState:(id)a1 observer:(id)a2 action:(SEL)a3 priority:(long long)a4;
- (void)__callActionWithTarget:(id)a0 action:(SEL)a1 eventContext:(id)a2;
- (id)parseParamsWithEventContext:(id)a0;
- (id)observeStateTransferFrom:(id)a0 toStates:(id)a1 observer:(id)a2 action:(SEL)a3 priority:(long long)a4;
- (id)observeStateTransferFrom:(id)a0 toStates:(id)a1 block:(id /* block */)a2 priority:(long long)a3;
- (id)observeStateTransferFrom:(id)a0 toState:(id)a1 block:(id /* block */)a2;
- (id)observeStateTransferFrom:(id)a0 toStates:(id)a1 observer:(id)a2 action:(SEL)a3;
- (id)observeStateTransferFrom:(id)a0 toStates:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
