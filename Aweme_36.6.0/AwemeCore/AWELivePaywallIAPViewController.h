@class AWEUILoadingView, NSDictionary, UILabel, UIView, UIButton;

@interface AWELivePaywallIAPViewController : UIViewController

@property (copy, nonatomic) NSDictionary *iapBiz;
@property (nonatomic) BOOL isPaying;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *descripeLabel;
@property (retain, nonatomic) UIButton *payButton;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isLoadingView;

+ (void)showPaywallNativeIAPViewControllerWithBiz:(id)a0 completion:(id /* block */)a1;
+ (void)showPaywallLoadingViewControllerWithBiz:(id)a0 completion:(id /* block */)a1;

- (id)initWithBiz:(id)a0 completion:(id /* block */)a1 isLoadingView:(BOOL)a2;
- (void)viewDidLoadForLoadingView;
- (void)viewDidLoadForPayView;
- (void)payButtonAction;
- (void)finishPayWithIsSuccess:(BOOL)a0 error:(id)a1 orderInfo:(id)a2;
- (void).cxx_destruct;
- (long long)modalPresentationStyle;
- (void)viewDidLoad;
- (void)cancelButtonAction;

@end
