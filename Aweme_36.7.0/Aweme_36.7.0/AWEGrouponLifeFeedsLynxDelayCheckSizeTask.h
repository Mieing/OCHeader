@class NSTimer;

@interface AWEGrouponLifeFeedsLynxDelayCheckSizeTask : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL firing;
@property (nonatomic) BOOL hasNewOne;
@property (copy, nonatomic) id /* block */ callback;

- (void)delayHeightCheckTimerAction;
- (void)fireWithInterval:(double)a0 callback:(id /* block */)a1;
- (void)appendNewOne;
- (void).cxx_destruct;
- (id)init;
- (void)stopTask;

@end
