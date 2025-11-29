@class NSString, UIImageView, UILabel, UIView, AWETeenNextActionButton;

@interface AWETeenCheckSuccessViewController : UIViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *iconBackgroundView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWETeenNextActionButton *confirmButton;
@property (retain, nonatomic) UILabel *reSetPasswordLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)refreshComplianceSettings;
- (void)didNextBtnClicked;
- (void)didResetBtnClicked;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
