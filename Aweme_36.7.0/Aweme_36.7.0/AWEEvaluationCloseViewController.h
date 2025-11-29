@class UIButton, UILabel, UIImageView;

@interface AWEEvaluationCloseViewController : UIViewController

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *tipLabel;

- (void)backButtonClick:(id)a0;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)setupUI;

@end
