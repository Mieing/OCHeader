@interface WCFinderLongPressRatePlayStateModel : NSObject

@property (nonatomic) double vernierX;
@property (nonatomic) double vernierStartX;
@property (nonatomic) struct CGPoint { double x; double y; } lastGesturePos;
@property (nonatomic) unsigned long long gesCheckMoveY;
@property (nonatomic) double gestureMoveSpeedMargin;
@property (nonatomic) double gestureMoveSpeedNotMargin;
@property (nonatomic) struct CGPoint { double x; double y; } startLongPressPoint;
@property (nonatomic) long long playRateAtPenStart;
@property (nonatomic) long long playRateBeforePenStart;
@property (nonatomic) BOOL previousFrameIsTouching;
@property (nonatomic) unsigned long long previousPanChangeSpeedTimeStampMs;

+ (id)newPlayTypeArray;
+ (long long)getPanStartPlayRateTypeWithCurrentRate:(long long)a0;
+ (double)centerXOfRateType:(long long)a0 viewW:(double)a1;
+ (long long)rateTypeOfPositionX:(double)a0 viewW:(double)a1;

- (id)init;
- (void)reset;
- (long long)playRateTypeOfCurrentX:(double)a0 initialType:(long long)a1 initialX:(double)a2 viewW:(double)a3;
- (void)handleGestureStartWithStartRate:(long long)a0 gesture:(id)a1 viewW:(double)a2;
- (void)handleGestureChange:(id)a0 viewW:(double)a1;
- (long long)getSuitablePlayRateTypeWithViewW:(double)a0;

@end
