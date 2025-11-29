@class NSString, FinderLiveAiAssistantNotification, MMFinderLiveTaskId;
@protocol MMFinderLiveAiAssistantLogicDelegate;

@interface MMFinderLiveAiAssistantLogic : NSObject <WCFinderLiveExt, MMFinderLiveAiAssistantExt, MMFinderLiveMusicSettingReportDelegate>

@property (retain, nonatomic) FinderLiveAiAssistantNotification *currentAiAssistantInfo;
@property (nonatomic) BOOL isAiAssistantEnabled;
@property (nonatomic) BOOL hasCheckedIsShowingFirstTime;
@property (nonatomic) BOOL hasReportedFirstExposeInLive;
@property (readonly, nonatomic) MMFinderLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLiveAiAssistantLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)_init;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)onJoinLive;
- (void)checkIsShowingFirstTime;
- (void)checkAndSetAiAssistantEnabled;
- (void)onCheckedAiAssistantEnableStatus;
- (BOOL)checkAiAssistantInfoWithdrawn:(id)a0;
- (BOOL)checkAiAssistantInfoShouldBeDisposed:(id)a0;
- (void)processFeatureGuide:(id)a0;
- (void)processJumpInfo:(id)a0;
- (void)onReportMusicSettingActionType:(long long)a0 songIdList:(id)a1;
- (void)onReportBGMusicWithAction:(unsigned long long)a0 tab:(unsigned int)a1 listenId:(id)a2 aiAssistantId:(id)a3;
- (void)onReportBGMusicPlayWithAction:(unsigned long long)a0 listenId:(id)a1 playId:(unsigned long long)a2 playDuration:(unsigned long long)a3;
- (void)onAiAssistantActionClickedWithTaskId:(id)a0 aiAssistantInfo:(id)a1;
- (void)onAiAssistantInfoUpdatedWithTaskId:(id)a0 aiAssistantInfo:(id)a1;
- (id)liveTask;
- (id)liveOperationView;
- (id)liveJumpInfo;
- (void)reportWithdrawn;
- (void)reportFirstExposeInLive;
- (void)mockAiAssistantInfoIfNeeded;
- (id)mockMusic;
- (id)mockLiveTheme;
- (void).cxx_destruct;

@end
