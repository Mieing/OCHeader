@class UIImageView, IESLiveAudienceInteractiveSettingPlayModeConfiguration, UILabel, UIView;

@interface IESLiveAudienceInteractiveSettingPlayModeSwitchView : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *badgeLabel;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) IESLiveAudienceInteractiveSettingPlayModeConfiguration *configuration;

- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;
- (void)updateWithConfiguration:(id)a0;

@end
