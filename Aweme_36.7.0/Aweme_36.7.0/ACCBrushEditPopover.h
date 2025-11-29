@class NSString, ACCBrushPopoverContentWrapper, UIView, ACCBrushPopoverContentView;

@interface ACCBrushEditPopover : UIView <CAAnimationDelegate>

@property (retain, nonatomic) ACCBrushPopoverContentWrapper *contentWrapper;
@property (nonatomic) double popoverCornerRadius;
@property (retain, nonatomic) ACCBrushPopoverContentView *popoverContentView;
@property (retain, nonatomic) UIView *content;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) struct CGPoint { double x; double y; } popoverAnchorPoint;
@property (retain, nonatomic) UIView *target;
@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;
@property (copy, nonatomic) id /* block */ performHideAnimationBlock;
@property (copy, nonatomic) id /* block */ performShowAnimationBlock;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetViewRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)setupAnimation;
- (id)getShowAnimation;
- (id)getHideAnimation;
- (void)setupWithSuperView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertTargetBoundsToParentView;
- (double)sharpOffsetWithContentViewLength:(double)a0 diffX:(double)a1;
- (double)isLengthInValid:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })validRectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)isLengthInValidOrZero:(double)a0;
- (id)initWithContentView:(id)a0 target:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
