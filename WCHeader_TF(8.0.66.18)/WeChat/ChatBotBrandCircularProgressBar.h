@class UIColor;

@interface ChatBotBrandCircularProgressBar : UIView {
    BOOL _animating;
}

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double duration;
@property (nonatomic) double lineWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startAnimating;
- (void)stopAnimating;
- (void)addRotationAnimation;
- (void).cxx_destruct;

@end
