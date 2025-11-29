@class DUXLoadingToast, UIImageView, UILabel, UIView, UIButton;

@interface AWEPayNFCRedirectErrorPage : CJPayFullPageBaseViewController

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *retryBtn;
@property (copy, nonatomic) id /* block */ retryAction;
@property (copy, nonatomic) id /* block */ didClickBack;
@property (nonatomic) unsigned long long errorType;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;

- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (BOOL)aweDisableFullscreenPopTransition;
- (void)setupNavigation;
- (void)endLoading;
- (void)updateWithErrorType:(unsigned long long)a0;
- (void)retryDidClick;
- (id)initWithErrorType:(unsigned long long)a0 retryAction:(id /* block */)a1 didClickBack:(id /* block */)a2;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)showError:(BOOL)a0;
- (void)back;

@end
