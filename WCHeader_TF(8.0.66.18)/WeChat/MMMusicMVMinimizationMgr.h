@class MMMusicViewController, NSString, MMMusicInfo, UIView, MMUIButton, MiniAudioTaskContentView;

@interface MMMusicMVMinimizationMgr : MMUserService <IMusicPlayerExt, IMinimizeTaskDelegateInterface, MMImageLoaderObserver, IMinimizeTaskExt, MinimizeTaskContainerInfoDelegate, IMusicMVPostDataServiceExt, MiniAudioTaskContentViewDelegate, MinimizeNewTransitionControllerDelegate, MMServiceProtocol> {
    MMMusicViewController *_nativePlayerViewController;
    BOOL _hasAlertWhenPlayFail;
}

@property (retain, nonatomic) MMMusicInfo *lastPlayMusic;
@property (nonatomic) BOOL startSuccesss;
@property (retain, nonatomic) UIView *minimizeContainerView;
@property (retain, nonatomic) MMUIButton *minimizeCoverBgBtn;
@property (retain, nonatomic) MMUIButton *minimizeCloseBtn;
@property (retain, nonatomic) MiniAudioTaskContentView *contentView;
@property BOOL isMVPlaying;
@property (nonatomic) BOOL isMinimizeWindowShowing;
@property (nonatomic) BOOL hasFoldFloatingView;
@property (nonatomic) BOOL forbidAddMinimizeTaskWhenMusicStateChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitionController;
+ (id)genMinimizationMusicPlayerTaskKey;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)commonInit;
- (id)getCurPlayerViewController;
- (void)updateCurThumbImage:(id)a0 musicId:(id)a1;
- (void)updateMinimizeContainerViewWithThumbImage:(id)a0;
- (void)updateCurThumbViewWithMusicInfo:(id)a0;
- (void)updateCurMusicViewController:(id)a0;
- (void)installMinimizeContainerView;
- (void)onMinimizeMusicContainerClicked;
- (void)onMinimizeMusicCloseClicked;
- (void)addMusicToPullDownHistory;
- (id)createUsedTaskDataWithMusicInfo:(id)a0;
- (BOOL)isInBlackList:(id)a0;
- (BOOL)shouldBlockMinimizeWindowDisplayForTask:(id)a0;
- (void)minimizeWindowWillShow:(BOOL)a0;
- (void)minimizeWindowWillHide:(BOOL)a0;
- (void)updatePlayModeWithCurrentMusicInfoWithMinimizeWindowShowing:(BOOL)a0;
- (void)updatePlayModeWithMusicInfo:(id)a0 minimizeWindowShowing:(BOOL)a1;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)a0 musicInfo:(id)a1 errInfo:(id)a2;
- (void)tryAddMusicInfoToMinimizeTask:(id)a0 scene:(unsigned long long)a1;
- (BOOL)hasOtherOuterContainerMinimizeTask;
- (void)prepareForMusicPlay:(id)a0;
- (void)delayHiddenMusicMinimizationViewIfPlayerIdle:(id)a0;
- (void)onMusicInfoUpdated;
- (BOOL)isMusicPlayerAddedToMinimizationList;
- (id)getCurMusicMinimizeTask;
- (BOOL)removeMinimizeTask;
- (BOOL)removeMinimizeTaskByCloseButton:(BOOL)a0;
- (void)addMinimizeTaskWhenEdgePopEnd;
- (void)addMusicPlayerToMinimizationList:(id)a0 scene:(unsigned long long)a1;
- (void)tryRemoveMvMusicMinimizeTask;
- (void)onOutContentTask:(id)a0 replacedByAnotherTaskData:(id)a1;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)a0;
- (void)onAbsorbFloatingViewEndResultMoveTo:(struct CGPoint { double x0; double x1; })a0;
- (void)updateMinimizeContainerViewStickyOrientation:(BOOL)a0;
- (id)dataFromMusicInfo:(id)a0;
- (id)encodeMusicInfo:(id)a0;
- (id)decodeMusicInfoWithTaskData:(id)a0;
- (void)onEnterRecentUsedTask:(id)a0;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)onAppTaskDidEnterBackground:(id)a0 mode:(long long)a1;
- (void)onMVPostDataServicePostMVSuccess:(id)a0 svrDataItem:(id)a1 localId:(id)a2 relatedDraftId:(id)a3;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)a0;
- (void)onMiniAudioContentViewOuterContentClicked;
- (BOOL)useNewMinimizeTransition:(id)a0 withTransitionType:(unsigned int)a1;
- (id)getMinimizationTransitionContext;
- (BOOL)shouldBeginMinimizeCircleInteraction;
- (void)onMinimizeTransitionBegin:(unsigned int)a0;
- (void)onMinimizeTransitionEnd:(unsigned int)a0 isComplete:(BOOL)a1;
- (BOOL)isMinimizeTaskPlaying:(id)a0;
- (void).cxx_destruct;

@end
