@class AWEVCDAccountAlertModel, AWECloseInterConnectS4View, AWEAuthorizeStateManager, UIButton;

@interface AWEVCDCloseInterConnectS4ViewController : UIViewController

@property (retain, nonatomic) AWECloseInterConnectS4View *contentView;
@property (retain, nonatomic) UIButton *closeInterConnectButton;
@property (weak, nonatomic) AWEAuthorizeStateManager *authorizeStateManager;
@property (weak, nonatomic) AWEVCDAccountAlertModel *model;

- (void)nextAction:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
