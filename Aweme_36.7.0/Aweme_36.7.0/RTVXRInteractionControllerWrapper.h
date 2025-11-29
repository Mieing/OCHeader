@class NSString, RxThreeTuple, RxDeferred, NSObject;
@protocol RTVXRInteractionObserver, RTVPerformanceMonitorInterface, __RTVXRInteractionController, RxInjector, RTVXRControllerInjector, RTVInteractionConfigureManagerInterface, RTVMultipleDelegateInterface;

@interface RTVXRInteractionControllerWrapper : NSObject <RTVXRInteractionController, RTVXRInteractionObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (retain, nonatomic) NSObject<__RTVXRInteractionController> *xrInteractionController;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigManager;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVXRInteractionObserver> observers;
@property (retain, nonatomic) RxThreeTuple *localAndRemoteDidFinishDeferred;
@property (readonly, nonatomic) id<RTVPerformanceMonitorInterface> performanceMonitor;
@property (copy, nonatomic) NSString *currentMarker;
@property (retain, nonatomic) RxDeferred *didFinishDeferred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
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
- (void)interactionController:(id)a0 willStartInteractionType:(unsigned long long)a1 withBusinessModel:(id)a2;
- (void)interactionController:(id)a0 willFinishInteractionType:(unsigned long long)a1 withBusinessModel:(id)a2 reason:(long long)a3;
- (void)interactionController:(id)a0 didFinishInteractionType:(unsigned long long)a1 withBusinessModel:(id)a2;
- (void)interactionController:(id)a0 didChangeToBizModel:(id)a1 ofInteractionType:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)currentInteractionController;

@end
