@class FinderLiveButtonInfo, NSString, MMFinderLiveBottomButtonBackgroundColorConfig, MMLiveResourceFetcherLegacyApiAdapter, MMFinderLiveBottomButtonAnimationItem, MMFinderLiveTaskId, NSMutableArray, MMTimer;
@protocol MMFinderLiveBottomButtonStyleManagerDelegate;

@interface MMFinderLiveBottomButtonStyleManager : NSObject <MMFinderLiveResPathManagerProtocol>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMLiveResourceFetcherLegacyApiAdapter *downloadMgr;
@property (retain, nonatomic) FinderLiveButtonInfo *currentButtonInfo;
@property (retain, nonatomic) NSMutableArray *pendingAnimationItems;
@property (retain, nonatomic) MMFinderLiveBottomButtonAnimationItem *playingAnimationItem;
@property (retain, nonatomic) MMTimer *animationCountdownTimer;
@property (retain, nonatomic) NSString *liveShoppingButtonBubblePAGPath;
@property (retain, nonatomic) MMFinderLiveBottomButtonBackgroundColorConfig *colorConfig;
@property (weak, nonatomic) id<MMFinderLiveBottomButtonStyleManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (id)liveTask;
- (void)reloadButtonBGAndIconWithType:(unsigned int)a0;
- (void)reloadAllButtonBGAndIcon;
- (void)handleButtonInfo:(id)a0;
- (void)loadButtonIconAndBGResource:(id)a0;
- (void)loadGlobalIconResource:(id)a0;
- (id)updateLocalLoopsWithRemotes:(id)a0;
- (void)addNewAnimationInfos:(id)a0;
- (void)delayShoppingButtonLoopAnimations:(unsigned long long)a0;
- (BOOL)isString:(id)a0 equalToOther:(id)a1;
- (void)handleButtonIconInfoResReady:(id)a0 iconPath:(id)a1 bgPath:(id)a2;
- (void)onAnimationDownloadFailed:(id)a0;
- (void)onAnimationDownloadSuccess:(id)a0 localFilePath:(id)a1;
- (void)tryPlayPendingAnimation;
- (void)addCurrentAnimationAgainIfLoop;
- (void)scheduleAnimationTimerIfNeeded;
- (void)onAnimationTimerFired;
- (void)refreshResourceUsageAtPath:(id)a0;
- (void)cleanUnusedResources;
- (id)cacheFolder;
- (id)cachePath:(id)a0;
- (id)zipPath:(id)a0;
- (void).cxx_destruct;

@end
