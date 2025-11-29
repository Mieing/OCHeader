@interface AWEAdEvaluateTagLabelView : UILabel

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 WithEdges:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
