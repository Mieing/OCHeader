@class AFDPopoverBackgroundView, AFDPopoverView;

@interface AFDInplacePopoverTransitionView : UIView

@property (readonly, nonatomic) AFDPopoverBackgroundView *backgroundView;
@property (readonly, nonatomic) AFDPopoverView *popoverView;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)handleRotate;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
