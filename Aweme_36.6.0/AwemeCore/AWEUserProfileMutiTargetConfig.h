@class NSString;

@interface AWEUserProfileMutiTargetConfig : NSObject <AWEUserProfileMutiTargetConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)forbidPublish;
+ (BOOL)forbidCompanyEdit;
+ (BOOL)shouldSimplifyDefaultTab;
+ (BOOL)forbidCompanyBgViewEdit;
+ (BOOL)forbidDecorationEdit;
+ (BOOL)shouldShowEnterpriseRecommend;
+ (BOOL)forbidShowStarAtlas;
+ (BOOL)forbidExtensionAreaServiceWidgetShopClickDefaultValue;
+ (Class)aAWEUserProfileMutiTargetConfigCommonAdapterClass;

- (BOOL)enableCollectionFolderReport;
- (BOOL)forbidDouJury;
- (BOOL)forbidSyncToutiaoProfile;
- (BOOL)forbidSettingItemCooperationCode;
- (BOOL)forbidSlideMenuUserCenter;
- (BOOL)forbidOneDayHistory;
- (id)feedBackURL;
- (id)ignoredFavoriteSecondClassTabsId;
- (BOOL)forbidPostWorkChallengePublishGuide;
- (BOOL)forbidTaskCardPublish;
- (id)postWorkEmptyTitle;
- (id)postWorkEmptySubtitle;
- (BOOL)forbidProvideServiceLongPressEdit;
- (BOOL)forbidShopAssistant;
- (id)aAWEUserProfileMutiTargetConfigCommonAdapter;
- (id)targetID;
- (id)displayName;
- (id)brandName;

@end
