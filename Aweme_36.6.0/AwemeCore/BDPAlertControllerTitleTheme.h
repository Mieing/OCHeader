@class UIColor, UIFont;

@interface BDPAlertControllerTitleTheme : BDPAlertControllerThemeBase

@property (nonatomic) long long maxLineCount;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double lineHeight;

- (void).cxx_destruct;
- (id)initWithAdapter:(long long)a0;

@end
