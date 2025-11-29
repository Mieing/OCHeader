@class UIColor, UIFont;

@interface BDPAlertControllerContentTheme : BDPAlertControllerThemeBase

@property (nonatomic) long long maxLineCount;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignemnt;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } overflowInsets;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double minHeight;
@property (nonatomic) double lineHeight;

- (void).cxx_destruct;
- (id)initWithAdapter:(long long)a0;

@end
