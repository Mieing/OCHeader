@class NSDate;

@interface VeCoreVibrationManager : NSObject

@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL isInBackgroundMode;

+ (id)sharedInstance;

- (void)didEnterBackgroundModeWithNotification:(id)a0;
- (void)willEnterForegroundModeWithNotification:(id)a0;
- (void)start:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)dealloc;
- (void)vibrate;

@end
