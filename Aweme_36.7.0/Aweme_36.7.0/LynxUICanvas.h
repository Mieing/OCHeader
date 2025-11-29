@class NSString;

@interface LynxUICanvas : LynxUI {
    NSString *_id;
    BOOL _freed;
    BOOL _isOffScreen;
}

+ (void)lynxLazyLoad;

- (BOOL)dispatchTouch:(id)a0 touches:(id)a1 withEvent:(id)a2;
- (void)targetOnScreen;
- (void)targetOffScreen;
- (void)freeMemoryCache;
- (BOOL)enableMemoryOptimize;
- (void)trySetupCanvas:(id)a0;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)createView;
- (void)frameDidChange;

@end
