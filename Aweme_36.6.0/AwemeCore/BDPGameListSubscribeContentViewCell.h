@class UILabel, UIView, BDPSwitch;

@interface BDPGameListSubscribeContentViewCell : UITableViewCell

@property (retain, nonatomic) BDPSwitch *switchButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *topBorder;
@property (retain, nonatomic) UIView *bottomBorder;
@property (copy, nonatomic) id /* block */ handler;

- (void)setupSwitchButton;
- (void)onSwitchTap:(id)a0;
- (void)setupBorders;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)setupTitleLabel;

@end
