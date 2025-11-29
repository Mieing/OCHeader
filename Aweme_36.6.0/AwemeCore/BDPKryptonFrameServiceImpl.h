@class NSString, NSMutableArray, CADisplayLink;

@interface BDPKryptonFrameServiceImpl : NSObject <KryptonFrameService> {
    CADisplayLink *_displayLink;
    NSMutableArray *_callbacks;
    NSMutableArray *_beforeVsyncEndCallbacks;
    BOOL _isPaused;
    id /* block */ _doFrameCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPause;
- (void)requestVSync:(id /* block */)a0;
- (void)onBootstrap:(id)a0;
- (void)onDestroy;
- (void)registerBeforeVSyncEndListener:(id /* block */)a0;
- (void)onMainDisplay:(id)a0;
- (void)requestPulse;
- (id)initWithDoFrameCallback:(id /* block */)a0;
- (void)autoInitDisplayLink;
- (void)setDoFrameCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (void)onResume;

@end
