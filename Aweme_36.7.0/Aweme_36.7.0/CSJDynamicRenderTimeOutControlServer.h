@class BUTimer;

@interface CSJDynamicRenderTimeOutControlServer : NSObject

@property (nonatomic) double delayTime;
@property (nonatomic) double timeout;
@property (retain, nonatomic) BUTimer *renderTimer;
@property (nonatomic) BOOL hasRenderFinish;

- (void)delayRender:(id /* block */)a0;
- (void)startRenderWithDelayTime:(double)a0 delayRender:(id /* block */)a1;
- (void).cxx_destruct;

@end
