@class UIImageView;

@interface TTAccountWaitingView : UIView

@property (nonatomic) BOOL animating;
@property (retain, nonatomic) UIImageView *imageView;

- (void)buildImageView;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
