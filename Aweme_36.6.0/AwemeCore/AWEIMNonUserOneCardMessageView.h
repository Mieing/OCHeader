@class UIImageView, AWEIMNonUserOneCardMessageProps, UIView;

@interface AWEIMNonUserOneCardMessageView : UIView

@property (retain, nonatomic) AWEIMNonUserOneCardMessageProps *props;
@property (retain, nonatomic) UIView *bgView;
@property (weak, nonatomic) UIView *oneCardView;
@property (retain, nonatomic) UIImageView *coverImageView;

- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_initSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_onTap:(id)a0;
- (void)__hidenCoverImageViewWithAnimation:(BOOL)a0;
- (void)__loadOneCardView;
- (void)__loadCoverImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
