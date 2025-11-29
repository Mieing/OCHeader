@class NSString, AWEMateOnboardingViewController;

@interface AWEMateOnboardingManager : NSObject <AWEUserMessage, AWEMateOnboardingManagerProtocol, AWEFamiliarSettingsSubscriber>

@property (retain, nonatomic) AWEMateOnboardingViewController *sheetModeOnboardingViewController;
@property (nonatomic) BOOL hasShowFamiliarFeedOnboarding;
@property (nonatomic) BOOL hasShowMomentFeedOnboarding;
@property (nonatomic) BOOL hasShowStoryPublishedOnboarding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)updateFamiliarSettings:(id)a0 fromRequest:(BOOL)a1;
- (void)requestMateRateReportWithScene:(id)a0 completion:(id /* block */)a1;
- (void)updateMateOnboardingConfigWithSettingsDictionary:(id)a0;
- (BOOL)mateOnboardingHasCompleted;
- (BOOL)showingMateOnboardingOnFamiliarFeed;
- (BOOL)checkAndShowMateApplyOnboardingPanelIfNeededWithEnterFrom:(id)a0;
- (BOOL)checkAndShowOnboardingSheetIfNeededWithType:(unsigned long long)a0 delay:(double)a1 completeBlock:(id /* block */)a2;
- (BOOL)shouldShowMateOnboardingWithType:(unsigned long long)a0;
- (id)mateOnboardingViewController;
- (void)reportMateOnboardingShowWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)onboardingStatusKeyForUserId:(id)a0;
- (id)familiarFeedOnboardingShouldShowKeyForUserId:(id)a0;
- (id)momentFeedOnboardingShouldShowKeyForUserId:(id)a0;
- (id)homepageMateApplyOnboardingShouldShowKeyForUserId:(id)a0;
- (id)storyPublishedOnboardingShouldShowKeyForUserId:(id)a0;
- (id)recommendMateApplyOnboardingShouldShowKeyForUserId:(id)a0;
- (id)momentMigrationKeyForUserId:(id)a0;
- (id)momentAssetsMigratedBannerForUserId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
