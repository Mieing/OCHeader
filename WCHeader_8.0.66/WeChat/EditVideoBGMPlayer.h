@class AVPlayer;
@protocol EditVideoBGMPlayerDelegate;

@interface EditVideoBGMPlayer : NSObject

@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) BOOL hasReadyToPlayObserver;
@property (nonatomic) BOOL hasStartedPlaying;
@property (weak, nonatomic) id<EditVideoBGMPlayerDelegate> delegate;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL playOnSystemMutedState;
@property (nonatomic) BOOL allowsExternalPlayback;
@property (nonatomic) BOOL asyncLoadInfo;
@property (nonatomic) BOOL asyncSessionCategroy;

- (id)init;
- (void)dealloc;
- (void)addCurrentItemReadyToPlayObserver;
- (void)removeCurrentItemReadyToPlayObserver;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)playMusic:(id)a0;
- (void)asyncPlayMusicWithData:(id)a0;
- (void)playMusicWithData:(id)a0;
- (void)_playWithAVAsset:(id)a0;
- (BOOL)musicDataNeedTimeCrop:(id)a0;
- (id)assetWithUrl:(id)a0;
- (id)assetWithLocalPath:(id)a0 startTimeInMs:(unsigned long long)a1 durationInMs:(unsigned long long)a2;
- (id)getPlayerUrl;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentPlayerTime;
- (long long)currentTimeControlStatus;
- (id)getInnerPlayer;
- (id)urlOfCurrentlyPlayingInPlayer:(id)a0;
- (void)pause;
- (void)resume;
- (void)updateSessionCategory;
- (void)seekToTime:(double)a0;
- (BOOL)isPausedState;
- (BOOL)isPlayingState;
- (BOOL)shouldBePlaying;
- (double)currentPlayerItemDuration;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)replayMusic;
- (void)updatePlayerMuted;
- (void).cxx_destruct;

@end
