@class NSString, UIBezierPath, CAShapeLayer, UIView, UIImageView;

@interface AWEBubbleView : UIView <AWEBubbleAnchor>

@property (nonatomic) unsigned long long direction;
@property (nonatomic) BOOL isDarkBackGround;
@property (nonatomic) BOOL isNewStyleForD;
@property (retain, nonatomic) UIBezierPath *path;
@property (retain, nonatomic) CAShapeLayer *stroke;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIImageView *bodyImageView;
@property (retain, nonatomic) UIImageView *cornerImageView;
@property (nonatomic) double adjustedBodyOffset;
@property (copy, nonatomic) id /* block */ adjustFrameBlock;
@property (nonatomic) struct CGPoint { double x; double y; } anchorAdjustment;
@property (nonatomic) double arrowOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDirection:(unsigned long long)a0 anchorAdjustment:(struct CGPoint { double x0; double x1; })a1 isDarkBackGround:(BOOL)a2;
- (id)initWithDirection:(unsigned long long)a0 customView:(id)a1 anchorAdjustment:(struct CGPoint { double x0; double x1; })a2 isDarkBackGround:(BOOL)a3;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeWithCustomViewContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })anchorPositionRelatedToLeftTopTreatAdjustmentAsOffset;
- (struct CGPoint { double x0; double x1; })anchorPositionRelatedToLeftTop;
- (double)bubbleAnimationAnchorOffset;
- (void)redrawStrokeIfNeeded;
- (void)drawStrokeIfNeeded;
- (void)ecom_drawStrokeIfNeeded;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithDirection:(unsigned long long)a0;
- (void)setupUI;

@end
