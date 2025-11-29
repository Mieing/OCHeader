@class CALayer, UIColor;

@interface OMJHandleBoxShadowView : UIView

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) CALayer *borderLayer;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double borderCornerRadius;
@property (nonatomic) double modelScale;
@property (nonatomic) double modelRotation;
@property (nonatomic) struct CGPoint { double x; double y; } modelPosition;
@property (nonatomic) double presentationScale;
@property (nonatomic) double presentationRotation;
@property (nonatomic) struct CGPoint { double x; double y; } presentationPosition;
@property (nonatomic) struct CGSize { double width; double height; } presentationSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } presentationEdgeInsets;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)setupBorderLayer;
- (void)layoutSubviews;
- (void)updatePresentationWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 rotation:(double)a3 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (void)updateTransform;
- (void).cxx_destruct;

@end
