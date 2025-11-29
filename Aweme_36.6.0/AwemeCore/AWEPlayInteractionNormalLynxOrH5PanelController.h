@class NSString, UIViewController;
@protocol BDXPopupContainerProtocol, AWEPlayInteractionNormalLynxOrH5PanelLifeCycleDelegateProtocol;

@interface AWEPlayInteractionNormalLynxOrH5PanelController : AWEPlayInteractionNewBaseController <BDXPopupEventProtocol, BDXContainerLifecycleProtocol, AWEPlayInteractionNormalLynxOrH5PanelControllerProtocol>

@property (weak, nonatomic) UIViewController<BDXPopupContainerProtocol> *popupContainer;
@property (nonatomic) BOOL shrinkVideo;
@property (nonatomic) long long enterPanelPlayState;
@property (nonatomic) BOOL panelWillClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL needResumePlay;
@property (nonatomic) BOOL shouldPauseVideoAfterEnterSecondPage;
@property (nonatomic) BOOL shouldPreventAutoPauseVideo;
@property (weak, nonatomic) id<AWEPlayInteractionNormalLynxOrH5PanelLifeCycleDelegateProtocol> lifeCycleDelegate;

- (void)containerWillClose:(id)a0;
- (void)containerViewControllerViewDidLoad:(id)a0;
- (void)containerViewControllerViewDidAppear:(id)a0;
- (void)containerViewControllerViewDidDisAppear:(id)a0;
- (void)containerDidClose:(id)a0;
- (BOOL)isPanelShowed;
- (void)addNotifications;
- (void)popup:(id)a0 willChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withDuration:(double)a3;
- (void)popup:(id)a0 didDragTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)mainAppWindow;
- (void)popupDidCloseWithContainer:(id)a0 params:(id)a1;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (BOOL)openPanelWithSchema:(id)a0 globalProps:(id)a1 shrinkVideo:(BOOL)a2;
- (BOOL)isLynxOrH5PopupWithHost:(id)a0;
- (void)resumePlayIfNeed;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
