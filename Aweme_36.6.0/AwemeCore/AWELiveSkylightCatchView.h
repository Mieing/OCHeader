@class CAGradientLayer, UIView;

@interface AWELiveSkylightCatchView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) id /* block */ touchBeganBlock;
@property (weak, nonatomic) UIView *ignoreView;

- (id)initWithTouchBeganBlock:(id /* block */)a0;
- (void)configGradientWithColors:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
