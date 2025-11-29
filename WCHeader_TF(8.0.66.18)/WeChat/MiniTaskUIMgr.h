@class MemoryMappedKV, MinimizeTaskData, WADynamicBackgroundGLViewController, MiniTaskViewController, NSString, MiniTaskNavigationController;

@interface MiniTaskUIMgr : MMUserService <IMiniMizeUserdRecordUpdateExt, MMUIViewControllerExt, IMMFontMgrExt, MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *mappedKV;
@property (retain, nonatomic) MiniTaskViewController *miniTaskVC;
@property (weak, nonatomic) MiniTaskNavigationController *curForegroundContainerNavController;
@property (retain, nonatomic) MinimizeTaskData *curForegroundTaskData;
@property (retain, nonatomic) WADynamicBackgroundGLViewController *dynamicBGVC;
@property (nonatomic) BOOL canUseDynamicBackground;
@property (nonatomic) BOOL lastMiniTaskEntryState;
@property (nonatomic) unsigned int lastMiniEntryCountingTimeStamp;
@property (nonatomic) unsigned int flirtMiniEntryCount;
@property (nonatomic) BOOL doSarcasmOnceWhenEnterTaskList;
@property (nonatomic) unsigned int lastAddRecordTimestampForSwipeEdu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceClearMemoryCache:(unsigned long long)a0 addedUserType:(unsigned long long)a1;
- (void)onServiceClearMemoryCacheInBackground;
- (void)checkMiniTaskEntryShowStateHasChanged;
- (BOOL)shouldShowMiniTaskEntry;
- (BOOL)shouldHighlightMiniTaskEntry;
- (BOOL)shouldShakeMiniTaskEntry;
- (void)setHasShakeMiniTaskEntry;
- (BOOL)canEducateStarEntry;
- (void)setCanEducateStarEntry:(BOOL)a0;
- (BOOL)shouldEducateStarEntry;
- (void)setHasEducateStarEntry:(BOOL)a0;
- (void)resetMiniTaskEntryCountingSeesion;
- (void)doFlirtMiniTaskEntryWithNoTask;
- (unsigned int)fetchMiniTaskVCPushAnimationType;
- (BOOL)checkShouldShowMiniTaskSwipeEducation;
- (void)doShowMiniTaskSwipeEducation;
- (void)doAbortShowMiniTaskSwipeEducation;
- (void)doResetShowMiniTaskSwipeEducationRecords;
- (BOOL)hasEverEnterMiniVC;
- (void)onEnterMiniVC;
- (void)doResetEnterMiniVCRecord;
- (id)taskDataForDirectLaunch;
- (BOOL)launchMiniTaskWithData:(id)a0 transitionContext:(id)a1 presentingNavController:(id)a2;
- (void)recordRecentLaunchTask:(id)a0;
- (void)resetRecentLaunchTask;
- (void)recordRecentAppendTask;
- (void)updateHistoryTaskLastEntryTime;
- (void)setMiniTaskViewController:(id)a0;
- (void)initMiniTaskViewController;
- (id)getMiniTaskViewController;
- (BOOL)isMiniTaskViewControllerShowing;
- (id)getCurrentContextId;
- (void)clearMiniTaskViewController;
- (id)getCurForegroundTaskData;
- (id)getCurForegroundContainerNavController;
- (BOOL)recalCanUseDynamicBackground;
- (void)createDynamicBackgroundGLViewController;
- (id)getDynamicBackgroundGLViewController;
- (void)onAppendMinimizedTaskData:(id)a0;
- (void)onRemoveMinimizedTaskData:(id)a0;
- (void)MMUIViewControllerDidAppear:(id)a0;
- (void)onFontSizeChange;
- (void).cxx_destruct;

@end
