@class UIStackView;

@interface IESGCPDetailColumnV5View : IESGCPDetailBaseView

@property (retain, nonatomic) UIStackView *stackView;

- (void)bindViewModel:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })columnViewContentInset;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
