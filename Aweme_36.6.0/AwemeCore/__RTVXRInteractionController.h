@class NSMutableDictionary, RxThreeTuple, NSMutableSet, RTVVoipToastHandler, NSString;
@protocol RxInjector, RTVMultipleDelegateInterface, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVFeedSharePreloadControllerInterface, RTVXRInteractionObserver, RTVInteractionConfigureManagerInterface, RTVUserProfileManagerInterface;

@interface __RTVXRInteractionController : NSObject <__RTVXRInteractionController, RTVXRInteractionController, RTVXRControllerInterface, RTVFeedObserver, RTVEffectGameObserver, RTVXRRoomSessionControllerDelegate, RTVXRRoomSessionControllerObserver> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex_lock;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVXRControllerInjector> controllerInjectorHolder;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) RTVVoipToastHandler *toastHandler;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVXRInteractionObserver> observers;
@property (readonly, nonatomic) NSMutableDictionary *controllerMap;
@property (readonly, nonatomic) NSMutableSet *gameRoomNotifiedType;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly, weak, nonatomic) id<RTVFeedSharePreloadControllerInterface> feedSharePreloadController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (retain, nonatomic) RxThreeTuple *localAndRemoteDidFinishDeferred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__showToast:(id)a0;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (id)scopeKey;
- (void)__configComponents;
- (unsigned long long)currentInteractionType;
- (BOOL)isInteractingOfType:(unsigned long long)a0;
- (id)controllerProtocolWithInteractionType:(unsigned long long)a0;
- (id)interactionControllerForType:(unsigned long long)a0;
- (id)interactionControllerForProtocol:(id)a0;
- (id)currentOwnerIdentifierOfType:(unsigned long long)a0;
- (BOOL)isInteractionFusionRoom;
- (BOOL)isEnableShowGameTogetherWithPanel;
- (unsigned long long)needPreResumeInteraction;
- (id)interactionSnapshotView;
- (id)currentInteractionIconStringOfType:(unsigned long long)a0;
- (id)createInteractionViewController:(unsigned long long)a0;
- (id)invokeWithInteractionType:(unsigned long long)a0 interactionData:(id)a1 interactionContext:(id)a2;
- (id)invokeWithInteractionType:(unsigned long long)a0 interactionData:(id)a1;
- (id)joinInteractionType:(unsigned long long)a0 withModel:(id)a1;
- (id)resumeInteractionType:(unsigned long long)a0;
- (id)stopInteractionOfType:(unsigned long long)a0 reason:(unsigned long long)a1;
- (id)changeInteractionToType:(unsigned long long)a0 context:(id)a1;
- (void)interactionOfType:(unsigned long long)a0 remoteDidFinfishWithReason:(long long)a1 result:(BOOL)a2;
- (void)interactionOfType:(unsigned long long)a0 localDidFinfishWithReason:(long long)a1 result:(BOOL)a2;
- (void)feedController:(id)a0 didChangeToShareModel:(id)a1;
- (void)rtvSession:(id)a0 statusDidChangeTo:(long long)a1 fromStatus:(long long)a2;
- (void)setControllerInjector:(id)a0;
- (void)effectGameController:(id)a0 didFinishWithModel:(id)a1;
- (void)effectGameController:(id)a0 willFinishWithModel:(id)a1 reason:(unsigned long long)a2;
- (void)effectGameController:(id)a0 willStartWithModel:(id)a1;
- (void)voipSession:(id)a0 didReceiveGameNotify:(id)a1;
- (void)feedController:(id)a0 willStartWithShareModel:(id)a1;
- (void)feedController:(id)a0 willFinishWithShareModel:(id)a1 reason:(long long)a2;
- (void)feedController:(id)a0 didFinishWithShareModel:(id)a1;
- (id)__typeToProtocol;
- (id)__controllerInMap:(unsigned long long)a0;
- (id)__createControllerOfType:(unsigned long long)a0;
- (void)__setController:(id)a0 intoMapWithType:(unsigned long long)a1;
- (id)__controllerOfType:(unsigned long long)a0;
- (void)__createFeedControllerForCalleeIfNeededBasedOnStatus:(long long)a0;
- (unsigned long long)__otherInteractingTypeExcept:(unsigned long long)a0;
- (id)__businessNameWithInteractionType:(unsigned long long)a0;
- (id)__realInvokeWithInteractionType:(unsigned long long)a0 interactionData:(id)a1 interactionContext:(id)a2;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (id)currentInteractionController;

@end
