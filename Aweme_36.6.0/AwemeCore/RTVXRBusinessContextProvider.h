@class NSString, __RTVXRBusinessRoomContextManager, RTVVoipModel, RTVVoipSession, UIViewController;
@protocol RxInjector, RTVXRBusinessContextSessionObserver, RTVMultipleDelegateInterface, RTVXRBusinessSessionActionControllerObserver, RTVAuthCheckerInterface, RTVXRContainer, RTVXRContextInterface, RTVXRSettingsInterface, RTVSettingsManager, RTVXRRoomActionController, RTVVoipConfigureManagerInterface, RTVXRControllerInjector;

@interface RTVXRBusinessContextProvider : NSObject <RTVXRBusinessContextProvider, RTVXRBusinessSessionActionController>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) RTVVoipSession *voipSession;
@property (retain, nonatomic) UIViewController<RTVXRContainer> *voipSessionController;
@property (retain, nonatomic) id<RTVAuthCheckerInterface> authChecker;
@property (readonly, nonatomic) RTVVoipModel *voipModel;
@property (readonly, nonatomic) id<RTVXRContextInterface> context;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVXRBusinessContextSessionObserver> sessionObservers;
@property (retain, nonatomic) id<RTVMultipleDelegateInterface, RTVXRBusinessSessionActionControllerObserver> sessionActionListeners;
@property (readonly, nonatomic) __RTVXRBusinessRoomContextManager *roomContextManager;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> settingManager;
@property (readonly, nonatomic) id<RTVSettingsManager> rtvSettingsManager;
@property (readonly, nonatomic) id<RTVXRRoomActionController> roomActionController;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configManager;
@property (readonly, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)rtv_prepareRemoveFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)didPerformAction:(id)a0 withResult:(id)a1;
- (void)switchSessionWithRoomModel:(id)a0;
- (void)createOrUpdateCurrentSession;
- (void)notifyCurrentSessionFinish;
- (id)loadInitialContainers;
- (id)createContainerWithModel:(id)a0;
- (id)createContainerWithType:(long long)a0;
- (id)finishForwardTask;
- (BOOL)__sessionIsRunning:(id)a0;
- (void)__doCreateVoipSession;
- (BOOL)__checkVoipAuthorizationIsEnable:(id)a0;
- (id)__createInjectionContainerViewController;
- (id)__createVoipNarrowViewController;
- (id)__createVoipViewControllerIfNeeded;
- (id)__createInterationViewController:(id)a0;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)addListener:(id)a0;
- (id)currentSession;
- (id)widgetView;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
