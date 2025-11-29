@class UIView, AWEPaySKMPayeeInfoModel, NSString, AWEPaySKMCodeImageView, UIImageView, AWEPayIconNameStackView, UIButton, AWEPaySKMCreateOrderRequestModel, UILabel, AWEPayAmountLabel;

@interface AWEPaySKMDynamicCodeViewController : CJPayFullPageBaseViewController

@property (retain, nonatomic) UIImageView *topBgImageView;
@property (retain, nonatomic) AWEPaySKMPayeeInfoModel *payeeInfo;
@property (copy, nonatomic) NSString *amountStr;
@property (copy, nonatomic) NSString *codeUrl;
@property (copy, nonatomic) NSString *codeToken;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) AWEPaySKMCodeImageView *codeImageView;
@property (retain, nonatomic) AWEPayAmountLabel *amountLabel;
@property (retain, nonatomic) AWEPayIconNameStackView *nameView;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIImageView *bottomLogImageView;
@property (retain, nonatomic) UIView *errorView;
@property (retain, nonatomic) UILabel *errorTipsLabel;
@property (retain, nonatomic) UIButton *retryBtn;
@property (retain, nonatomic) AWEPaySKMCreateOrderRequestModel *requestModel;
@property (nonatomic) double pageShowTime;
@property (copy, nonatomic) id /* block */ submitOrder;

- (BOOL)aweDisableFullscreenPopTransition;
- (id)getTrackCommonParams;
- (void)retry:(id)a0;
- (void)hideLoading;
- (void)setupNavigation;
- (void)refreshCode:(BOOL)a0;
- (void)reportTrackEvent:(id)a0 params:(id)a1;
- (void)showErrorView:(BOOL)a0 msg:(id)a1 allowRetry:(BOOL)a2;
- (id)initWithQRCodeUrl:(id)a0 payeeInfo:(id)a1 amountStr:(id)a2;
- (void)close;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)confirm:(id)a0;
- (void)showLoading;

@end
