@class CADisplayLink;

@interface LynxVSyncPulse : NSObject {
    struct MoveOnlyClosure<void, long long, long long> { void *impl_; } _callback;
}

@property (retain) CADisplayLink *displayLink;
@property BOOL isInBackground;

- (void)onMainDisplay:(id)a0;
- (void)requestPulse;
- (void)SetHighRefreshRate;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (void)appDidEnterBackground:(id)a0;
- (id)initWithCallback:(struct MoveOnlyClosure<void, long long, long long> { void *x0; })a0;
- (void)dealloc;
- (void)appWillEnterForeground:(id)a0;

@end
