@class NSString;

@interface AWEExperienceModuleService : HTSService <AWEExperienceModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)LaunchOptimizeLandingBlockTask;
+ (BOOL)goalKeeperServiceEnabled;

- (BOOL)isIndividualPlay;
- (void)preloadCacheListIfNeeded;
- (id)getFeedPreCacheModelsWithClean:(BOOL)a0;
- (BOOL)isRestoredAwemeModel:(id)a0;
- (void)checkCacheAvailability:(id)a0 completion:(id /* block */)a1;
- (id)silentPushManager;
- (id)precacheManager;
- (id)getFeedPreCacheModelsWithClean:(BOOL)a0 inOrder:(BOOL)a1;
- (BOOL)hasValidModelForCurrentLaunch;
- (id)validCachedFeedsInCurrentSession;
- (id)getHistoryAwemeIds;
- (id)getCloudContentEvalParams;
- (void)updateAutoTestFlag:(BOOL)a0;
- (BOOL)getAutoTestFlag;
- (BOOL)insertPlayerControllerForForYouWithBlock:(id /* block */)a0;
- (BOOL)tryLoadNewRealWindow:(id /* block */)a0;
- (void)individualHandleRealWindow:(id)a0;
- (int)individualLoadForYouType;
- (BOOL)isIndividualFirstFrameShown;
- (id)individualCacheList;
- (BOOL)shouldRootWindowVisible;
- (id)goldenHouseManager;
- (BOOL)goldenHouseEnabled;
- (long long)goldenHouseDeduplicationCheckCount;
- (long long)goldenHouseSingleVideoMaximumSize;
- (BOOL)goldenHouseFirstFeedOpt;
- (BOOL)goldenHouseRepeatFeedOpt;
- (long long)goldenHouseReleaseConditionWeakVV;
- (Class)backgroundLaunchConfigClass;
- (BOOL)handleQuestionnaireSubmitWithQuestionnaire:(id)a0 itemId:(id)a1;
- (BOOL)updateDailyShowControlWithQuestionnaire:(id)a0;
- (void)updateDailyCloseControlWithItemID:(id)a0;
- (BOOL)checkCanShowUGQuestionnaire:(id)a0;
- (void)initFrequencyControlIfNeeded;
- (BOOL)enableColdLaunchSmartAdjustVolume;
- (double)adjustedVolumeForColdLaunch;
- (void)adjustVolumeWhenColdLaunch;
- (id)CacheCenterService;
- (id)cacheCenterUtilManager;
- (BOOL)checkDownloadPeriodValid;
- (BOOL)checkDownloadPeriodValidAvoidPeak;
- (BOOL)checkDownloadPeriodValidForScene:(long long)a0;
- (BOOL)checkDownloadPeriodValidAvoidPeakForScene:(long long)a0;
- (void)setForyouFeedDataController:(id)a0;
- (BOOL)enableCacheCenter;
- (id)feedCacheCenterScenesConfig;
- (BOOL)enablePreCacheMigration;
- (id)feedCacheFromDepName;
- (void)preloadCacheVideo:(id)a0 completion:(id /* block */)a1;
- (void)addAedInfoToParams:(id)a0 fromModel:(id)a1;
- (id)infoDictFromToast:(id)a0;
- (void)startPlayVideoAutoSleepManager;
- (BOOL)disableWaitLaunchFinished;
- (double)cacheCallBackDelayTime;
- (BOOL)canUpdateValueOnViewWillAppear;
- (id)lastLoginInfo;
- (BOOL)precacheRetryReadCacheEnable;
- (double)delayUpdateInteractionForFirstVideo;
- (id)goalKeeperService;
- (BOOL)canIndividualPlayV2;
- (void)markUseIndividualPlayV2;
- (void)showDelayTabbarIfNeededWithSource:(id)a0;
- (double)calculateScoreForAweme:(id)a0 scene:(id)a1 mode:(id)a2;
- (BOOL)enableEvaluateForScene:(id)a0;

@end
