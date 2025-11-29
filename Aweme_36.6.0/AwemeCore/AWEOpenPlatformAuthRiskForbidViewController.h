@class UIImageView, UILabel, DUXButton;

@interface AWEOpenPlatformAuthRiskForbidViewController : UIViewController

@property (retain, nonatomic) UIImageView *forbidIcon;
@property (retain, nonatomic) UILabel *riskTitle;
@property (retain, nonatomic) UILabel *riskDesc;
@property (retain, nonatomic) DUXButton *knowButton;
@property (copy, nonatomic) id /* block */ willCloseVCBlock;

- (void)setupCustomNavigationBar;
- (void)leftCloseTapped;
- (void)knowButtonTouch;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
