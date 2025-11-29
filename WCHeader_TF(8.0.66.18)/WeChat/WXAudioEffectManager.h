@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, WXAudioEffectManagerDelegate;

@interface WXAudioEffectManager : NSObject <TRTCAudioEffectDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) void *manager;
@property (nonatomic) struct shared_ptr<wxvoipsdk::TRTCAudioEffectCallback> { struct TRTCAudioEffectCallback *__ptr_; struct __shared_weak_count *__cntrl_; } callback;
@property (retain, nonatomic) NSMutableDictionary *audioEffectMap;
@property (nonatomic) void *audioEngine;
@property (weak, nonatomic) id<WXAudioEffectManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0 delegateQueue:(id)a1;
- (void)enableVoiceEarMonitor:(BOOL)a0;
- (void)setVoiceEarMonitorVolume:(long long)a0;
- (void)setVoiceVolume:(long long)a0;
- (void)startPlayMusic:(id)a0 onStart:(id /* block */)a1 onProgress:(id /* block */)a2 onComplete:(id /* block */)a3;
- (void)stopPlayMusic:(int)a0;
- (void)pausePlayMusic:(int)a0;
- (void)resumePlayMusic:(int)a0;
- (void)setMusicPublishVolume:(int)a0 volume:(long long)a1;
- (void)setMusicPlayoutVolume:(int)a0 volume:(long long)a1;
- (void)setAllMusicVolume:(long long)a0;
- (long long)getMusicCurrentPosInMS:(int)a0;
- (void)seekMusicToPosInMS:(int)a0 pts:(long long)a1;
- (long long)getMusicDurationInMS:(id)a0;
- (void)stopAll;
- (void)stopAllAudioEffects;
- (void)setAllAudioEffectsVolume:(long long)a0;
- (void)pauseAll;
- (void)resumeAll;
- (void)_startPlayMusic:(long long)a0 params:(id)a1 onStart:(id /* block */)a2 onProgress:(id /* block */)a3 onComplete:(id /* block */)a4;
- (void)_stopPlayMusic:(long long)a0;
- (void)_pausePlayMusic:(long long)a0;
- (void)_resumePlayMusic:(long long)a0;
- (void)_setAllMusicVolume:(long long)a0;
- (void)_setMusicPublishVolume:(long long)a0 volume:(long long)a1;
- (void)_setMusicPlayoutVolume:(long long)a0 volume:(long long)a1;
- (long long)_getMusicCurrentPosInMS:(long long)a0;
- (void)_seekMusicToPosInBytes:(long long)a0 position:(long long)a1;
- (void)_seekMusicToPosInMS:(long long)a0 pts:(long long)a1;
- (void)asyncRun:(id /* block */)a0;
- (void)asyncDelegateRun:(id /* block */)a0;
- (void)syncRun:(id /* block */)a0;
- (void)dispatchOnQueue:(id)a0 block:(id /* block */)a1 isAsync:(BOOL)a2;
- (void)logApi:(id)a0;
- (void)onBgmPlayStart:(long long)a0 code:(long long)a1 reason:(id)a2;
- (void)onBgmPlayProgress:(long long)a0 currentTime:(long long)a1 totalTime:(long long)a2;
- (void)onBgmPlayEnd:(long long)a0 code:(long long)a1 reason:(id)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
