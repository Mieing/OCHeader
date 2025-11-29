@class NSString;

@interface TXCScreenCapturerDelegateBridge : NSObject <TXIScreenCaptureDelegate, TXIVideoBindable> {
    struct Lock { struct LockImpl { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } native_handle_; } lock_; } _lock;
    struct weak_ptr<liteav::video::ScreenPlatformInterface::Client> { struct Client *__ptr_; struct __shared_weak_count *__cntrl_; } _client;
    struct weak_ptr<liteav::video::ScreenSharingApple> { struct ScreenSharingApple *__ptr_; struct __shared_weak_count *__cntrl_; } _observer;
}

@property long long windowId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setClient:(struct shared_ptr<liteav::video::ScreenPlatformInterface::Client> { struct Client *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<liteav::video::ScreenPlatformInterface::Client> { struct Client *x0; struct __shared_weak_count *x1; })client;
- (void)setObserver:(struct shared_ptr<liteav::video::ScreenSharingApple> { struct ScreenSharingApple *x0; struct __shared_weak_count *x1; })a0;
- (void)processVideoFrameResult:(id)a0;
- (void)onCapturerDidStop;
- (void)onCapturerDidPause;
- (void)onCapturerDidResume;
- (void)onCapturerDidStart;
- (void)onScreenSizeChange:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
