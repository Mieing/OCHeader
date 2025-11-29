@class UIImageView, CAGradientLayer, CAShapeLayer;

@interface IESLiveFeedDrawerRelationGuideHeadView : UIView

@property (retain, nonatomic) UIImageView *headView;
@property (retain, nonatomic) CAShapeLayer *markClipLayer;
@property (retain, nonatomic) CAGradientLayer *markColorLayer;
@property (retain, nonatomic) CAShapeLayer *markClipLayerForAniamtion;
@property (retain, nonatomic) CAGradientLayer *markColorLayerForAnimation;

- (void)startAnimationWithHeadUrls:(id)a0;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
