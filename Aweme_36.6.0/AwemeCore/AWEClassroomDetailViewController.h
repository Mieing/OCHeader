@interface AWEClassroomDetailViewController : UIViewController <AWERouterViewControllerProtocol, UIViewControllerTransitioningDelegate, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_holderView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_player;
    void /* unknown type, empty encoding */ holderViewSize;
    void /* unknown type, empty encoding */ curVideoMaxLimitPlayerHeight;
    void /* unknown type, empty encoding */ snapshotListContentOffsetY;
    void /* unknown type, empty encoding */ videoSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_retryView;
    void /* unknown type, empty encoding */ noteView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sheetContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sheetBackgroundView;
    void /* unknown type, empty encoding */ sheet;
    void /* unknown type, empty encoding */ isSheetShowing;
    void /* unknown type, empty encoding */ isAudioFullScreenPresented;
    void /* unknown type, empty encoding */ $__lazy_storage_$_landscapeNavigationController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_landscapeController;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ previewManager;
    void /* unknown type, empty encoding */ lastVisibleTime;
    void /* unknown type, empty encoding */ visibleByAlert;
    void /* unknown type, empty encoding */ shouldKickout;
    void /* unknown type, empty encoding */ kickoutShowing;
    void /* unknown type, empty encoding */ shouldShowKickout;
    void /* unknown type, empty encoding */ pageVisible;
    void /* unknown type, empty encoding */ initTime;
    void /* unknown type, empty encoding */ requestTime;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)didBecomeActive;
- (void)willResignActive;
- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
