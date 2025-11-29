@class IESLiveActionSheetPresentViewController, IESLiveGuideSpeedTestViewModel, IESLiveRecommendResolution, NSString, IESLiveRecommendClarityChooseView;
@protocol IESLiveAnchorDynamicClarityPreferenceService;

@interface IESLiveGuideSpeedTestFragment : IESLiveGuideComponent <IESLiveGuideSpeedTestService, IESLiveGuideActions, IESLiveGuideSpeedTestViewModelDelegate, IESLiveRecommendClarityChooseViewDelegate, IESLiveGuideOpenLiveAdditionalEvent>

@property (nonatomic) long long testLimitCount;
@property (nonatomic) BOOL hasManualSelectResolution;
@property (retain, nonatomic) IESLiveRecommendResolution *recommedResolution;
@property (retain, nonatomic) IESLiveRecommendClarityChooseView *clarityView;
@property (retain, nonatomic) IESLiveActionSheetPresentViewController *presentViewController;
@property (retain, nonatomic) IESLiveGuideSpeedTestViewModel *speedTestViewModel;
@property (retain, nonatomic) id<IESLiveAnchorDynamicClarityPreferenceService> clarityPreference;
@property (nonatomic) long long resolutionSource;
@property (retain, nonatomic) NSString *startLiveResolutionKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)willSwitchToOtherTab;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)willStartLive;
- (void)willCloseGuideViewController;
- (void)appendStartLiveTrackParams:(id)a0 room:(id)a1 completion:(id /* block */)a2;
- (void)showClarityView;
- (id)recommendResolutionForLiveType:(unsigned long long)a0;
- (id)speedTestRecommendLevel:(unsigned long long)a0;
- (long long)speedTestRecommendForStartLiveResult:(unsigned long long)a0;
- (void)openLiveModelDidUpdate:(id)a0;
- (void)createSpeedTestViewModel;
- (BOOL)isManualSelectedResolution;
- (BOOL)isTestEnable;
- (void)trackAnchorStartTest:(BOOL)a0;
- (void)updateClarityItemDisplayInfo;
- (void)updateResourceSource;
- (void)appendTestCount;
- (id)clarityViewTip:(id)a0;
- (long long)todayAlreadyTestCount;
- (id)testCountLimitExpireTime;
- (BOOL)isSpeedTesting;
- (void)onClarityViewHide;
- (void)trackClarityShow;
- (void)trackClarityClick:(id)a0;
- (void)onSpeedTestResult:(BOOL)a0 preScheduleKey:(id)a1 level:(id)a2 expireTime:(long long)a3;
- (void)didSelectedClarityItemAt:(long long)a0;
- (void)trackClarityViewCancel;
- (void).cxx_destruct;
- (void)stopTest;
- (void)startTest;

@end
