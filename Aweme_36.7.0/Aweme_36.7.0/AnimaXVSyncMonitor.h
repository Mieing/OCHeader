@class CADisplayLink;

@interface AnimaXVSyncMonitor : NSObject {
    id /* block */ _callback;
}

@property (retain) CADisplayLink *displayLink;
@property BOOL isInBackground;

- (void)requestVSync:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)appWillEnterForeground:(id)a0;
- (void)displayLinkCallback:(id)a0;

@end
