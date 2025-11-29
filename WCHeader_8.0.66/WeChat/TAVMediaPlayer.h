@class NSMutableArray, AVPlayerItem, NSHashTable, NSError, NSLock, AVPlayer;

@interface TAVMediaPlayer : NSObject

@property (class, nonatomic, getter=isAdvancedRefreshEnabled) BOOL advancedRefreshEnabled;

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerItem *currentItem;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long currentState;
@property (nonatomic) long long previousState;
@property (nonatomic) double lastPlaybackRate;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) long long tryCount;
@property (retain, nonatomic) id timeObserver;
@property (nonatomic) BOOL needPlaying;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSHashTable *observerList;
@property (retain, nonatomic) NSMutableArray *seekBlocks;
@property (nonatomic) BOOL isSeeking;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } targetTime;
@property (nonatomic, getter=isRefreshing) BOOL refreshing;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) double speed;
@property (nonatomic) double volume;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } validRange;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } progressInterval;
@property (nonatomic) BOOL shouldRepeat;
@property (nonatomic) BOOL shouldResume;

+ (id)playerWithPlayerItem:(id)a0;

- (id)init;
- (id)initWithPlayerItem:(id)a0;
- (void)dealloc;
- (void)resetPlayerItem:(id)a0;
- (void)prepareToPlay;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completion:(id /* block */)a1;
- (void)innerSeekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completion:(id /* block */)a1;
- (void)handleSeekingWithCompletions:(id)a0 seekTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 finished:(BOOL)a2;
- (void)cancelSeeking;
- (void)callAllCompletions;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })reviseSeekTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)seekBackToValidTimeRangeStart;
- (void)play;
- (void)playAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)pause;
- (void)replay;
- (void)stop;
- (void)destory;
- (void)refresh;
- (void)resume;
- (void)tryToChangeState:(long long)a0;
- (void)resetRateIfNeeded;
- (BOOL)shouldTryToResume;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startTimeForRepeat;
- (BOOL)shouldRestart;
- (BOOL)canUseAdvancedRefresh;
- (void)updateMediaDuration;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)addObserverForPlayer;
- (void)removeObserverForPlayer;
- (void)addTimeObserverForPlayer;
- (void)removeTimeObserver;
- (void)addObserverForCurrentItem;
- (void)removeObserverForCurrentItem;
- (void)playerItemDidPlayToEnd:(id)a0;
- (void)notifyPlayerDidReset;
- (void)notifyItemDidChange;
- (void)notifyStateDidChange;
- (void)notifyCurrentTimeChanged:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)notifyDidPlayToEnd;
- (void)notifySpeedDidChange;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)handlePlayerItemStatusChange;
- (void)handlePlaybackRateChange;
- (void)handlePlaybackBufferEmptyChange;
- (void)handlePlaybackLikelyToKeepUpChange;
- (void).cxx_destruct;

@end
