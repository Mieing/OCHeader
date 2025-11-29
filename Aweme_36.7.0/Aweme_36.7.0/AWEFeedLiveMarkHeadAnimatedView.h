@class CAGradientLayer, CAShapeLayer, UIImageView, UIView;

@interface AWEFeedLiveMarkHeadAnimatedView : UIView

@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) CAGradientLayer *centerViewGradient;
@property (retain, nonatomic) CAShapeLayer *markClipLayer;
@property (retain, nonatomic) CAGradientLayer *markColorLayer;
@property (retain, nonatomic) CAShapeLayer *markClipLayerForAniamtion;
@property (retain, nonatomic) CAGradientLayer *markColorLayerForAnimation;
@property (retain, nonatomic) UIImageView *liveTextImage;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
