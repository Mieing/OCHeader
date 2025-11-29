@class UIStackView;

@interface AFDSnackBarContentView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void)addArrangeSubview:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)addIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)addTitle:(id)a0;

@end
