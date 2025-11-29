@class UILabel, UIButton, UIView;

@interface AWEOpenPlatformHalfAuthManageDescViewController : UIViewController

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (copy, nonatomic) id /* block */ animationBlock;

- (void)backButtonTap;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
