@class UILabel, UISwitch;

@interface AWEConcernBellPushSettingPanelPermissionView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UISwitch *permissionSwitch;
@property (copy, nonatomic) id /* block */ switchAction;

- (void)initViews;
- (void)p_clickPermissionSwitch:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 switchAction:(id /* block */)a1;
- (void)updateTitleWithStr:(id)a0;
- (void).cxx_destruct;
- (void)setSwitchIsOn:(BOOL)a0;

@end
