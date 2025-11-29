@class AWEUserLoginCarrierViewModel, UIView;

@interface AWEUserLoginCarrierViewController : AWEUserLoginBaseViewController

@property (retain, nonatomic) AWEUserLoginCarrierViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;

+ (Class)aAWEUserLoginThemeAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;
+ (Class)aAWEUserLoginCarrierViewControllerAdapterClass;

- (id)pageBtm;
- (id)aAWEUserLoginThemeAdapter;
- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (id)initWithPhoneModel:(id)a0;
- (void)setupBgViewIfNeed;
- (void)setupLoginComponentView;
- (id)aAWEUserLoginCarrierViewControllerAdapter;
- (void)setupContainerView;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupNavigationBar;

@end
