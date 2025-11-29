@interface LSIMPaddingLabel : UILabel

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (id)initWithContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPreferredMaxLayoutWidth:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
