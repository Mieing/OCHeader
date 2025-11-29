@class DUXSwitch;

@interface AWEPushSettingsInnerPushBanner : UIView

@property (retain, nonatomic) DUXSwitch *switchControl;
@property (copy, nonatomic) id /* block */ switchChange;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setSwitchOn:(BOOL)a0;

@end
