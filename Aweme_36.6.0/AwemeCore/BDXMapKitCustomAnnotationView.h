@class NSString, UIView;

@interface BDXMapKitCustomAnnotationView : BDXMapKitBaseAnnotationView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIView *customView;
@property (nonatomic) BOOL isFoldedAnnotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnnotationAnimation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCollisionFrame;
- (BOOL)isCollidedAnnotationWithOther:(id)a0 areaPercent:(double)a1;
- (void)foldAnnotationView;
- (void)unfoldAnnotationView;
- (void)annotationDidCliced:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)prepareForReuse;
- (void)setZIndex:(long long)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setAngle:(double)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
