@class NSMutableArray, AVPlayer;

@interface MMFinderLiveBackgroundMusicLogic : NSObject <IRemoteControlCheckExt>

@property (retain, nonatomic) NSMutableArray *musicURLList;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) AVPlayer *audioPlayer;
@property (nonatomic) unsigned long long playerErrorCount;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) unsigned long long musicCount;
@property (nonatomic) BOOL canPlayMusic;

- (id)initWithMusicList:(id)a0;
- (void)play;
- (void)playNext;
- (void)resumeOrPlayNext;
- (void)pause;
- (void)stop;
- (void)dealloc;
- (void)createMusicURLListWithList:(id)a0;
- (void)handlePlayerError;
- (void)checkAndResumeAfterEvent;
- (void)onPlayerDidFinishPlaying;
- (void)onPlayerItemFailedToPlayToEndTime:(id)a0;
- (void)addAudioPlayerObserver;
- (void)removeAudioPlayerObserver;
- (void)addAudioSessionObserver;
- (void)removeAudioSessionObserver;
- (void)audioSessionRouteChange:(id)a0;
- (void)audioSessionInterruption:(id)a0;
- (void)appDidBecomeActive:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)iRemoteControlCheckShouldPlayOrPause;
- (void)iRemoteControlCheckShouldPlay;
- (void)iRemoteControlCheckShouldPause;
- (void).cxx_destruct;

@end
