@class RTVCompoundEventObserver, RTVStateTransferNotificationCenter, NSString, RTVStateTransferActionHandlerManager, RTVStateMachine, RTVVoipMonitor;
@protocol RTVStateMachineLogService, RTVEventObserver, RTVVoipModelStoreInterface, RTVStateProtocol, RTVVoipService;

@interface RTVStateMachineComponent : RTVComponentBase <RTVStateMachineInterface, RTVStateMachineLogService, RTVStateTransferActionHandlerManagerInterface, RTVStateMachineDelegate>

@property (retain, nonatomic) RTVStateTransferActionHandlerManager *stateActionHandlerManager;
@property (retain, nonatomic) RTVStateTransferNotificationCenter *notificationCenter;
@property (retain, nonatomic) RTVStateMachine *stateMachine;
@property (retain, nonatomic) RTVVoipMonitor *monitor;
@property (retain, nonatomic) id<RTVEventObserver> observer;
@property (retain, nonatomic) RTVCompoundEventObserver *stateObserver;
@property (readonly, nonatomic) id<RTVVoipService> voipService;
@property (readonly, nonatomic) id<RTVVoipModelStoreInterface> voipStore;
@property (readonly) id<RTVStateProtocol> currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVStateMachineLogService> logService;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)reactEvent:(id)a0;
- (id)reactEvent:(id)a0 context:(id)a1;
- (BOOL)removeStateChangeObserver:(id)a0;
- (void)stateMachine:(id)a0 didTransferFrom:(id)a1 to:(id)a2 context:(id)a3;
- (void)handleTransferToCallingFrom:(id)a0 toState:(id)a1 context:(id)a2;
- (void)handleTransferToAcceptFrom:(id)a0 toState:(id)a1 context:(id)a2;
- (void)handleTransferToLiveVideoChatFrom:(id)a0 toState:(id)a1 context:(id)a2;
- (void)trackStateMachineEventKey:(id)a0 trackInfo:(id)a1;
- (void)logStateMachineInfo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)addStateChangeObserver:(id)a0;
- (id)handleAction:(id)a0;

@end
