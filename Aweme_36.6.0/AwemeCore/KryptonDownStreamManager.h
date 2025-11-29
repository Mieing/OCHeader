@interface KryptonDownStreamManager : NSObject

+ (id)sharedInstance;

- (long long)addDownStreamListenerForApp:(id)a0 withId:(id)a1 width:(long long)a2 height:(long long)a3 scaleMode:(long long)a4 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 maxFPS:(long long)a6 listener:(id)a7;
- (struct shared_ptr<lynx::canvas::CanvasApp> { struct CanvasApp *x0; struct __shared_weak_count *x1; })getCanvasApp:(id)a0;
- (long long)addDownStreamListenerForApp:(id)a0 withId:(id)a1 width:(long long)a2 height:(long long)a3 scaleMode:(long long)a4 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 listener:(id)a6;
- (void)removeDownStreamListenerForApp:(id)a0 withId:(id)a1 listenerId:(long long)a2;

@end
