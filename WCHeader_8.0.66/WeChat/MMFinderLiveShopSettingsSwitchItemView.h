@class UISwitch, UIView;

@interface MMFinderLiveShopSettingsSwitchItemView : MMFinderLiveShopSettingItemView

@property (retain, nonatomic) UISwitch *switchView;
@property (retain, nonatomic) UIView *switchTapView;
@property (copy, nonatomic) id /* block */ onSwitchChange;
@property (copy, nonatomic) id /* block */ onSwitchTap;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onSwitchChanged:(id)a0;
- (void)onSwitchTapViewTaped:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
