@class AFDPopover, AFDPopoverContentWrapperView, UIView;

@interface AFDPopoverView : AFDHoverableContainerView

@property (retain, nonatomic) AFDPopoverContentWrapperView *contentWrapperView;
@property (retain, nonatomic) AFDPopover *popoverConfiguration;
@property (retain, nonatomic) UIView *contentView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleHover:(id)a0;

@end
