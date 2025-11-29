@class UISwitch, UIControl;

@interface IESLiveAdminSwitchCell : IESLiveAdminCell

@property (retain, nonatomic) UISwitch *switchView;
@property (retain, nonatomic) UIControl *controlView;

- (void)renderWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)toggleAction;

@end
