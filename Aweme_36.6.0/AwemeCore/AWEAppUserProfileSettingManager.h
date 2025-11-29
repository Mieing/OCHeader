@class NSString;

@interface AWEAppUserProfileSettingManager : NSObject <AWEAppUserProfileSettingManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cleanFollowingSubTitleSettings;
+ (id)lightCoverURL;
+ (id)darkCoverURL;
+ (id)profileEditDefaultTextJson;
+ (id)__profileDefaultCoverSetting;
+ (id)normativeHandleRegexp;
+ (BOOL)enableProfileCreatorBanner;
+ (long long)trackLeaveHomepageThresholdDuration;
+ (id)profileEditNickNamePromptTipsString;
+ (id)profileEditUserIDPromptTipsString;
+ (id)replaceFollowingListTopText;
+ (BOOL)openRealTimeOnlineStatus;
+ (BOOL)showClearSchoolInfoButton;
+ (id)lightCoverMaskColor;
+ (id)darkCoverMaskColor;
+ (id)defaultMaskColor;
+ (id)lightFrameColor;
+ (id)darkFrameColor;
+ (BOOL)shouldForbidEditWhenLiteUser;
+ (BOOL)hidePostWorkCellJustWatchMaskSettings;
+ (long long)postWorkDispatchGroupTimeoutSettings;
+ (long long)profileRevisitIntervalSettings;
+ (BOOL)postWorkSwitchSortInvalidateLayoutFix;


@end
