@class NSString, RxScheduler, NSMutableSet, RTVEffectGameTracker, RTVCompactStateMachine;
@protocol RTVInteractionConfigurator, RTVEffectGameSession, RTVMultipleDelegateInterface, RTVXRRoomSessionControllerInterface, RTVEffectGameMonitor, RTVEffectGameObserver, RTVEffectGameManager, RTVUserProfileManagerInterface, RTVXRControllerInjector, RTVInteractionConfigureManagerInterface, RxInjector, RTVEffectGameScopeController, RTVXRRoomMessageSender;

@interface RTVEffectGameController : NSObject <RTVCompactStateMachineDelegate, RTVEffectGameController, RTVEffectGameSessionObserver, RTVXRRoomMessageSenderObserver, RTVXRRoomSessionControllerDelegate, RTVCompactStateMachineDelegate> {
    id<RTVEffectGameSession> _gameSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVEffectGameScopeController> scopeController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVEffectGameMonitor> monitor;
@property (readonly, nonatomic) id<RTVEffectGameSession> gameSession;
@property (readonly, nonatomic) id<RTVXRRoomMessageSender> messageSender;
@property (readonly, nonatomic) id<RTVEffectGameManager> effectGameManager;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVEffectGameObserver> observers;
@property (readonly, nonatomic) RTVEffectGameTracker *tracker;
@property (readonly, nonatomic) NSMutableSet *gameRoomNotifiedType;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) RTVCompactStateMachine *stateMachine;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly, copy, nonatomic) NSString *currentProfileIMID;
@property (readonly, copy, nonatomic) NSString *startedGameRoom;
@property (nonatomic) BOOL isPreparing;
@property (readonly, nonatomic) id<RTVInteractionConfigurator> interactionConfigurator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (id)scopeKey;
- (void)__configComponents;
- (BOOL)needPreResumeInteraction;
- (id)scopeInjector;
- (id)interactionSession;
- (id)interactiontTracker;
- (void)messageSender:(id)a0 didReceiveMessage:(id)a1;
- (void)stateMachine:(id)a0 didFireEvent:(id)a1 result:(BOOL)a2 transition:(id)a3;
- (BOOL)isFromInteractionTypeChange;
- (id)currentOwnerIdentifier;
- (void)__finishEffectGameWithReason:(unsigned long long)a0;
- (void)effectGameSession:(id)a0 willFinishWithReason:(unsigned long long)a1;
- (void)effectGameSession:(id)a0 didFinishWithReason:(unsigned long long)a1;
- (void)__makeStateMachine:(id)a0;
- (void)__effectGameSession:(id)a0 willFinishWithReason:(unsigned long long)a1;
- (void)configInterationViewController:(id)a0;
- (id)joinWithModel:(id)a0 context:(id)a1;
- (id)invokeWithModel:(id)a0 context:(id)a1;
- (BOOL)joinInteractionWithModel:(id)a0;
- (void)autoDownloadGameIfNeed:(id)a0;
- (BOOL)enterInteractionWithModel:(id)a0 context:(id)a1;
- (id)stopInteractionWithReason:(unsigned long long)a0;
- (id)createInterationViewController;
- (id)createNarrowInterationViewController;
- (id)currentInteractionIconString;
- (void)markInteractionStartWithID:(id)a0;
- (void)voipSession:(id)a0 didReceiveGameNotify:(id)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)isInteracting;
- (id)interactionType;
- (id)sessionController;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
