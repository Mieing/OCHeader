@class AWEScreenshotPanelConfigItemModel, DUXSettingSwitch, UILabel, UIButton;

@interface AWEScreenshotPanelConfigTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *explainButton;
@property (retain, nonatomic) DUXSettingSwitch *switchButton;
@property (retain, nonatomic) AWEScreenshotPanelConfigItemModel *model;
@property (nonatomic) unsigned long long cornerType;

- (void)switchStatusChanged:(id)a0;
- (void)setupCorners;
- (void)highlightWithAnimation;
- (void)highlightWithAnimationWithDuration:(double)a0 dismissDelay:(double)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureWithModel:(id)a0;

@end
