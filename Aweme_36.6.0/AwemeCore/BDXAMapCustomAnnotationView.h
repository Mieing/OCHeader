@class UIView;

@interface BDXAMapCustomAnnotationView : BDXAMapBaseAnnotationView

@property (weak, nonatomic) UIView *customView;
@property (nonatomic) BOOL isFoldedAnnotation;

- (void)startAnnotationAnimation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCollisionFrame;
- (BOOL)isCollidedAnnotationWithOther:(id)a0 areaPercent:(double)a1;
- (void)foldAnnotationView;
- (void)unfoldAnnotationView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setAngle:(double)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
