@class UIImageView, UIColor, CAShapeLayer;

@interface AWEGoodsVisitorAvatarView : UIView

@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double avatarsRadius;
@property (nonatomic) double avatarsCenterDistance;
@property (nonatomic) BOOL clearBorder;
@property (nonatomic) BOOL previousHasClearBorder;

- (id)crescentMaskLayerV2;
- (id)outsideBorderForHeight:(double)a0;
- (id)crescentMaskLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
