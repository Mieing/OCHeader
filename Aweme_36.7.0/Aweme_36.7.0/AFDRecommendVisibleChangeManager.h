@class NSString, AFDFrequencyCountRule;

@interface AFDRecommendVisibleChangeManager : NSObject <AFDRecommendToFriendMessage, AFDRecommendToFriendsVisibilitySwitchMessage, AWEIMSettingModelUpdateMessage, AFDRecommendVisibleChangeManagerProtocol>

@property (retain, nonatomic) AFDFrequencyCountRule *showRecommendVisibleGuideTagRule;
@property (retain, nonatomic) AFDFrequencyCountRule *showRecommendVisibleGuideTagExitRule;
@property (retain, nonatomic) AFDFrequencyCountRule *showRecommendVisibleSnackBarRule;
@property (retain, nonatomic) AFDFrequencyCountRule *showRecommendVisibleSnackBarExitRule;
@property (retain, nonatomic) AFDFrequencyCountRule *recommendVisiblityPanelExitRule;
@property (retain, nonatomic) AFDFrequencyCountRule *notSetFansVisibleRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendVisibleSnackBarText;
+ (id)recommendVisibleSnackBarRightText;
+ (id)sharedInstance;

- (void)requestRecommendSuccessWithContext:(id)a0;
- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (id)panelConfig;
- (void)showRecommendVisibleGuideTagFrequencyAddCountWithModel:(id)a0;
- (BOOL)shouldShowHighFansGuideTagWithModel:(id)a0;
- (void)showRecommendVisiblityPanelForGuideTagWithModel:(id)a0;
- (id)recommendVisibleGuideTagText;
- (void)trackRecommendToFansPopup:(unsigned long long)a0;
- (void)updateRecommendToFriendsVisibility:(long long)a0;
- (BOOL)shouldHideVisibleSettingEntrance;
- (id)visiblityPanelModel;
- (void)didVisiblityPanelShow;
- (BOOL)enableHighFansRecommendVisibleChange;
- (BOOL)isRecommendVisibleGuideTagFrequencyAvailable;
- (BOOL)isGuideHighFansUserOpenVisibilityEnable;
- (BOOL)enableShowRecommendVisiblityPanelWithModel:(id)a0;
- (void)showRecommendVisiblityPanel;
- (BOOL)isRecommendVisibleSnackBarFrequencyAvailable;
- (BOOL)enableHighFansRecommendVisibleChangeGuideSnackBar;
- (BOOL)shouldShowRecommendVisibleChangeGuideSnackBarWithContext:(id)a0;
- (void)showRecommendVisibleGuideSnackBarWithContext:(id)a0;
- (void)notSetFansVisibleRuleAddCount;
- (long long)showRecommendVisibleGuideTagRuleSeconds;
- (long long)showRecommendVisibleGuideTagExitRuleMaxCount;
- (long long)showRecommendVisibleSnackBarRuleSeconds;
- (id)frequencyRules;
- (void).cxx_destruct;
- (id)init;

@end
