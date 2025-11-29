@class NSString, WASplashAdRootView, WAWebViewMutiFuncMenuView, WACapsuleView;
@protocol WASplashADViewControllerDelegate;

@interface WASplashADViewController : MMUIViewController <WAWebViewMutiFuncMenuViewDelegate, WAWebViewMutiFuncMenuViewDataSource, WACapsuleViewDelegate, WACapsuleMenuDataSource, WAAppTaskSystemCoverViewDataSource, WAWebViewControllerMenuActionCustomDelegate>

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) WAWebViewMutiFuncMenuView *funcMenuView;
@property (retain, nonatomic) WASplashAdRootView *adRootView;
@property (retain, nonatomic) WACapsuleView *capsuleView;
@property (nonatomic) BOOL didAppear;
@property (weak, nonatomic) id<WASplashADViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithScene:(unsigned long long)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })capsuleFrame;
- (double)getCapsuleMenuWidth;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)useCustomNavibar;
- (BOOL)hidesStatusBar;
- (void)addNotifications;
- (void)removeNotifications;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;
- (void)onClickButtonClicked:(id)a0;
- (id)backgroundColor;
- (void)onWebViewMenuReturn;
- (void)capsuleViewOnClickMore:(id)a0;
- (void)capsuleViewOnClickExit:(id)a0;
- (unsigned long long)leftButtonTypeForMultiFuncMenuView:(id)a0;
- (BOOL)webViewControllerMenuMustNotShare:(id)a0;
- (BOOL)webViewControllerMenuMustNotShareTimeline:(id)a0;
- (BOOL)webViewControllerMenuMustShowGoHomeInWeApp:(id)a0;
- (BOOL)webViewControllerMenuMustNotShowADMenuItem:(id)a0;
- (BOOL)webViewControllerMenuMustNotHandleMenuShowOrDismiss:(id)a0;
- (BOOL)capsuleMenuHidden;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })capsuleMenuOriginalFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })capsuleMenuFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateCapsuleMenuFrame:(double)a0;
- (long long)capsuleMenuStyleMode;
- (BOOL)systemCoverViewHidden;
- (void).cxx_destruct;

@end
