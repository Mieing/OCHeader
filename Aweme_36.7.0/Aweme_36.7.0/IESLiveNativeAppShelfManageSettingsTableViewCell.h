@class UILabel, UIView;

@interface IESLiveNativeAppShelfManageSettingsTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIView *rightView;

- (void)updateWithLabel:(id)a0 rightView:(id)a1 isLast:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;

@end
