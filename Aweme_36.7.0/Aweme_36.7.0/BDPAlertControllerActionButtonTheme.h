@class UIColor, UIFont;

@interface BDPAlertControllerActionButtonTheme : BDPAlertControllerThemeBase

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;

+ (void)bootstrapLoad;
+ (void)applyAppearanceStyle;

- (void).cxx_destruct;
- (id)init;

@end
