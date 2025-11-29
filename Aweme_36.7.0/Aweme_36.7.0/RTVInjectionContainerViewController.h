@class RTVVoipAuthorizationViewController, RxThreeTuple, RxDeferred, NSString, NSMutableDictionary, RTVVoipTracker, NSMutableSet, RTVVoipToastHandler, RTVVoipSession;
@protocol RxInjector, RTVMultipleDelegateInterface, RTVXRRoomSessionControllerInterface, RTVVoipAudioCoordinatorProtocol, RTVXRControllerInjector, RTVFeedSharePreloadControllerInterface, RTVXRInteractionObserver, RTVVoipManagerInterface, RTVInteractionConfigureManagerInterface, RTVXRBusinessContextDelegate, RTVUserProfileManagerInterface, __RTVVoipContextManagerPrivateInterface;

@interface RTVInjectionContainerViewController : UINavigationController <RTVXRControllerInterface, RTVXRRoomSessionControllerDelegate, RTVXRRoomSessionControllerObserver, RTVInjectionContainerViewController> {
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
@property (readonly, nonatomic) id<RTVVoipAudioCoordinatorProtocol> audioSessionCoordinator;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (retain, nonatomic) RxThreeTuple *localAndRemoteDidFinishDeferred;
@property (readonly, nonatomic) id<__RTVVoipContextManagerPrivateInterface> voipContextCenter;
@property (readonly, nonatomic) RTVVoipAuthorizationViewController *authorizationViewController;
@property (retain, nonatomic) RxDeferred *authorizationDeferred;
@property (weak, nonatomic) RTVVoipSession *voipSession;
@property (nonatomic) BOOL authViewLoaded;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVXRBusinessContextDelegate> delegate;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isBigFontContainer;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__showToast:(id)a0;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (id)scopeKey;
- (void)__configComponents;
- (void)notifyChangeActive:(BOOL)a0;
- (void)notifyDidChangeActive:(BOOL)a0;
- (void)rtvSession:(id)a0 statusDidChangeTo:(long long)a1 fromStatus:(long long)a2;
- (void)renderWithBusinessHandler:(id)a0 context:(id)a1;
- (void)switchFullScreenWithAnimator:(id)a0;
- (void)switchNarrowWithAnimator:(id)a0;
- (void)onChatRoomCreate;
- (void)configInitialContainer;
- (void)voipSession:(id)a0 didReceiveEvent:(id)a1;
- (void)setupAuthView;
- (void)__handleRoomDestoryEvent:(id)a0;
- (void)__laterDismiss:(double)a0;
- (void)__prepareVoipInfoIfNeed;
- (void)__checkAuthorization;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)setupView;
- (long long)containerType;
- (BOOL)isVideoCall;

@end
