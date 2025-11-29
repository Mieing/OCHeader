@class BDPAlertControllerTitleTheme, BDPAlertControllerSeparatorTheme, BDPAlertControllerContentTheme, BDPAlertControllerActionTheme, BDPAlertControllerAlertViewTheme;

@interface BDPAlertControllerTheme : BDPAlertControllerThemeBase

@property (retain, nonatomic) BDPAlertControllerAlertViewTheme *alertView;
@property (retain, nonatomic) BDPAlertControllerTitleTheme *title;
@property (retain, nonatomic) BDPAlertControllerContentTheme *content;
@property (retain, nonatomic) BDPAlertControllerSeparatorTheme *separator;
@property (retain, nonatomic) BDPAlertControllerActionTheme *action;

+ (id)hostCustomedAlertTheme;
+ (id)defaultAlertTheme:(long long)a0;
+ (id)hostCustomedAlertTheme:(long long)a0;
+ (id)pageExitCustomedAlertTheme:(double)a0 adapterType:(long long)a1;
+ (id)defaultAlertTheme;
+ (id)pageExitCustomedAlertTheme:(double)a0;

- (void).cxx_destruct;
- (id)initWithAdapter:(long long)a0;

@end
