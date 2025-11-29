@class UIImageView, UIView;

@interface RoundRingView : UIView

@property (nonatomic) long long annotationState;
@property (retain, nonatomic) UIImageView *outerRoundView;
@property (retain, nonatomic) UIView *innerRoundView;
@property (retain, nonatomic) UIView *dotRoundView;
@property (nonatomic) double lastWidth;
@property (nonatomic) double lastHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)removeAllAnimations;
- (void)startAnimateFromUnSelectToSelect:(id /* block */)a0;
- (void)startAnimateFromSelectToUnSelect:(id /* block */)a0;
- (void).cxx_destruct;

@end
