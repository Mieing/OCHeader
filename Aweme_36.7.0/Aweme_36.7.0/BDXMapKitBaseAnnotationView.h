@interface BDXMapKitBaseAnnotationView : BDMKBaseAnnotationView

@property (readonly, nonatomic) BOOL isFoldedAnnotation;

- (void)startAnnotationAnimation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCollisionFrame;
- (BOOL)isCollidedAnnotationWithOther:(id)a0 areaPercent:(double)a1;
- (void)foldAnnotationView;
- (void)unfoldAnnotationView;
- (void)prepareForReuse;

@end
