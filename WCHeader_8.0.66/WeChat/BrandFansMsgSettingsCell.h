@class UILabel, UISwitch;

@interface BrandFansMsgSettingsCell : UITableViewCell

@property (retain, nonatomic) UILabel *settingTitleLabel;
@property (retain, nonatomic) UISwitch *settingSwitch;
@property (copy, nonatomic) id /* block */ onToggled;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateWithTitle:(id)a0 isOn:(BOOL)a1 onToggled:(id /* block */)a2;
- (void)onToggleSwitch;
- (void).cxx_destruct;

@end
