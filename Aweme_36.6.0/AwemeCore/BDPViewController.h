@class NSString, BDPNavigationBar, UIView, UINavigationItem;

@interface BDPViewController : UIViewController <BDPDirectionPanGestureSwipeBackModeProtocol, BDPNavigateBackGestureCheckProtocol>

@property (retain, nonatomic) UIView *fullView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) BDPNavigationBar *navigationBar;
@property (nonatomic) BOOL translucent;
@property (nonatomic) unsigned long long orientationMask;
@property (nonatomic) unsigned long long originOrientationMask;
@property (nonatomic) unsigned long long originGlobalOrientationMask;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) UINavigationItem *navigationItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)setNavigationBarBackButton;
- (void)updateNavigationBarStyle;
- (void)updateViewControllerStyle;
- (void)setTranslucent:(BOOL)a0 animated:(BOOL)a1;
- (unsigned long long)popGestureSwipeBackMode;
- (void)backButtonOnClickedForCustomView;
- (void)updateNavigationBarItem;
- (void)updateNavigationTitle:(id)a0;
- (void)setupMainStructure;
- (void)updateMainStructureConstraints:(BOOL)a0;
- (void)updateFullViewConstraints;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (long long)preferredStatusBarUpdateAnimation;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (BOOL)navigationBarHidden;
- (id)internalView;
- (void)updateNavigationTitle;

@end
