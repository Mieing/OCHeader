@class NSError, NSTimer, NSArray, AVURLAsset, NSURL, NSString, NSRecursiveLock, NSObject;
@protocol AWEAudioMusicModelProtocol, AWEAVPlayerWrapper, AWEAVPlayerWrapperDelegate;

@interface AWEAVPlayerWrapper : NSObject <AWEAVPlayerWrapperTTVideoEngineDelegate, AWEAVPlayerWrapper> {
    NSRecursiveLock *_lock;
}

@property (readonly, nonatomic) id<AWEAudioMusicModelProtocol> playingMusic;
@property (readonly, nonatomic) id<AWEAudioMusicModelProtocol> retainedPlayingMusic;
@property (retain, nonatomic) NSObject<AWEAVPlayerWrapper> *player;
@property (retain, nonatomic) NSArray *playList;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) id<AWEAudioMusicModelProtocol> playingMusic;
@property (retain, nonatomic) id<AWEAudioMusicModelProtocol> retainedPlayingMusic;
@property (weak, nonatomic) AVURLAsset *loadingAsset;
@property (nonatomic) double monitorTimeFlag;
@property (nonatomic) BOOL monitorPlayedFlag;
@property (retain, nonatomic) NSTimer *playTimer;
@property BOOL hasUpdatedDuration;
@property double auditionDuration;
@property double duration;
@property (nonatomic) BOOL AWEAVPlayerWrapperDisableKVO;
@property (weak, nonatomic) id<AWEAVPlayerWrapperDelegate> delegate;
@property (readonly, nonatomic) NSURL *playingURL;
@property (nonatomic) long long repeatCount;
@property (readonly, nonatomic) BOOL isPlaying;
@property (copy, nonatomic) id /* block */ stopPlayingToAuditionDuration;
@property (nonatomic) BOOL canBackgroundPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long playStatus;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) double currentPlayTime;
@property (nonatomic) BOOL needCookie;

+ (void)setPlayerType:(unsigned long long)a0;
+ (Class)playerClass;

- (void)replaceCurrentItemWithURL:(id)a0;
- (void)removeTimeObserver;
- (id)initWithURLList:(id)a0;
- (void)setPlayStatus:(unsigned long long)a0;
- (id)initWithMusic:(id)a0 needCookie:(BOOL)a1;
- (void)replaceCurrentItemWithMusic:(id)a0;
- (BOOL)isExpiredCachedFileWithFilePath:(id)a0;
- (void)removeCachedPath:(id)a0;
- (BOOL)setUpPlaybackOfAsset:(id)a0 withKeys:(id)a1;
- (id)audioListWithMusic:(id)a0 cachedPath:(id)a1;
- (void)replaceCurrentPlayListWith:(id)a0;
- (void)setPlayingMusic:(id)a0;
- (id)initWithMusic:(id)a0;
- (void)replaceCurrentPlayListWithURLList:(id)a0;
- (void)replaceCurrentItemWith:(id)a0;
- (void)enableAsyncOptimize;
- (void)p_deactivatePlayerTimer;
- (void)handleAppWillResignActiveNotification:(id)a0;
- (void)clearCurrentPlayer;
- (BOOL)advanceNextItem;
- (void)p_activatePlayerTimer;
- (void)pauseWithFadeOutDuration:(double)a0 completion:(id /* block */)a1;
- (BOOL)advanceNextItem:(BOOL)a0;
- (void)setAudioClipRangeWithStartTime:(double)a0 endTime:(double)a1 loopWay:(long long)a2;
- (void)stopToAuditionDuration;
- (void)playerStatusChange:(id)a0;
- (BOOL)playNextItem;
- (void)playStatusDidChangedTo:(unsigned long long)a0 with:(id)a1;
- (id)initWithAudioList:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setStartTime:(double)a0;
- (id)initWithURL:(id)a0;
- (id)init;
- (void)setVolume:(double)a0;
- (void)seekToTime:(double)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (double)volume;
- (void)addPeriodicTimeObserverForInterval:(double)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (id)initWithAudioFile:(id)a0;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
