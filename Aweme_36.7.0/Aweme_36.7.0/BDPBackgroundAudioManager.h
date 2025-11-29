@class BDPBgAudioModel, NSString, BDPThreadSafeDictionary, NSURL, BDPBackgroundAudioAVPlayer, BDPUniqueID, BDPAudioSessionLock;

@interface BDPBackgroundAudioManager : NSObject <BDPBackgroundAudioAVPlayerProtocol, BDPWarmBootMessage, BDPContainerLifeCycleMessage> {
    BOOL _resourceInitialized;
    BOOL _enablePlay;
    BOOL _enablePause;
    BOOL _enableNext;
    BOOL _enablePrev;
    BOOL _remoteCommandIsSwitch;
}

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double buffered;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) BOOL paused;
@property (retain, nonatomic) NSURL *backScheme;
@property (retain, nonatomic) BDPBackgroundAudioAVPlayer *player;
@property (retain, nonatomic) BDPThreadSafeDictionary *interruptDict;
@property (retain, nonatomic) BDPAudioSessionLock *audioSessionLock;
@property (retain, nonatomic) BDPUniqueID *currentBgAudioID;
@property (retain, nonatomic) BDPBgAudioModel *currentModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)seek:(double)a0 completion:(id /* block */)a1;
- (long long)handlePlayCommand;
- (long long)handlePauseCommand;
- (long long)handlePlayNextCommand;
- (void)applicationEnterWithUniqueID:(id)a0;
- (void)applicationExitWithUniqueID:(id)a0;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)p_stateChange:(id)a0 data:(id)a1;
- (void)bdp_bgplayerStateChange:(id)a0 data:(id)a1;
- (void)bdpHookMPRemoteCommandSetEnabled;
- (void)resourceInitialize:(id)a0;
- (long long)handlePlayPrevCommand;
- (id)coverImgUrl;
- (void)subsribeErrorWithMessage:(id)a0;
- (void)autoPlayWhenReady;
- (void)playPrev;
- (BOOL)forbiddenPlayWithFeed;
- (void)resourceRelease;
- (void)stopBackGroundPlayingAndClean:(id)a0;
- (BOOL)useNewFeedUEOpt;
- (void)resourceInitializeIfNeeded:(id)a0;
- (void)setBgAudioState:(id)a0 uniqueID:(id)a1;
- (id)getBgAudioState;
- (double)secondDuration;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (id)init;
- (void)stop;
- (double)progress;
- (void)playNext;

@end
