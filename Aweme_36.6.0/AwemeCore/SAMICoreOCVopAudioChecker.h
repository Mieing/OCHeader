@interface SAMICoreOCVopAudioChecker : NSObject {
    struct SAMICoreVopAudioChecker { struct shared_ptr<SAMI::VopAudioChecker::SAMICoreVopAudioChecker::Impl> { struct Impl *__ptr_; struct __shared_weak_count *__cntrl_; } impl_; } engine_;
}

- (int)checkAudioQuality:(char *)a0 audioLen:(int)a1 structuredText:(const char *)a2 result:(long long *)a3;
- (int)setAudioMetricParameter:(id)a0;
- (int)setOnlineAsrParameter:(id)a0;
- (int)init:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
