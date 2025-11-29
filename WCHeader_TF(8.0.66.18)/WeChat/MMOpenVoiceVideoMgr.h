@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MMOpenVoiceVideoMgr : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mutex_;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } ready_;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoQueue;
@property (nonatomic) unsigned int logCnt;
@property (retain, nonatomic) NSMutableDictionary *views;

- (id)init;
- (void)dealloc;
- (void)setUp;
- (void)exit;
- (void)insertView:(id)a0 dic:(id)a1 callback:(id /* block */)a2;
- (void)updateView:(id)a0 dic:(id)a1 callback:(id /* block */)a2;
- (void)removeView:(id)a0 dic:(id)a1 callback:(id /* block */)a2;
- (void)requestFullScreen:(id)a0 direction:(int)a1 callback:(id /* block */)a2;
- (void)exitFullScreen:(id)a0 callback:(id /* block */)a1;
- (void)onVideoFrame:(int)a0 data:(const char *)a1 dataLen:(int)a2 width:(int)a3 height:(int)a4 rotation:(int)a5 isScreen:(BOOL)a6;
- (void)updateMembers:(id)a0;
- (id)getVideoSize:(id)a0;
- (id)getScreenSize:(id)a0;
- (void)getVideoSize:(id)a0 got:(BOOL *)a1 width:(unsigned int *)a2 height:(unsigned int *)a3;
- (void)updateCaptureSize:(int)a0;
- (void)updateGPUReslution:(int)a0;
- (void)releaseAll;
- (void)setBackgroundEffectMode:(id)a0 mode:(int)a1 enable:(BOOL)a2 complete:(id /* block */)a3;
- (void)onVideoError:(id)a0;
- (void)onVideoStart:(id)a0;
- (void)onVideoStop:(id)a0;
- (void)onVideoInterrupt:(id)a0;
- (void)onVideoInterruptEnd:(id)a0;
- (void)didEnterBackground;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
