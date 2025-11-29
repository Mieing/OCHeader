@class AWEFeedHomepageLongPressPanelSwitchItem, UIImageView, DUXSwitch, DUXBaseLabel;

@interface AWEFeedHomepageLongPressEditSwitchView : UIView

@property (retain, nonatomic) AWEFeedHomepageLongPressPanelSwitchItem *switchItem;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXSwitch *switchView;
@property (copy, nonatomic) id /* block */ valueChangedBlock;

- (void)configViewWithSwitchItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;

@end
