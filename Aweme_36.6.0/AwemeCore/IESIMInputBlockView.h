@class UILabel, UIVisualEffectView;

@interface IESIMInputBlockView : UIView

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIVisualEffectView *blurBackgroundView;

- (void)updateInputBlockViewBackground:(BOOL)a0 isLight:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateText:(id)a0;

@end
