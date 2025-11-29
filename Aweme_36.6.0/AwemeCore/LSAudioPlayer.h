@class AVPlayerItem, LSLiveAudioUnitProcess, AVAudioSession, AVPlayer;
@protocol LSAudioPlayerDelegate;

@interface LSAudioPlayer : NSObject

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerItem *currentItem;
@property (retain, nonatomic) AVAudioSession *curSession;
@property (retain, nonatomic) id timeObser;
@property (nonatomic) BOOL isSeeking;
@property (nonatomic) BOOL isCanPlay;
@property (nonatomic) BOOL needBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pauseTime;
@property BOOL playTaskEnable;
@property BOOL isExpectedPlaying;
@property (nonatomic) long long curLoopCount;
@property (nonatomic) long long loopCount;
@property (nonatomic) double sampleRate;
@property (weak, nonatomic) id<LSAudioPlayerDelegate> delegate;
@property (nonatomic) double totalTime;
@property (nonatomic) double loadRange;
@property (nonatomic) long long index;
@property (nonatomic) int type;
@property (retain, nonatomic) LSLiveAudioUnitProcess *audioUnitPlayer;

- (void)removeNotification;
- (float)getCurrentPlayTime;
- (long long)getCurLoop;
- (void)useDelegateWith:(long long)a0;
- (void)creatPlayer:(id)a0;
- (void)startToSeek;
- (void)removeObserverWithPlayItem:(id)a0;
- (id)getPlayerItem:(id)a0;
- (void)addObserverWithPlayItem:(id)a0;
- (void)addNotificatonForPlayer;
- (void)addPlayerObserver;
- (void)handleStatusWithPlayerItem:(id)a0;
- (void)handleLoadedTimeRangesWithPlayerItem:(id)a0;
- (void)videoPlayEnd:(id)a0;
- (void)videoPlayError:(id)a0;
- (void)removePlayerObserver;
- (id)initAUPlayer;
- (void)setupPlayerWith:(id)a0;
- (void)playOrPause:(id /* block */)a0;
- (void)seekPlayerTimeTo:(double)a0;
- (long long)getLoop;
- (float)getTotalPlayTime;
- (void)videoPlayEnterBack:(id)a0;
- (void)videoPlayBecomeActive:(id)a0;
- (void)replacePalyerItem:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (id)init;
- (void)stop;
- (void)setVolume:(float)a0;
- (void)restart;
- (void)resume;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)endSeek;
- (void)dealloc;
- (float)getVolume;
- (void)setLoop:(long long)a0;

@end
