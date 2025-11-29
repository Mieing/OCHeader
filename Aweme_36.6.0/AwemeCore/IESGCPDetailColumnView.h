@interface IESGCPDetailColumnView : IESGCPDetailBaseView

- (void)bindViewModel:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })columnViewContentInset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupSubviews;

@end
