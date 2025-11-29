@class UILabel, DUXSwitch, UIView;

@interface AWEDanmakuShieldSwitchTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *topBackgroundView;
@property (retain, nonatomic) UILabel *switchDescLabel;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) DUXSwitch *shieldSwitch;
@property (copy, nonatomic) id /* block */ shieldSwitchChange;

- (void)addSeparateLineForLandScape;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;

@end
