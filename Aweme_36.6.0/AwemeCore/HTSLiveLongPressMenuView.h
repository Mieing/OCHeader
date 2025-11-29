@class UILabel, UIView, UIStackView;

@interface HTSLiveLongPressMenuView : UIControl

@property (retain, nonatomic) UIStackView *itemStackView;
@property (retain, nonatomic) UIStackView *verticalStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *darkMaskView;

- (void)showInWindow;
- (id)layoutDarkViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutVerticalStackView:(id)a0 hasTitle:(BOOL)a1 darkView:(id)a2;
- (id)titLabelWithTitle:(id)a0;
- (void)layoutItemStackView:(id)a0 inParentStackView:(id)a1;
- (id)frontWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 darkMaskFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)updateContentLayout;
- (void).cxx_destruct;
- (void)remove;
- (void)showInView:(id)a0;

@end
