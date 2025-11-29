@class TRTCCloud;

@interface TXChorusMusicPlayer : NSObject {
    struct shared_ptr<(anonymous namespace)::TXChorusPlayerCallback> { struct TXChorusPlayerCallback *__ptr_; struct __shared_weak_count *__cntrl_; } callback_;
    struct unique_ptr<liteav::chorus::ChorusPlayerImpl, std::default_delete<liteav::chorus::ChorusPlayerImpl>> { struct __compressed_pair<liteav::chorus::ChorusPlayerImpl *, std::default_delete<liteav::chorus::ChorusPlayerImpl>> { struct ChorusPlayerImpl *__value_; } __ptr_; } player_;
    TRTCCloud *cloud_;
    TRTCCloud *subCloud_;
}

+ (id)createPlayerWithTrtcCloud:(id)a0 roomId:(id)a1 delegate:(id)a2;

- (id)initWithTrtcCloud:(id)a0 roomId:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (void)setChorusRole:(long long)a0 trtcParamsForPlayer:(id)a1;
- (void)setDelegate:(id)a0;
- (void)loadMusic:(id)a0;
- (void)loadExternalMusic:(id)a0;
- (void)start;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)seek:(long long)a0;
- (void)switchMusicTrack:(long long)a0;
- (void)setPlayoutVolume:(int)a0;
- (void)setPublishVolume:(int)a0;
- (void)setMusicPitch:(float)a0;
- (void)callExperimentalAPI:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
