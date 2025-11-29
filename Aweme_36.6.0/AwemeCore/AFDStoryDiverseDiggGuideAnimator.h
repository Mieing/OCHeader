@class NSArray, NSMutableArray, NSString;
@protocol AFDStroyDiverseDiggGuideAnimationDelegate;

@interface AFDStoryDiverseDiggGuideAnimator : NSObject <CAAnimationDelegate>

@property (retain, nonatomic) NSMutableArray *imageLayers;
@property (retain, nonatomic) NSArray *directions;
@property (weak, nonatomic) id<AFDStroyDiverseDiggGuideAnimationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })randomEndPointWithStartPoint:(struct CGPoint { double x0; double x1; })a0 direction:(long long)a1;
- (id)createPathFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (double)randomFloatBetween:(double)a0 and:(double)a1;
- (void)startAnimationWithContext:(id)a0;
- (id)randomDirections;
- (id)createImageLayerWithImage:(id)a0 startPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)imageGroupAnimationWithStartPoint:(struct CGPoint { double x0; double x1; })a0 index:(unsigned long long)a1;
- (long long)getDirectionWithIndex:(unsigned long long)a0;
- (double)linearRatioWithValueA:(double)a0 valueB:(double)a1 ratio:(double)a2;
- (double)rotationAngleWithDirection:(long long)a0;
- (double)endRotationAngleWithDirection:(long long)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)dealloc;
- (void)cancelAnimation;

@end
