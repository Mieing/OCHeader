@class NSString, MMUIView, MMLiteAppViewController, FinderJumpInfo, MMGameLiveAccessoryTipView;

@interface MMFinderLiveScreenRecordCustomPIPHandler : MMFinderLiveCustomPIPHandler <WCFinderLiveExt, MMLiveTaskMgrExt>

@property (nonatomic) struct CGSize { double width; double height; } pipRenderSize;
@property (retain, nonatomic) MMUIView *gameLiveAccessoryContainerView;
@property (retain, nonatomic) FinderJumpInfo *gameLiveAccessoryViewJumpInfo;
@property (retain, nonatomic) MMLiteAppViewController *gameLiveAccessoryLiteAppCardVC;
@property (nonatomic) BOOL isGameLiveAccessoryLiteAppCardVCInitating;
@property (nonatomic) BOOL isAudioSessionInterrupted;
@property (nonatomic) BOOL isAppResignActive;
@property (nonatomic) unsigned long long gameLiveAccessoryRenderStyle;
@property (retain, nonatomic) MMGameLiveAccessoryTipView *gameLiveAccessoryTipView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPIPRenderSizeValid:(struct CGSize { double x0; double x1; })a0;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultData;
- (id)getPIPHandleLogic;
- (void)onPictureInPictureStart;
- (id)getPIPStartParam;
- (void)registerExtensions;
- (void)tryToManualStartPictureInPicture;
- (BOOL)updateAudioSessionInterrupted:(BOOL)a0;
- (void)updateIsAppResignActive:(BOOL)a0;
- (unsigned long long)getCurrAppropriateRenderStyle;
- (void)updateGameLiveAccessoryRenderStyle:(unsigned long long)a0;
- (void)createGameLiveAccessoryTipView;
- (void)notifyChangeGameLiveAccessoryRenderStyleIfNeed;
- (void)listenLiteAppEvent:(id /* block */)a0;
- (BOOL)refreshGameLiveAccessoryView:(id)a0;
- (void)openGameLiveAccessoryViewWithJumpInfo:(id)a0 completion:(id /* block */)a1;
- (void)createGameLiveAccessoryLiteAppCard:(id /* block */)a0;
- (void)destroyGameLiveAccessoryViews;
- (void)debug_configPIPRenderSizeIfNeed;
- (BOOL)configPIPRenderSize:(struct CGSize { double x0; double x1; })a0;
- (id)generateFinalQueryWithJumpInfo:(id)a0;
- (void)notifyAudioSessionInterruptedToLiteApp;
- (void)onGetFinderLiveMessage:(id)a0 taskId:(id)a1 onlineContacts:(id)a2 msgList:(id)a3 finderLiveInfo:(id)a4 onlineCount:(unsigned int)a5 liveInfoEnable:(BOOL)a6 liveClosed:(BOOL)a7 liveExtFlag:(unsigned int)a8 onlineViewCount:(unsigned int)a9 ktvPlayerCount:(unsigned int)a10 nextRequestInterval:(unsigned int)a11 currentLikeCount:(unsigned long long)a12 extraClientConfigUpdated:(BOOL)a13 liveGameData:(id)a14 respContext:(id)a15;
- (void)onGetFinderLiveAlertInfoWithTaskId:(id)a0 alertInfo:(id)a1;
- (void)onGameRecordLiveActiveAudioSession:(id)a0 src:(unsigned long long)a1;
- (void)onLiveTask:(id)a0 sysCallInterrupted:(BOOL)a1;
- (void)onLivePausedByVerifyBegin:(id)a0;
- (void)onLivePausedByVerifyEnd:(id)a0;
- (void)onLiveAlertEnd:(id)a0;
- (void)audioSessionInterruption:(id)a0;
- (void)didChangeScreenCapture:(id)a0;
- (void)sendRecordEvent;
- (void)didBecomeActive:(id)a0;
- (void)willResignActive:(id)a0;
- (void)onPIPStartChange:(BOOL)a0;
- (void)openGameLiveAccessoryView:(id /* block */)a0;
- (void).cxx_destruct;

@end
