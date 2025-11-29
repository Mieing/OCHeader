@class NSArray, NSString, UIView;
@protocol QAnnotation;

@interface QMUAnnoViewAnimationMediator : NSObject <CAAnimationDelegate>

@property (weak, nonatomic) id<QAnnotation> observerTarget;
@property (nonatomic) int coordKVOCounter;
@property (copy, nonatomic) id /* block */ coordCallBack;
@property (nonatomic) int animationStatus;
@property (nonatomic) int annoCurrentEraseIndex;
@property (nonatomic) struct CGPoint { double x; double y; } annoComparePoint;
@property (nonatomic) double annoAnimationAccumulateDistance;
@property (nonatomic) double annoAnimationSpeed;
@property (nonatomic) double annoCallbacklocationPrecision;
@property (nonatomic) BOOL annoAnimationNeedRotate;
@property (nonatomic) int annoInternalEraseIndexBackUp;
@property (retain, nonatomic) NSArray *originalCoords;
@property (weak, nonatomic) UIView *mapInternalRotateView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchEraseInexWithInterpolatePoint:(struct CLLocationCoordinate2D { double x0; double x1; })a0 andOriginalPoints:(id)a1;
- (id)generateNewCoordFromOrigin:(id)a0 withIndex:(int)a1 andRatio:(double)a2;
- (id)getCoordinatesForLeftTimeMode:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)getTranlateCoordinatesWithIndexChanged:(int)a0 andRatio:(double)a1;
- (BOOL)checkInterpolationIsOutOfPrecisionRangeWithInterpolation:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)validateLocations:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setAnnoTranslateObserver:(id)a0;
- (void)setUpObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)notifMoveAlongCallbackUpdateWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 andAnimationStatus:(int)a1;
- (void)sendAnimationInfoToCallback:(struct CLLocationCoordinate2D { double x0; double x1; })a0 Status:(int)a1;
- (void)sendInterruptionCallBack;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)checkIfTargetAnimationExists:(id)a0 withKey:(id)a1;
- (void)generateAnimation:(id)a0 rotationView:(id)a1 locations:(id)a2 validatedLocation:(id)a3 time:(double)a4 autoRotate:(BOOL)a5 distanceFilter:(double)a6;
- (void)startAnimation:(id)a0 rotationView:(id)a1 locations:(id)a2 time:(double)a3 autoRotate:(BOOL)a4 distance:(double)a5;
- (void)setTranslation:(id)a0 withPoint:(int)a1 andRatio:(float)a2;
- (void)setAnimation:(id)a0 withLeftTime:(double)a1;
- (void)setTranslation:(id)a0 withPoint:(int)a1 andRatio:(float)a2 andLeftTime:(double)a3;
- (void)removeMoveAlongAnimation:(id)a0;
- (BOOL)hasCoordAnimation:(id)a0;
- (void).cxx_destruct;

@end
