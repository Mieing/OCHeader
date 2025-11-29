@class UIColor, BDPAlertControllerActionButtonTheme;

@interface BDPAlertControllerActionTheme : BDPAlertControllerThemeBase

@property (nonatomic) unsigned long long edge;
@property (nonatomic) double edgeWidth;
@property (retain, nonatomic) UIColor *edgeColor;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) BDPAlertControllerActionButtonTheme *normal;
@property (retain, nonatomic) BDPAlertControllerActionButtonTheme *cancel;
@property (retain, nonatomic) BDPAlertControllerActionButtonTheme *destructive;
@property (retain, nonatomic) BDPAlertControllerActionButtonTheme *confirm;

- (void).cxx_destruct;
- (id)initWithAdapter:(long long)a0;

@end
