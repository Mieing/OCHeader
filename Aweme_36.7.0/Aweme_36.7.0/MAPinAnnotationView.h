@class UIImageView;

@interface MAPinAnnotationView : MAAnnotationView

@property (retain, nonatomic) UIImageView *shadowImageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } validRect;
@property (nonatomic) BOOL isFirstTimeMoveToSuperview;
@property (nonatomic) long long pinColor;
@property (nonatomic) BOOL animatesDrop;

- (id)liftImageForPinColor:(long long)a0;
- (id)imageForPinColor:(long long)a0;
- (id)dropAnimationWithFromPoint:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)shadowAnimationFromPoint:(struct CGPoint { double x0; double x1; } *)a0 toPoint:(struct CGPoint { double x0; double x1; } *)a1 duration:(double)a2 completion:(id /* block */)a3;
- (void)changeToLift:(BOOL)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)willMoveToSuperview:(id)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)setDragState:(long long)a0 animated:(BOOL)a1;

@end
