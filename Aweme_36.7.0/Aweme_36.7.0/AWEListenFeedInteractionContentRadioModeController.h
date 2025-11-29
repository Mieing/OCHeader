@class NSTimer;

@interface AWEListenFeedInteractionContentRadioModeController : AWEListenFeedInteractionBaseController

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long timerCount;

- (void)triggerTimer;
- (void)fireTimer;
- (void)updateForegroundMode;
- (void)resetTimerCount;
- (void).cxx_destruct;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)handleAppWillEnterForeground:(id)a0;
- (void)handleAppDidEnterBackground:(id)a0;

@end
