@class NSString, RTVVoipSession;
@protocol RTVUserProfileManagerInterface, RTVMultipleDelegateInterface, RxInjector, RTVXRControllerInjector, RTVParticipantsObserveControllerListener, RTVVoipFeatureCheckController;

@interface RTVParticipantsObserveController : NSObject <RTVVoipSessionObserver, RTVParticipantsObserveController>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVParticipantsObserveControllerListener> listeners;
@property (readonly, weak, nonatomic) id<RTVVoipFeatureCheckController> featureCheckController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, weak, nonatomic) RTVVoipSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)__log:(id)a0;
- (void)rtvSession:(id)a0 participatorsDidChange:(id)a1 oldParticipators:(id)a2;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (void)addListener:(id)a0;
- (void)dealloc;

@end
