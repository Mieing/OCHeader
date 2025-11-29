@class NSArray;
@protocol AWETeenModeSettingViewModelDelegate;

@interface AWETeenModeSettingsViewModel : NSObject

@property (retain, nonatomic) NSArray *sectionDataArray;
@property (weak, nonatomic) id<AWETeenModeSettingViewModelDelegate> controllerDelegate;

+ (Class)aAWETeenModeSettingsViewModelCommonAdapterClass;
+ (Class)aAWETeenModeSettingsViewModelDOUYINHMAdapterClass;
+ (Class)aAWEPrivacyAgreementAdapterClass;

- (void)trackWithEvent:(id)a0;
- (id)constructSectionDataArray;
- (id)_buildSettingSectionModelWithItems:(id)a0;
- (id)_buildSettingItemWithType:(long long)a0;
- (void)tapGeneralSettingCell;
- (id)aAWETeenModeSettingsViewModelCommonAdapter;
- (id)aAWEPrivacyAgreementAdapter;
- (id)aAWETeenModeSettingsViewModelDOUYINHMAdapter;
- (void)tapSelfInfoInquireCell;
- (void)tapFeedBackCell;
- (void)tapCommunityGuidelinesCell;
- (void)tapCredentialsCell;
- (void)tapUserServiceCell;
- (void)tapPrivacyPolicyCell;
- (void)tapPrivacyPermissionCell;
- (void)tapPrivacyThirdSDKCell;
- (void)tapAboutAmeCell;
- (void)tapCleanCacheCell;
- (void)tapLogOutCell;
- (void).cxx_destruct;
- (void)logOut;

@end
