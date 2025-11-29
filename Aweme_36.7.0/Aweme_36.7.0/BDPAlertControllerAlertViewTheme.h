@class UIColor;

@interface BDPAlertControllerAlertViewTheme : BDPAlertControllerThemeBase

@property (nonatomic) double Width;
@property (nonatomic) double maxHeight;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double minHeight;
@property (nonatomic) double contentOnlyMinHeight;
@property (nonatomic) double titleOnlyMinHeight;

- (void).cxx_destruct;
- (id)initWithAdapter:(long long)a0;

@end
