@class UIWindow;

@interface AWESettingThemeObserveWindow : UIWindow

@property (retain, nonatomic) UIWindow *appkeyWindow;

- (void)p_trackerThemeSettingWithLightMode:(BOOL)a0;
- (void).cxx_destruct;
- (void)becomeKeyWindow;
- (void)setOverrideUserInterfaceStyle:(long long)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
