@class HTSEventContext, IESLiveKTVCommonStore, IESLiveKtvSongStruct;

@interface IESLiveKTVControlStore : NSObject

@property (weak, nonatomic) IESLiveKTVCommonStore *store;
@property (nonatomic) BOOL isMultiKTV;
@property (nonatomic) BOOL isMixKTV;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) unsigned long long currentSongPlayingType;
@property (nonatomic) unsigned long long savedSongPlayingType;
@property (nonatomic) BOOL canSwitchSongPlayingType;
@property (nonatomic) BOOL isScoreMode;
@property (nonatomic) BOOL canSwitchScoreMode;
@property (nonatomic) BOOL isShowLyric;
@property (nonatomic) BOOL canSwitchShowLyric;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) IESLiveKtvSongStruct *currentPlayKTVMusic;
@property (nonatomic) BOOL isSinging;
@property (nonatomic) BOOL isMusicPlaying;
@property (nonatomic) BOOL isPause;
@property (nonatomic) BOOL isShowingTuning;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (double)currentPlayTime;
- (BOOL)canMultiChorusSing;
- (id)canMultiChorusSingSignal;
- (id)challengeModel;
- (id)getCurrentMusicModel;
- (BOOL)isKTVController;
- (BOOL)isVideoChorus;
- (id)remoteOrderInfo;
- (id)currentPlayTimeSignal;
- (BOOL)shouldShowChallengeYellowDot;
- (id)multiChorusUsersUpdateSubject;
- (BOOL)isCurrentUserFollower;
- (BOOL)isInChorusWithScene;
- (BOOL)isOldOrderList;
- (id)initWithStore:(id)a0 player:(id)a1;
- (id)multiChorusRouter;
- (BOOL)liveKtvChallengeEnable;
- (id)hasJoinedMultiChorusChangedSignal;
- (BOOL)isCurrentMultiChorusPlayer;
- (id)ktvChorusProvider;
- (void)askForExitMixKTV;
- (id)songListActions;
- (void)bindingKTVStore:(id)a0 player:(id)a1;
- (void)trackktvSingButtonClickWithEnterFrom:(id)a0;
- (void).cxx_destruct;

@end
