@interface LynxGestureExtraBundle : NSObject

@property (nonatomic) long long gestureDirection;
@property (nonatomic) double simultaneousDeltaX;
@property (nonatomic) double simultaneousDeltaY;
@property (nonatomic) BOOL isNeedConsumedSimultaneousGesture;

- (void)resetSimultaneousDelta;
- (id)init;

@end
