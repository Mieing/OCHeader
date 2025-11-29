@class NSMutableArray;
@protocol TXAudioEffectManagerDelegate;

@interface TXAudioEffectManager : NSObject {
    struct weak_ptr<liteav::manager::AudioEffectManagerInterface> { struct AudioEffectManagerInterface *__ptr_; struct __shared_weak_count *__cntrl_; } _effectManager;
    struct shared_ptr<MusicPreloadObserverAdapter> { struct MusicPreloadObserverAdapter *__ptr_; struct __shared_weak_count *__cntrl_; } _preloadObserversAdapter;
    struct shared_ptr<MusicPlayObserverAdapter> { struct MusicPlayObserverAdapter *__ptr_; struct __shared_weak_count *__cntrl_; } _playObserversAdapter;
}

@property (retain) NSMutableArray *effectIds;
@property (weak, nonatomic) id<TXAudioEffectManagerDelegate> delegate;

- (id)initWithEffectManager:(struct shared_ptr<liteav::manager::AudioEffectManagerInterface> { struct AudioEffectManagerInterface *x0; struct __shared_weak_count *x1; })a0;
- (void)enableVoiceEarMonitor:(BOOL)a0;
- (void)setVoiceEarMonitorVolume:(long long)a0;
- (void)setVoiceReverbType:(long long)a0;
- (void)setVoiceChangerType:(long long)a0;
- (void)setVoiceVolume:(long long)a0;
- (void)setVoicePitch:(double)a0;
- (void)startPlayMusic:(id)a0 onStart:(id /* block */)a1 onProgress:(id /* block */)a2 onComplete:(id /* block */)a3;
- (void)stopPlayMusic:(int)a0;
- (void)pausePlayMusic:(int)a0;
- (void)resumePlayMusic:(int)a0;
- (void)setMusicPublishVolume:(int)a0 volume:(long long)a1;
- (void)setMusicPlayoutVolume:(int)a0 volume:(long long)a1;
- (void)setAllMusicVolume:(long long)a0;
- (void)setMusicPitch:(int)a0 pitch:(double)a1;
- (void)setMusicSpeedRate:(int)a0 speedRate:(double)a1;
- (long long)getMusicCurrentPosInMS:(int)a0;
- (void)seekMusicToPosInMS:(int)a0 pts:(long long)a1;
- (long long)getMusicDurationInMS:(id)a0;
- (long long)getMusicTrackCount:(int)a0;
- (void)setMusicTrack:(int)a0 track:(long long)a1;
- (void)setMusicScratchSpeedRate:(int)a0 speedRate:(double)a1;
- (void)preloadMusic:(id)a0 onProgress:(id /* block */)a1 onError:(id /* block */)a2;
- (id)getMetadataValue:(int)a0 key:(id)a1;
- (void)_startPlayMusic:(long long)a0 param:(id)a1 onStart:(id /* block */)a2 onProgress:(id /* block */)a3 onComplete:(id /* block */)a4;
- (void)_stopPlayMusic:(long long)a0;
- (void)_pausePlayMusic:(long long)a0;
- (void)_resumePlayMusic:(long long)a0;
- (void)_setMusicPublishVolume:(long long)a0 volume:(long long)a1;
- (void)_setMusicPlayoutVolume:(long long)a0 volume:(long long)a1;
- (void)_setMusicPitch:(long long)a0 pitch:(double)a1;
- (void)_setMusicSpeedRate:(long long)a0 speedRate:(double)a1;
- (long long)_getMusicCurrentPosInMS:(long long)a0;
- (void)_seekMusicToPosInMS:(long long)a0 pts:(long long)a1;
- (void)_setMusicScratchSpeedRate:(long long)a0 speedRate:(double)a1;
- (void)_preloadMusic:(id)a0 onProgress:(id /* block */)a1 onError:(id /* block */)a2;
- (long long)_getMusicTrackCount:(long long)a0;
- (void)_setMusicTrack:(long long)a0 track:(long long)a1;
- (void)stopAll;
- (void)pauseAll;
- (void)resumeAll;
- (long long)legacyBGMID;
- (void)playBGM:(id)a0 withBeginNotify:(id /* block */)a1 withProgressNotify:(id /* block */)a2 andCompleteNotify:(id /* block */)a3;
- (void)stopBGM;
- (void)pauseBGM;
- (void)resumeBGM;
- (long long)getBGMDuration:(id)a0;
- (int)setBGMPosition:(long long)a0;
- (void)setBGMVolume:(long long)a0;
- (void)setBGMPlayoutVolume:(long long)a0;
- (void)setBGMPublishVolume:(long long)a0;
- (long long)newEffectIDFrom:(long long)a0;
- (void)playAudioEffect:(id)a0 volume:(int)a1 onFinished:(id /* block */)a2;
- (void)stopAudioEffect:(int)a0;
- (void)stopAllAudioEffects;
- (void)setAudioEffectVolume:(int)a0 volume:(int)a1;
- (void)setAllAudioEffectsVolume:(int)a0;
- (void)pauseAudioEffect:(int)a0;
- (void)resumeAudioEffect:(int)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
