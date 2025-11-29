@class CMMotionManager;
@protocol BDARShakeDelegate;

@interface BDARShakeManager : NSObject

@property (retain, nonatomic) CMMotionManager *manager;
@property (weak, nonatomic) id<BDARShakeDelegate> delegate;
@property (nonatomic) double accelerometer;
@property (nonatomic) BOOL isMonitor;

+ (id)sharedInstance;

- (void)stopShakeMonitor;
- (void)startShakeMonitor;
- (void).cxx_destruct;
- (id)init;

@end
