@class UIView;

@interface __RTVPiPContainerView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ willMoveToWindowBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;

@end
