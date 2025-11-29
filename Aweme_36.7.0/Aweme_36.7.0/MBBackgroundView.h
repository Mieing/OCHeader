@class UIColor, UIVisualEffectView, UIToolbar;

@interface MBBackgroundView : UIView

@property (retain) UIVisualEffectView *effectView;
@property (retain) UIToolbar *toolbar;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIColor *color;

- (void)updateViewsForColor:(id)a0;
- (void)updateForBackgroundStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
