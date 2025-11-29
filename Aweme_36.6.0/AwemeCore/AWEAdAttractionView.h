@class UIImageView, AWEURLModel, CAShapeLayer;

@interface AWEAdAttractionView : UIButton <AWEAdAttractionView>

@property (retain, nonatomic) CAShapeLayer *circleLayer1;
@property (retain, nonatomic) CAShapeLayer *circleLayer2;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) AWEURLModel *url;
@property (copy, nonatomic) id /* block */ showBlock;

+ (id)animationWithBeginTime:(double)a0;
+ (id)animation;
+ (id)circle;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)stopAnimation;
- (BOOL)isAnimating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;

@end
