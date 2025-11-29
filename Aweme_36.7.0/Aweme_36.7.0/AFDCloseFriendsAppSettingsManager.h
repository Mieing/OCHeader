@class NSDictionary, UIColor, NSString;

@interface AFDCloseFriendsAppSettingsManager : NSObject <AFDCloseFriendsAppSettingsManagerProtocol>

@property (class, readonly, nonatomic) long long momentMaskRequestInterval;

@property (retain, nonatomic) NSDictionary *configDict;
@property (retain, nonatomic) NSDictionary *explanationAlertConfigDict;
@property (retain, nonatomic) UIColor *currentContainerBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selfProfileMomentTabTips;
+ (id)otherProfileMomentTabEmptyPageDescription;
+ (Class)aAFDServiceCommonAdapterClass;
+ (BOOL)enableNewCloseFriendsMomentMaskViewSelfDraw;
+ (id)widgetGuideModalViewArray;
+ (Class)aAFDMomentAdapterClass;
+ (BOOL)shouldDisableMomentWidgetGuideInApp;
+ (id)closeFriendsMomentVideoTutorialConfigWithKey:(id)a0;
+ (id)widgetGuideTitleForStep:(long long)a0;
+ (id)widgetGuideSubtitleForStep:(long long)a0;
+ (id)widgetGuideDescForStep:(long long)a0;
+ (BOOL)shouldCheckLiveBeforeEnterMoments;
+ (BOOL)shouldUseAudioPauseProtectionSwitch;
+ (BOOL)enableMomentPreloadChatDetail;
+ (BOOL)enableMomentImagePreloadColorRing;
+ (long long)newCloseFriendsMomentMaskViewBlurRadiusImage;
+ (long long)newCloseFriendsMomentMaskViewBlurRadiusLocation;
+ (long long)newCloseFriendsMomentMaskViewBlurRadiusOtherProfile;
+ (BOOL)enableMomentWidgetGuide;
+ (long long)MomentTabMinCheckinDays;
+ (id)MomentTabCheckinInterruptedText;
+ (id)MomentTabCheckinSupplementalText;
+ (id)MomentRecheckinDescription;
+ (id)MomentTabCheckinTitlePrefixText;
+ (id)MomentInnerCheckinTitlePrefixText;
+ (id)selfProfileMomentTabFooterText;
+ (id)otherProfileMomentTabEmptyPageTitle;
+ (long long)otherProfileMomentTabRefreshCount;
+ (long long)otherProfileMomentTabLoadMoreCount;
+ (BOOL)closeFriendsMomentConsecutiveSettingsEnabled;
+ (id)closeFriendsMomentVideoTutorialConfigs;
+ (id)sharedInstance;

- (id)messageTabMomentEntryConfig;
- (BOOL)closeFriendsIsEnabled;
- (long long)skIIOnboardingMinCount;
- (double)dualCameraSmallWindowScaleValue;
- (BOOL)isCloseFriendsPullOpenEnable;
- (id)aAFDServiceCommonAdapter;
- (BOOL)pipDisabled;
- (BOOL)userCenterSettingCloseFriendsMomentEnable;
- (long long)widgetCloseFriendsListGuideLimit;
- (long long)addCloseFriendsCountLimit;
- (BOOL)isCloseFriendsAddBackButtonDisabled;
- (double)messageTabPullDownEntryThreshold;
- (double)friendsTabPullDownEntryThreshold;
- (BOOL)enableRefreshWhenFeedDisappear;
- (long long)skIIOnboardingBlockMinFriendsCount;
- (id)aAFDMomentAdapter;
- (void).cxx_destruct;

@end
