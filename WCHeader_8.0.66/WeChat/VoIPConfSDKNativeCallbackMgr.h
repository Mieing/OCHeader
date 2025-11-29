@class NSMutableDictionary;
@protocol VoIPConfSDKNativeCallbackMgrDelegate;

@interface VoIPConfSDKNativeCallbackMgr : NSObject {
    struct WxNewConfSDKCallback { void /* function */ **x0; id x1; id x2; } *nCallback;
    NSMutableDictionary *_outerCallbacks;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } recursive_mutex_;
}

@property (weak, nonatomic) id<VoIPConfSDKNativeCallbackMgrDelegate> callbackDelegate;
@property (nonatomic) unsigned int status;

- (id)init;
- (void)onVideoFrame:(int)a0 data:(const char *)a1 dataLen:(int)a2 width:(int)a3 height:(int)a4 format:(int)a5;
- (void)dealloc;
- (struct IWXConfCallback { void /* function */ **x0; } *)refreshCallback:(BOOL)a0;
- (id)callbackImp:(int)a0 errCode:(int)a1 data:(void *)a2 dataLength:(int)a3;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
