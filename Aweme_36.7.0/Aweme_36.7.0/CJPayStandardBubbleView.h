@class UIView, UIColor, CAShapeLayer;

@interface CJPayStandardBubbleView : UIView

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) CAShapeLayer *rectShapeLayer;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double position;
@property (nonatomic) long long arrowDirection;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double arrowWidth;
@property (nonatomic) double arrowHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL needShadowPath;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) UIColor *shadowColor;

- (void)p_draw;
- (void)p_makeUI;
- (void)p_configShadowPath;
- (void)p_remakeLayoutInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })p_getDefaultContentInsets;
- (void)p_drawArrowPath;
- (void)p_drawRectPath;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
