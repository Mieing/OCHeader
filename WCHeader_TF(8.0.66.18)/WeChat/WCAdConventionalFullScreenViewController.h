@class NSString, UIImageView, WCAdConventionalHalfScreenMediaBaseView, MMUIButton, WCAdConventionalHalfScreenDetailBaseView;

@interface WCAdConventionalFullScreenViewController : MMUIViewController <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIImageView *topMaskView;
@property (retain, nonatomic) MMUIButton *leftBarButton;
@property (retain, nonatomic) WCAdConventionalHalfScreenMediaBaseView *mediaView;
@property (weak, nonatomic) WCAdConventionalHalfScreenDetailBaseView *detailView;
@property (copy, nonatomic) id /* block */ didAppearBlock;
@property (copy, nonatomic) id /* block */ popTransitionBlock;
@property (copy, nonatomic) id /* block */ willDisappearBlock;
@property (copy, nonatomic) id /* block */ didDisappearBlock;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMediaView:(id)a0 detailView:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)hidesStatusBar;
- (BOOL)useTransparentNavibar;
- (BOOL)needCloseOnOrientationChanged;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onLeftBarButtonClicked;
- (void)configPushTransitionCustomWithDidAppearBlock:(id /* block */)a0 popTransitionBlock:(id /* block */)a1 willDisappearBlock:(id /* block */)a2 didDisappearBlock:(id /* block */)a3;
- (void)dismissFullScreenView;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)animateTransition:(id)a0 fromVC:(id)a1 toVC:(id)a2 fromView:(id)a3 toView:(id)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcMediaContentOriginFrameForMediaImage:(id)a0;
- (id)fetchMediaViewCurrentSnapshot;
- (void).cxx_destruct;

@end
