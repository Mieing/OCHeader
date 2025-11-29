@class NSString, NSMutableArray;

@interface MAAnimatedAnnotation : MAPointAnnotation <MAAnimatableAnnotation>

@property (retain, nonatomic) NSMutableArray *moveAnimations;
@property (nonatomic) double movingDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)rotateDegree;
- (id)addMoveAnimationWithKeyCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1 withDuration:(double)a2 withName:(id)a3 completeCallback:(id /* block */)a4 stepCallback:(id /* block */)a5;
- (void)setNeedsStart;
- (BOOL)shouldAnimationStart;
- (id)addMoveAnimationWithKeyCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1 withDuration:(double)a2 withName:(id)a3 completeCallback:(id /* block */)a4;
- (id)allMoveAnimations;
- (void).cxx_destruct;
- (void)step:(double)a0;
- (BOOL)isAnimationFinished;

@end
