@class BDXViewController, BDXPopupViewController, NSString, UIView;
@protocol IESHYHybridViewProtocol, AnnieXContainerBaseProtocol, IESHYHybridViewLifecycleProtocol;

@interface AnnieLiveBizCardLifeCycle : NSObject <BDXContainerLifecycleProtocol>

@property (weak, nonatomic) BDXViewController *pageVC;
@property (weak, nonatomic) BDXPopupViewController *popupVC;
@property (retain, nonatomic) UIView<IESHYHybridViewProtocol> *cardKitViewProxy;
@property (weak, nonatomic) id<AnnieXContainerBaseProtocol> container;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) BOOL shouldShowFloatLive;
@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> puzzleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createLifeCycleWithDelegate:(id)a0;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerWillCreated:(id)a0 view:(id)a1;
- (void)containerDidCreated:(id)a0 view:(id)a1;
- (void)kitViewWillCreate:(id)a0;
- (void)containerWillClose:(id)a0;
- (void)containerWillDestory:(id)a0;
- (void)containerViewControllerViewDidLoad:(id)a0;
- (void)containerViewControllerViewDidDisAppear:(id)a0;
- (void)containerVCViewDidAppear:(id)a0;
- (void)containerVCViewDidDisAppear:(id)a0;
- (BOOL)container:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidStartLoading:(id)a0;
- (void)container:(id)a0 request:(id)a1 decidePolicyForNavigationWithDecisionHandler:(id /* block */)a2;
- (void)container:(id)a0 decidePolicyForNavigationResponse:(id)a1;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidUpdate:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)containerDidClose:(id)a0;
- (void)containerWillDisappear:(id)a0;
- (void)containerDidPageUpdate:(id)a0;
- (void)containerDidConstructJSRuntime:(id)a0;
- (void)container:(id)a0 onKeyBoardChange:(id)a1 eventType:(unsigned long long)a2;
- (void)containerOnAppBecomeActive:(id)a0;
- (void)containerOnAppResignActive:(id)a0;
- (void)containerOnTakeScreenShot:(id)a0;
- (void)containerOnMemoryWarning:(id)a0;
- (void)containerTapOnPopupMask:(id)a0;
- (void)containerPopupStatusChange:(id)a0 status:(long long)a1;
- (void)containerPopupWillClose:(id)a0;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)handlePerfWarning:(id)a0;
- (void)handlePerfWarningRecovered:(id)a0;
- (BOOL)_isPopupIpadPortraitMode;
- (void)p_updateGlobalProps:(id)a0 view:(id)a1;
- (id)p_getAnnieVCExtension:(id)a0;
- (void)p_updateContextData:(id)a0 view:(id)a1;
- (BOOL)p_tryNotifyIesHYControllerDidFinishLoad:(id)a0;
- (id)p_getQueryItems:(id)a0;
- (void)p_postMessage:(id)a0 object:(id)a1;
- (void)handleStatusBarOrientationChanged:(id)a0;
- (void)showFloatLiveWindow;
- (void)hideFloatLiveWindow;
- (void)p_checkAndPostOpenNextPage:(id)a0;
- (void)handleAppActiveStateChange:(BOOL)a0 container:(id)a1;
- (void)p_executePopupAnimationBlockWhenDisappear:(id)a0;
- (void)handleKeyboardDidShowNotification:(id)a0 container:(id)a1;
- (void)handleKeyboardDidHideNotification:(id)a0 container:(id)a1;
- (void)handleViewVisiablityChange:(BOOL)a0 container:(id)a1;
- (void)p_registerCustomView:(id)a0 kitView:(id)a1;
- (void)p_registerCustomShadowNode:(id)a0 kitView:(id)a1;
- (void)p_postWillOpenNextPageNotification:(id)a0;
- (void)notifyKeyboardVisibilityChange:(BOOL)a0 height:(double)a1 container:(id)a2;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (long long)_currentTime;

@end
