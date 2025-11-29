@class NSDictionary, AWEMRRecordCache;

@interface AWEVersionUpdateBadgeModule : NSObject

@property (retain, nonatomic) AWEMRRecordCache *recordCache;
@property (retain, nonatomic) NSDictionary *sceneToConfigMap;
@property BOOL cache_canShowBadgeLeftSidebar;
@property BOOL cache_canShowBadgeSettingPage;
@property BOOL cache_canShowBadgeAboutDouyin;

+ (long long)leftSidebarVersionThreshold;
+ (long long)settingPageVersionThreshold;
+ (id)settingPageCoolDownConfig;
+ (long long)aboutDouyinVersionThreshold;
+ (id)aboutDouyinCoolDownConfig;
+ (BOOL)isCoolDownStrategyValid:(id)a0;
+ (id)defaultCoolDownConfig;

- (void)checkCanShowBadgeSettingPage:(id /* block */)a0;
- (id)recordShowWithScene:(long long)a0;
- (BOOL)recordConsumeWithToken:(id)a0;
- (BOOL)recordHideWithToken:(id)a0;
- (void)checkCanShowBadgeLeftSidebar:(id /* block */)a0;
- (void)registerSceneToConfigMap;
- (void)asyncRecalculateBadgeCanShow:(id /* block */)a0;
- (BOOL)p_canShowBadgeLeftSidebar;
- (BOOL)p_canShowBadgeSettingPage;
- (BOOL)p_canShowBadgeAboutDouyin;
- (id)getReleaseInfo;
- (void)checkCanShowBadgeAboutDouyin:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
