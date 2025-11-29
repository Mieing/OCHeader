@class NSString, NSMutableArray, CADisplayLink;

@interface KryptonDefaultFrameService : NSObject <KryptonFrameService> {
    NSMutableArray *_callbacks;
    NSMutableArray *_before_vsync_end_callbacks;
}

@property (retain) CADisplayLink *displayLink;
@property BOOL isInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestVSync:(id /* block */)a0;
- (void)onBootstrap:(id)a0;
- (void)onDestroy;
- (void)registerBeforeVSyncEndListener:(id /* block */)a0;
- (void)onMainDisplay:(id)a0;
- (void)requestPulse;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (void)dealloc;
- (void)appWillEnterForeground:(id)a0;

@end
