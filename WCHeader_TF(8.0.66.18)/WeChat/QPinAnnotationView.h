@class UIImageView, NSString;

@interface QPinAnnotationView : QAnnotationView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *shadowImageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } validRect;
@property (nonatomic) int pinColor;
@property (nonatomic) BOOL animatesDrop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageForPinColor:(int)a0;
- (id)liftImageForPinColor:(int)a0;
- (id)shadowAnimationFromPoint:(struct CGPoint { double x0; double x1; } *)a0 toPoint:(struct CGPoint { double x0; double x1; } *)a1 duration:(double)a2 completion:(id /* block */)a3;
- (id)dropAnimationWithFromPoint:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)changeToLift:(BOOL)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)willMoveToSuperview:(id)a0;
- (void)setDragState:(int)a0 animated:(BOOL)a1;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
