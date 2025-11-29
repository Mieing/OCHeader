@class UIGestureRecognizer, UIColor, UIView;
@protocol AFDHoverInteractor, AFDPopoverDelegate;

@interface AFDPopover : NSObject

@property (nonatomic) struct CGPoint { double x0; double x1; } popoverOrigin;
@property (nonatomic) struct CGPoint { double x; double y; } popoverOrigin;
@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) long long popoverPosition;
@property (weak, nonatomic) UIGestureRecognizer<AFDHoverInteractor> *hoverInteractor;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } popoverOffset;
@property (nonatomic) struct CGSize { double width; double height; } popoverSize;
@property (weak, nonatomic) id<AFDPopoverDelegate> delegate;
@property (nonatomic) double popoverArrowLength;
@property (nonatomic) double popoverArrowWidth;
@property (retain, nonatomic) UIColor *popoverArrowColor;

- (void)getPopoverAnchorPoint:(struct CGPoint { double x0; double x1; } *)a0 position:(struct CGPoint { double x0; double x1; } *)a1 withPopoverFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })resolvedPopoverFrameWithContainerView:(id)a0;
- (void)animateInWithPopoverView:(id)a0 popoverFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 containerView:(id)a2 completion:(id /* block */)a3;
- (void)animateOutWithPopoverView:(id)a0 completion:(id /* block */)a1;
- (double)transitionDuration;
- (void).cxx_destruct;
- (id)init;
- (void)dismissWithCompletion:(id /* block */)a0;

@end
