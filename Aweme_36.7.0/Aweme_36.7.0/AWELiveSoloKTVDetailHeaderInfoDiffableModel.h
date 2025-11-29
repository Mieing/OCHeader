@class IESLiveCombineSubject, AVPlayer, IESLiveKtvSongStruct;

@interface AWELiveSoloKTVDetailHeaderInfoDiffableModel : AWELiveSoloKTVDetailDiffableModel

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) IESLiveKtvSongStruct *song;
@property (nonatomic) long long sungCount;
@property (nonatomic) long long playerStatus;
@property (nonatomic) BOOL isPlayingBeforeInActivity;
@property (retain, nonatomic) IESLiveCombineSubject *songInfoChangeSubject;
@property (retain, nonatomic) IESLiveCombineSubject *favoriteStateChangeSubject;
@property (retain, nonatomic) id observerToken;

- (void)clearPlayer;
- (id)favoriteStateChangeSignal;
- (id)songInfoChangeSignal;
- (void)updateCollectStateWithCompletion:(id /* block */)a0;
- (void)updatePlayerState;
- (void)didPlayerPlayFinish;
- (void)didBecomeActivity;
- (void)updateWithSong:(id)a0 sungCount:(long long)a1;
- (void)willResignActive;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)setupPlayer;

@end
