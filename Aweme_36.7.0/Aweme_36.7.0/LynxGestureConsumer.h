@interface LynxGestureConsumer : NSObject

@property (nonatomic) BOOL adjustingScrollOffset;
@property (readonly, nonatomic) long long gestureConsumeStatus;
@property (nonatomic) long long interceptGestureStatus;
@property (nonatomic) struct CGPoint { double x; double y; } previousScrollOffset;

- (void)interceptGesture:(BOOL)a0;
- (void)consumeGesture:(BOOL)a0;
- (id)init;

@end
