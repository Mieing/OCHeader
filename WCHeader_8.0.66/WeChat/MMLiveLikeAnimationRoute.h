@interface MMLiveLikeAnimationRoute : NSObject

@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double firstAnimationOffsetX;
@property (nonatomic) double secondAnimationOffsetX;
@property (nonatomic) double thirdAnimationOffsetX;
@property (nonatomic) double fourthAnimationOffsetX;
@property (nonatomic) double firstAnimationOffsetY;
@property (nonatomic) double secondAnimationOffsetY;
@property (nonatomic) double thirdAnimationOffsetY;
@property (nonatomic) double fourthAnimationOffsetY;
@property (nonatomic) double firstAnimationDuration;
@property (nonatomic) double secondAnimationDuration;
@property (nonatomic) double thirdAnimationDuration;
@property (nonatomic) double fourthAnimationDuration;
@property (nonatomic) double finalAnimationViewAlpha;

- (void)startLiveLikeAnimation:(id)a0 completion:(id /* block */)a1;
- (void)startLiveLikeHeadImageAnimation:(id)a0 completion:(id /* block */)a1;
- (void)startLiveLDoubleClickikeAnimation:(id)a0 completion:(id /* block */)a1;
- (void)startStageAnimationWithDuration:(double)a0 transformScale:(double)a1 alpha:(double)a2 animationOption:(unsigned long long)a3 offsetX:(double)a4 offsetY:(double)a5 animationView:(id)a6 completion:(id /* block */)a7;
- (void)startStageAnimationWithDuration:(double)a0 transformScale:(double)a1 transformRotation:(double)a2 alpha:(double)a3 animationOption:(unsigned long long)a4 offsetX:(double)a5 offsetY:(double)a6 animationView:(id)a7 completion:(id /* block */)a8;

@end
