@interface IESLiveDiggAccessibilityButton : IESLiveButton

@property (copy, nonatomic) id /* block */ clickBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (BOOL)accessibilityActivate;

@end
