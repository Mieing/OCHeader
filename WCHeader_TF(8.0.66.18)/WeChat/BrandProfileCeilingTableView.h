@class CAGradientLayer, UIGestureRecognizer;

@interface BrandProfileCeilingTableView : MMTableView

@property (retain, nonatomic) CAGradientLayer *backgroundLayer;
@property (weak, nonatomic) UIGestureRecognizer *otherGestureRecognizer;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)initGackgroundLayer;
- (void)layoutSubviews;
- (void)reloadGradientLayer;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
