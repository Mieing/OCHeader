@interface LynxCanvasDownStreamManager : NSObject

+ (id)sharedInstance;

- (id)getKryptonApp:(id)a0;
- (long long)addDownStreamListenerForView:(id)a0 withId:(id)a1 width:(long long)a2 height:(long long)a3 maxFPS:(long long)a4 AndListener:(id)a5;
- (long long)addDownStreamListenerForView:(id)a0 withId:(id)a1 width:(long long)a2 height:(long long)a3 AndListener:(id)a4;
- (void)removeDownStreamListenerForView:(id)a0 withId:(id)a1 AndListenerId:(long long)a2;

@end
