@class UIViewController, AFDPureModeConfiguration, AWEAwemeModel;
@protocol AFDRichContentContainerViewControllerProtocol;

@interface AFDPureModePageContainerViewController : AWEShellViewController <AFDPureModePageContainerShellProtocol, AFDPureModePageInnerContextProvider, AFDPureModePageViewControllerProtocol> {
    void /* unknown type, empty encoding */ isFromAlbumDetailPage;
    void /* unknown type, empty encoding */ statusStyle;
    void /* unknown type, empty encoding */ originScrollEnable;
    void /* unknown type, empty encoding */ exitTransitionDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fullscreenModeSwitcher;
    void /* unknown type, empty encoding */ startStayTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_normalCellVC;
}

@property (nonatomic, retain) AWEAwemeModel *model;
@property (nonatomic, retain) AFDPureModeConfiguration *configuration;
@property (nonatomic, weak) void /* function */ customization;
@property (nonatomic, weak) void /* function */ eventTracker;
@property (nonatomic, weak) void /* function */ feedContainer;
@property (nonatomic, readonly) UIViewController<AFDRichContentContainerViewControllerProtocol> *container;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;

- (void)viewDidDisappear:(BOOL)a0;
- (void)setHide:(BOOL)a0;
- (id)currentAwemeModel;
- (void)didUpdatePlayerController:(id)a0;
- (void)inner_pinchTransitionDidFinish;
- (void)addGestureToVideoPlayerView:(id)a0;
- (id)currentAlbumContainer;
- (id)currentCellVCContext;
- (void)dismissByExitMethod:(long long)a0;
- (void)adjustTargetContentOffsetIfNeeded;
- (BOOL)needUpdatePlayerWhenBackFromPinchView;
- (id)getTransitionForegroundViewWithTransitionType:(unsigned long long)a0;
- (void)updateTransitionForegroundView:(id)a0 transitionType:(unsigned long long)a1;
- (id)createControllerManager;
- (void)inner_pinchTransitionWillBegin;
- (void)inner_pinchTransitionDidCancel;
- (void)outer_pinchTransitionWillBegin;
- (void)outer_pinchTransitionDidFinish;
- (void)outer_pinchTransitionDidCancel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getPureModeContainerFrame;
- (unsigned long long)getAnimationTypeWhenDismissPureMode;
- (id)getOutAlbumContainer;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createContext;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
