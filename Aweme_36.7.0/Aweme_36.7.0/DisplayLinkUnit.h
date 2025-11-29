@class CADisplayLink;

@interface DisplayLinkUnit : NSObject {
    CADisplayLink *_displayLink;
}

@property (copy, nonatomic) id /* block */ displayCallbackBlock;

- (void)timerLoop:(id)a0;
- (BOOL)isTimerPaused;
- (void)setRenderInTimerEnable:(BOOL)a0;
- (void)setRenderTimerFrameRate:(int)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;
- (void)pauseTimer;
- (void)dealloc;
- (void)resumeTimer;

@end
