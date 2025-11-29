@class NSTimer;

@interface BDReaderScreenLockManager : NSObject

@property (nonatomic) long long timeType;
@property (nonatomic) unsigned long long touchBeginTime;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL orginIdleTimerDisabled;

+ (id)shareInstance;

- (void)stopBrightTimeCheck;
- (void)checkIdleTimerDisabled;
- (void)handleBrightTimeCheckWhenTouch;
- (void)checkTimeByLimitMin:(long long)a0;
- (void)stratBrightTimeCheck:(long long)a0;
- (void)resetBrightTimeCheck;
- (void).cxx_destruct;

@end
