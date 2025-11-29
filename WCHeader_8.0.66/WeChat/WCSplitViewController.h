@class UINavigationController, NSString, UIImageView, UIView, UIViewController;

@interface WCSplitViewController : UIViewController <WCSplitDetailTransitionDelegate, IUiUtilExt>

@property (nonatomic) long long displayMode;
@property (nonatomic) double separatorWidth;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIImageView *snapshotImageView;
@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (nonatomic) double primaryWidth;
@property (nonatomic) BOOL autoCalculatePrimaryWidth;
@property (readonly, nonatomic) long long currentDisplayMode;
@property (readonly, nonatomic) long long currentDetailShowType;
@property (retain, nonatomic) UIViewController *primaryViewController;
@property (retain, nonatomic) UINavigationController *detailEmptyViewController;
@property (readonly, nonatomic) UIViewController *detailViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)onMainWindowFrameChanged;
- (id)detailTopNavigationController;
- (id)showDetailViewController:(id)a0 showType:(long long)a1;
- (id)showDetailViewController:(id)a0 showType:(long long)a1 animated:(BOOL)a2 complete:(id /* block */)a3;
- (void)internelShowDetailViewController:(id)a0 canMixed:(BOOL)a1 showType:(long long)a2 forceFullScreen:(BOOL)a3 animated:(BOOL)a4 complete:(id /* block */)a5;
- (void)presentDetailViewController:(id)a0 showType:(long long)a1 forceFullScreen:(BOOL)a2 animated:(BOOL)a3 complete:(id /* block */)a4;
- (void)dismissDetailViewController:(BOOL)a0;
- (void)dismissDetailViewController:(BOOL)a0 completion:(id /* block */)a1;
- (void)setPrimaryHidden:(BOOL)a0;
- (long long)transitionTypeForAnimator:(id)a0;
- (void)onPresentingBeginAppearanceTransition:(BOOL)a0 animated:(BOOL)a1;
- (void)onPresentingEndAppearance;
- (void)onDetailViewControllerWillChangeMode:(BOOL)a0;
- (void)onDetailViewControllerDidChangeMode:(BOOL)a0;
- (BOOL)detailForceFullscreen;
- (BOOL)isInSplitMode;
- (void)updateContentLayout;
- (void)changeDisplayMode:(long long)a0;
- (void)updateDetailViewControllerDisplayMode:(long long)a0;
- (BOOL)detailViewControllerForceFullscreen;
- (BOOL)shouldUseSplitMode;
- (void)addDetailSnapshot;
- (void)removeDetailSnapshot;
- (void).cxx_destruct;

@end
