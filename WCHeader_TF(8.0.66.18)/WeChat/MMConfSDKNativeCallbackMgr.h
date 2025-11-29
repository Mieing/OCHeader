@class NSMutableDictionary;

@interface MMConfSDKNativeCallbackMgr : NSObject {
    struct WxConfSDKCallback { void /* function */ **x0; id x1; id x2; } *nCallback;
    NSMutableDictionary *_outerCallbacks;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } recursive_mutex_;
}

- (id)init;
- (struct IWXConfCallback { void /* function */ **x0; } *)refreshCallback:(BOOL)a0;
- (void)dealloc;
- (BOOL)getIfCallbackPointNil;
- (id)callbackImp:(int)a0 errCode:(int)a1 data:(void *)a2 dataLength:(int)a3;
- (void)registerWillListen:(int)a0 callback:(id)a1;
- (void)removeWillListen:(int)a0 callback:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
