@class AWEVCDNextActionButton, AWEAuthorizeStateManager, AWEVCDAccountAlertModel, NSString, AWECloseInterConnectStepView, AWECloseInterConnectTextView, UIView;

@interface AWEVCDCloseInterConnectS3ViewController : UIViewController

@property (retain, nonatomic) AWECloseInterConnectStepView *stepView;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) AWECloseInterConnectTextView *textView;
@property (retain, nonatomic) AWEVCDNextActionButton *closeInterConnectButton;
@property (retain, nonatomic) AWEVCDNextActionButton *skipButton;
@property (nonatomic) long long buttonTag;
@property (weak, nonatomic) AWEAuthorizeStateManager *authorizeStateManager;
@property (weak, nonatomic) AWEVCDAccountAlertModel *model;
@property (retain, nonatomic) NSString *enterFrom;

- (void)closeAction:(id)a0;
- (void)setNavigationBar;
- (void)nextAction:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;

@end
