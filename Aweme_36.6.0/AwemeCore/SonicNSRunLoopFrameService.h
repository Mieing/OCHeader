@class NSString, NSMutableArray, CADisplayLink;

@interface SonicNSRunLoopFrameService : NSObject <SonicFrameService> {
    NSMutableArray *cbs_;
    CADisplayLink *caLink_;
    long long fps_;
    BOOL enable_adaptive_fps_mode_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPause;
- (void)onInitWithSonicApp:(id)a0;
- (void)onDestroy:(id)a0;
- (void)addFrameCallback:(id)a0 selector:(SEL)a1;
- (void)removeFrameCallback:(id)a0;
- (long long)getPreferredFramesPerSecond;
- (void)setAdaptiveFpsMode:(BOOL)a0;
- (void)setAdaptiveFps:(long long)a0;
- (void)onFrame;
- (void).cxx_destruct;
- (id)init;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (void)onResume;

@end
