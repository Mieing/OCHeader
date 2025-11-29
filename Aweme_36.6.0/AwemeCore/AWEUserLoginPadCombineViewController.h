@class AWEUserLoginCombineViewModel, UIView;

@interface AWEUserLoginPadCombineViewController : AWEUserLoginBaseViewController

@property (retain, nonatomic) AWEUserLoginCombineViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *avatarContentView;

+ (Class)aAWEUserLoginCombineViewControllerAdapterClass;

- (id)pageBtm;
- (id)initWithCombineLoginUsers:(id)a0;
- (void)setupBgViewIfNeed;
- (void)setupLoginComponentView;
- (void)bindUI;
- (id)aAWEUserLoginCombineViewControllerAdapter;
- (void)updateViewLayoutWithHighlyCompact:(BOOL)a0 viewSize:(struct CGSize { double x0; double x1; })a1;
- (void)setupContainerView;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupNavigationBar;

@end
