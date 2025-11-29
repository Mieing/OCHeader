@class MMMusicInfo, NSString, MMMultipleMusicViewController;

@interface MMMusicMinimizationMgr : MMUserService <IMusicPlayerExt, IMinimizeTaskDelegateInterface, MinimizeTaskStateInfoDelegate, MMServiceProtocol> {
    MMMultipleMusicViewController *_nativePlayerViewController;
}

@property (nonatomic) BOOL autoCloseAtFinish;
@property (retain, nonatomic) MMMusicInfo *lastPlayMusic;
@property (nonatomic) BOOL startSuccesss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)commonInit;
- (void)commonUninit;
- (id)getCurPlayerViewController;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)a0 musicInfo:(id)a1 errInfo:(id)a2;
- (void)prepareForMusicPlay:(id)a0;
- (void)onMusicInfoUpdated;
- (void)updateMusicPlayMinimizationView:(BOOL)a0;
- (BOOL)checkCanAddToPositiveMinimization;
- (void)delayHiddenMusicMinimizationViewIfPlayerIdle:(id)a0;
- (void)closeViewController:(id)a0;
- (void)addToMinimizeTask:(id)a0 positive:(BOOL)a1 isFromMenu:(BOOL)a2;
- (BOOL)isMusicPlayerAddedToMinimizationList;
- (id)getCurMusicMinimizeTask;
- (BOOL)changeMusicPlayerPositiveState:(BOOL)a0 isFromMenu:(BOOL)a1;
- (BOOL)removeMinimizeTask;
- (void)addMusicPlayerToMinimizationList:(id)a0;
- (void)removeMusicPlayerFromMinimizationList;
- (BOOL)updateMinimizationStateWithMusicInfo:(id)a0 isPositive:(BOOL)a1;
- (void)startMinimizeMusicPlayer;
- (id)transitionController;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (BOOL)isMinimizeTaskPlaying:(id)a0;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)a0;
- (void)onPlayPauseBtnClicked:(id)a0 isToPlay:(BOOL)a1;
- (void)onNextBtnClicked:(id)a0;
- (id)dataFromMusicInfo:(id)a0;
- (id)genMinimizationMusicPlayerTaskKey;
- (id)encodeMusicInfo:(id)a0;
- (id)decodeMusicInfo:(id)a0;
- (void)onEnterRecentUsedTask:(id)a0;
- (void).cxx_destruct;

@end
