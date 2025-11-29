@class UISwitch;

@interface EnvUISwitchCell : UITableViewCell

@property (retain, nonatomic) UISwitch *switchControl;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)switchValueChanged:(id)a0;

@end
