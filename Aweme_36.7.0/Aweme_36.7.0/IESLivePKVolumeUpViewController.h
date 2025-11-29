@class UISwitch, UIImageView, UILabel, UIView, HTSLivePKApi;

@interface IESLivePKVolumeUpViewController : IESLiveRevenueInteractPopupViewController

@property (nonatomic) long long source;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UISwitch *switchButton;
@property (retain, nonatomic) UIView *sepetorLineView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) HTSLivePKApi *pkApi;

- (void)onSetupNavBar:(id)a0;
- (id)__boolToString:(BOOL)a0;
- (void)__switchAction:(id)a0;
- (BOOL)__stringToBool:(id)a0;
- (id)initWithSource:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupViews;

@end
