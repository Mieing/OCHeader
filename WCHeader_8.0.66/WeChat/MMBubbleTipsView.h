@class MMUILabel;

@interface MMBubbleTipsView : UIControl

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (nonatomic) double bubbleCornerRadius;
@property (nonatomic) struct CGSize { double width; double height; } arrowSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } bubbleEdgeInsets;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)defaultTextAttrs;
- (void)setText:(id)a0;
- (void)setContent:(id)a0;
- (void)showInView:(id)a0 targetPosition:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2;
- (void)hide:(BOOL)a0;
- (void)resizeBubble:(struct CGPoint { double x0; double x1; })a0;
- (void)rebuildMask:(double)a0;
- (void).cxx_destruct;

@end
