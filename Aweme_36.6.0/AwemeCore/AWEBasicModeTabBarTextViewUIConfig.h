@class UIColor;

@interface AWEBasicModeTabBarTextViewUIConfig : AWEBasicModeTabBarInnerViewUIConfig

@property (retain, nonatomic) UIColor *selectedDarkColor;
@property (retain, nonatomic) UIColor *selectedLightColor;
@property (retain, nonatomic) UIColor *unSelectedDarkColor;
@property (retain, nonatomic) UIColor *unSelectedLightColor;

+ (id)configWithText:(id)a0 shouldTransform:(BOOL)a1;

- (void)updateLightModeWithProgress:(double)a0;
- (void).cxx_destruct;

@end
