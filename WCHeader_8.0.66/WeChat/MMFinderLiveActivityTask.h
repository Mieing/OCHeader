@class MMFinderLiveBackgroundMusicLogic, MMFinderLiveEventInfo, NSString, MMFinderLiveWinterOlympicTorchInfo, MMFinderLiveActivityTaskId, MMFinderLiveWinterOlympicView;

@interface MMFinderLiveActivityTask : MMFinderLiveTask <AVAudioPlayerDelegate>

@property (retain, nonatomic) MMFinderLiveEventInfo *activityInfo;
@property (readonly, nonatomic) MMFinderLiveWinterOlympicView *winterOlympicsLiveView;
@property (retain, nonatomic) MMFinderLiveBackgroundMusicLogic *backgroundMusicLogic;
@property (nonatomic) BOOL isLiveCdnPlayerMuted;
@property (readonly, nonatomic) MMFinderLiveActivityTaskId *activityTaskId;
@property (readonly, nonatomic) unsigned int activityId;
@property (readonly, nonatomic) Class currentLiveViewClass;
@property (readonly, nonatomic) Class currentLiveViewControllerClass;
@property (readonly, nonatomic) BOOL showLiveStream;
@property (readonly, nonatomic) NSString *liveEventToken;
@property (retain, nonatomic) MMFinderLiveWinterOlympicTorchInfo *torchInfo;
@property (readonly, nonatomic) BOOL isWinterOlympicsLive;
@property (nonatomic) unsigned int activityResVersion;
@property (retain, nonatomic) NSString *activityVerifyInfo;
@property (nonatomic) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityResFilePathForDefaultVersion:(id)a0 activityId:(unsigned long long)a1;

- (void)showAlert:(id)a0;
- (void)showAlert:(id)a0 actionBlock:(id /* block */)a1;
- (void)showAlertInLive:(id)a0;
- (void)showAlertInLive:(id)a0 actionBlock:(id /* block */)a1;
- (id)initWithFinderDataItem:(id)a0;
- (BOOL)isAudienceLiveRewardEnable;
- (BOOL)isLiveEnableReward;
- (BOOL)isLiveShoppingAvailable;
- (BOOL)isLiveGameJoinTeamEnabled;
- (BOOL)isLiveGameInTeamUp;
- (BOOL)isLiveGameTeamUpSwitchButtonEnable;
- (BOOL)isLiveConnectMicEnabled;
- (BOOL)isLiveIdentitySwitchEnabled;
- (BOOL)isWatchLiveWithoutLoginEnabled;
- (BOOL)isLiveHandoffEnabled;
- (BOOL)isLiveAirPlayEnabled;
- (BOOL)isLivePictureInPictureEnabled;
- (BOOL)isLiveClearingGiftEffectEnabled;
- (BOOL)isLiveClaritySwitchEnabled;
- (id)createNewTaskId;
- (id)createLiveViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1 andDelegate:(id)a2;
- (void)updateJoinLiveContext:(id)a0;
- (BOOL)startPreviewCdnPlay;
- (void)switchCdnOrTrtcPlay:(BOOL)a0;
- (void)generateMainCdnPlayerItem;
- (BOOL)shouldForbidLandScapeForIphone;
- (BOOL)hasAudienceBackgroundMusic;
- (BOOL)innerPauseLiveForAudience;
- (BOOL)innerResumeLiveForAudience;
- (BOOL)muteCdnPlayer;
- (BOOL)unmuteCdnPlayer;
- (BOOL)isActivityLiveTask;
- (void)updateActivityInfoWithFinderLiveAudienceEventInfo:(id)a0;
- (void)updateMusicList:(id)a0;
- (id)activityResFilePath:(id)a0;
- (void)checkAndUpdateLiveRoleType;
- (void)updateActivityInfoWithLiveEventInfo:(id)a0;
- (void)checkShowLiveStreamValueChangeWithLastValue:(BOOL)a0;
- (void)checkAndRefreshMusic:(BOOL)a0;
- (void).cxx_destruct;

@end
