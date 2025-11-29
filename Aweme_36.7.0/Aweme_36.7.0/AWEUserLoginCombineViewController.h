@class AWEUserLoginCombineViewModel, UIView;

@interface AWEUserLoginCombineViewController : AWEUserLoginBaseViewController

@property (retain, nonatomic) AWEUserLoginCombineViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;

+ (Class)aAWEUserLoginThemeAdapterClass;
+ (Class)aAWEUserLoginCombineViewControllerAdapterClass;

- (id)pageBtm;
- (id)aAWEUserLoginThemeAdapter;
- (id)initWithCombineLoginUsers:(id)a0;
- (void)setupBgViewIfNeed;
- (void)setupLoginComponentView;
- (void)bindUI;
- (id)aAWEUserLoginCombineViewControllerAdapter;
- (void)setupContainerView;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupNavigationBar;

@end
