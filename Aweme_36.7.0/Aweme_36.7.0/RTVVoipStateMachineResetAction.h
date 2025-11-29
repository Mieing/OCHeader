@protocol RTVStateMachineInterface, RxInjector, RTVVoipContextManagerInterface;

@interface RTVVoipStateMachineResetAction : RTVBaseStateAction

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (readonly, weak, nonatomic) id<RTVStateMachineInterface> stateMachine;
@property (readonly, nonatomic) BOOL ignoreCheckInVoipState;

- (void)rxAwakeFromPropertyInjection;
- (id)checkResetStateStateMachine;
- (id)__checkVoipModelAndStateMachine;
- (void)updateIgnoreCheckInVoipState:(BOOL)a0;
- (void).cxx_destruct;

@end
