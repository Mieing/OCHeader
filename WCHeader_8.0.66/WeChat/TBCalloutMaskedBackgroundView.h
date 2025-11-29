@class UIImageView, UIView;

@interface TBCalloutMaskedBackgroundView : TBCalloutBackgroundView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *containerBorderView;
@property (retain, nonatomic) UIView *arrowView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *arrowHighlightedImageView;
@property (retain, nonatomic) UIImageView *arrowBorderView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setArrowPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (id)image:(id)a0 withColor:(id)a1;
- (void)layoutSubviews;
- (id)contentMask;
- (void).cxx_destruct;

@end
