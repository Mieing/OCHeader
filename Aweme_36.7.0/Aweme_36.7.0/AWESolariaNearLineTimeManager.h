@class NSTimer;

@interface AWESolariaNearLineTimeManager : NSObject

@property (retain, nonatomic) NSTimer *timerTaskDelay;
@property (nonatomic) long long interval;

+ (id)sharedInstance;

- (void)onAppForeground:(long long)a0 backgroundDuration:(long long)a1;
- (void)onAppBackground:(long long)a0 foregroundDuration:(long long)a1;
- (void)timerRunnable;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
