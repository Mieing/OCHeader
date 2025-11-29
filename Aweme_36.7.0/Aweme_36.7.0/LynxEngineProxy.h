@interface LynxEngineProxy : NSObject {
    struct shared_ptr<lynx::shell::LynxEngineProxyDarwin> { struct LynxEngineProxyDarwin *__ptr_; struct __shared_weak_count *__cntrl_; } native_engine_proxy_;
}

- (void)startEventCapture:(long long)a0;
- (void)startEventBubble:(long long)a0;
- (void)startEventFire:(BOOL)a0 withEventID:(long long)a1;
- (void)sendCustomEvent:(id)a0;
- (void)invokeLepusFunc:(id)a0 callbackID:(int)a1;
- (void)setNativeEngineProxy:(struct shared_ptr<lynx::shell::LynxEngineProxyDarwin> { struct LynxEngineProxyDarwin *x0; struct __shared_weak_count *x1; })a0;
- (const void *)nativeProxy;
- (void)dispatchTaskToLynxEngine:(id /* block */)a0;
- (void)sendSyncTouchEvent:(id)a0;
- (void)sendSyncMultiTouchEvent:(id)a0;
- (void)sendGestureEvent:(int)a0 event:(id)a1;
- (void)onPseudoStatusChanged:(int)a0 fromPreStatus:(int)a1 toCurrentStatus:(int)a2;
- (void)startEventGenerate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
