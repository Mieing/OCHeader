@interface AudioInterruptionListener : NSObject {
    struct weak_ptr<lynx::canvas::AudioBackendDarwin> { struct AudioBackendDarwin *__ptr_; struct __shared_weak_count *__cntrl_; } _weak_backend;
}

- (void)onAppDidEnterBackground:(id)a0;
- (void)onAppDidBecomeActive:(id)a0;
- (void)removeBackend;
- (void)onAudioSessionReset;
- (void)onAudioInterrupt:(id)a0;
- (id)init:(void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
