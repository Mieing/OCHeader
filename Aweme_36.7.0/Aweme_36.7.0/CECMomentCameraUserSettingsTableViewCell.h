@class UIImageView, DUXSwitch, UILabel, UIView;

@interface CECMomentCameraUserSettingsTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXSwitch *switcher;
@property (retain, nonatomic) UIView *separatorView;

+ (id)reuseIdentifier;

- (double)p_adaptiveTitleLabelFontSize;
- (void)configWithSettingModel:(id)a0;
- (void)updateSeparatorWithIsLastCell:(BOOL)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (BOOL)accessibilityActivate;

@end
