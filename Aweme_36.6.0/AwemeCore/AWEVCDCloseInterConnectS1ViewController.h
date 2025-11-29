@class AWECloseInterConnectAvatarView, UIView, AWECloseInterConnectTextView, NSString, AWEVCDAccountAlertModel, UIButton, AWEAuthorizeStateManager, AWECloseInterConnectStepView;

@interface AWEVCDCloseInterConnectS1ViewController : UIViewController

@property (retain, nonatomic) AWECloseInterConnectStepView *stepView;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) AWECloseInterConnectTextView *textView;
@property (retain, nonatomic) AWECloseInterConnectAvatarView *avatarView;
@property (retain, nonatomic) UIButton *closeInterConnectButton;
@property (weak, nonatomic) AWEAuthorizeStateManager *authorizeStateManager;
@property (weak, nonatomic) AWEVCDAccountAlertModel *model;
@property (retain, nonatomic) NSString *enterFrom;

- (void)closeAction:(id)a0;
- (void)setNavigationBar;
- (void)nextAction:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
