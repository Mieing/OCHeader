@class NSString, IESGCPCGInterceptorManager;
@protocol IESGCPCGContainer;

@interface IESGCPCGContainerComponent : IESGCPCGInstanceBaseComponent <IESGCPCGContainerRouter, IESGCPCGContainerDelegate, IESGCPCGInstanceActions>

@property (weak, nonatomic) id<IESGCPCGContainer> container;
@property (copy, nonatomic) NSString *sourcePage;
@property (nonatomic) BOOL isDismissByHideMethod;
@property (nonatomic) BOOL inQueue;
@property (retain, nonatomic) IESGCPCGInterceptorManager *willHideContainerInterceptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewControllerDidAppear:(id)a0;
- (void)viewControllerDidDisappear:(id)a0;
- (void)componentDestroy;
- (id)relayContainer;
- (BOOL)showContainerBeforeInit;
- (void)showQuitAlertView:(id)a0;
- (void)addContainerHidingInterceptionAction:(id /* block */)a0;
- (void)showContainerFromSourcePage:(id)a0 WithCompletion:(id /* block */)a1;
- (void)hideContainer:(id /* block */)a0;
- (id)serviceBindingProtocols;
- (id)multiBindingProtocols;
- (void)componentDidAttached;
- (void)_removeLayerFromContainerIfNeeded;
- (void)_showLiveQuitAlertViewWithReason:(id)a0;
- (void)_showVideoQuitAlertViewWithReason:(id)a0;
- (void)_bindContainer:(id)a0;
- (void)_setNeedsDisplayWithCompletion:(id /* block */)a0;
- (void)_moveLayerToContainerIfNeeded;
- (void)_invalidDismissCheck;
- (void)_doDismissClean;
- (void)_notifyRTCEnginIsBackground:(BOOL)a0;
- (void)trackExitPopupClickWithButtonType:(id)a0;
- (void)trackExitPopupShow;
- (void)viewControllerWillLayoutSubviews:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isShowing;
- (id)containerView;
- (void)dealloc;
- (void)_didBecomeActive:(id)a0;
- (void)_willResignActive:(id)a0;
- (void)viewControllerWillAppear:(id)a0;
- (void)viewControllerWillDisappear:(id)a0;
- (void)_addNotificationObserver;
- (void)_removeNotificationObserver;

@end
