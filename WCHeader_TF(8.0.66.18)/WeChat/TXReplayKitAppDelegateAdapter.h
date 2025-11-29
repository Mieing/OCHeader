@class NSString;

@interface TXReplayKitAppDelegateAdapter : NSObject <TXReplayKitAppDelegate> {
    struct weak_ptr<liteav::audio::AudioLoopbackRecorder> { struct AudioLoopbackRecorder *__ptr_; struct __shared_weak_count *__cntrl_; } _recorder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRecorder:(struct weak_ptr<liteav::audio::AudioLoopbackRecorder> { struct AudioLoopbackRecorder *x0; struct __shared_weak_count *x1; })a0;
- (void)onReceiveAudioPacket:(const void *)a0;
- (void)onBroadcastExtFinished;
- (void)onBroadcastExtPaused;
- (void)onBroadcastExtResumed;
- (void)onBroadcastExtStarted;
- (void)onConnected;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
