@class NSLock, UIWindow;

@interface IESTouchFeatureTracker : NSObject

@property (weak, nonatomic) UIWindow *window;
@property (nonatomic) struct CGPoint { double x; double y; } startLocation;
@property (nonatomic) double startTimeStamp;
@property (nonatomic) float velocity;
@property (nonatomic) float velocityX;
@property (nonatomic) float velocityY;
@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSLock *recordLock;

+ (id)sharedInstance;

- (void)receiveTouchEvent:(id)a0 onWindow:(id)a1;
- (id)getVelocity;
- (void)recordTouch:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;

@end
