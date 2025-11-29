@class UILabel, DUXSwitch, UIButton;

@interface AWEPushSettingsGuideBannerView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) DUXSwitch *switchControl;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) BOOL isPushEnabled;

- (void)jumpNotification;
- (void)updateUIWithPushModel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
