@class AWEHPSideBarBadgeUIConfig, AWEHPSideBarLoginUIConfig, AWEHPSideBarTopPureTextUIConfig, AWEHPSideBarCapsuleUIConfig, AWEHPSideBarListUIConfig, AWEHPSideBarGridUIConfig, AWEHPSideBarRecentlyVisitedAppUIConfig, AWEHPSideBarImpartialUIConfig, AWEHPSideBarHeaderUIConfig, AWEHPSideBarBannerUIConfig, AWEHPSideBarWeatherUIConfig, AWEHPSideBarRecentlyVisitedUserUIConfig, AWEHPSideBarNotificationUIConfig;

@interface AWEHPSideBarUIConfig : AWEBaseBizConfigModel

@property (readonly, nonatomic) double endRatio;
@property (readonly, nonatomic) AWEHPSideBarBadgeUIConfig *badgeUIConfig;
@property (readonly, nonatomic) AWEHPSideBarWeatherUIConfig *weatherUIConfig;
@property (readonly, nonatomic) AWEHPSideBarTopPureTextUIConfig *topPureTextUIConfig;
@property (readonly, nonatomic) AWEHPSideBarCapsuleUIConfig *capsuleUIConfig;
@property (readonly, nonatomic) AWEHPSideBarImpartialUIConfig *impartialUIConfig;
@property (readonly, nonatomic) AWEHPSideBarBannerUIConfig *bannerUIConfig;
@property (readonly, nonatomic) AWEHPSideBarHeaderUIConfig *headerUIConfig;
@property (readonly, nonatomic) AWEHPSideBarNotificationUIConfig *notificationUIConfig;
@property (readonly, nonatomic) AWEHPSideBarRecentlyVisitedAppUIConfig *recentlyVisitedAppUIConfig;
@property (readonly, nonatomic) AWEHPSideBarRecentlyVisitedUserUIConfig *recentlyVisitedUserUIConfig;
@property (readonly, nonatomic) AWEHPSideBarGridUIConfig *gridUIConfig;
@property (readonly, nonatomic) AWEHPSideBarListUIConfig *listUIConfig;
@property (readonly, nonatomic) AWEHPSideBarLoginUIConfig *loginUIConfig;

+ (id)badgeUIConfigJSONTransformer;
+ (id)weatherUIConfigJSONTransformer;
+ (id)topPureTextUIConfigJSONTransformer;
+ (id)capsuleUIConfigJSONTransformer;
+ (id)impartialUIConfigJSONTransformer;
+ (id)bannerUIConfigJSONTransformer;
+ (id)headerUIConfigJSONTransformer;
+ (id)notificationUIConfigJSONTransformer;
+ (id)recentlyVisitedAppUIConfigJSONTransformer;
+ (id)recentlyVisitedUserUIConfigJSONTransformer;
+ (id)gridUIConfigJSONTransformer;
+ (id)listUIConfigJSONTransformer;
+ (id)loginUIConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
