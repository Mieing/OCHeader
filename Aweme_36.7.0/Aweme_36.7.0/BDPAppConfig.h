@class NSMutableDictionary, NSDictionary, BDPAppRefererConfig, BDPTabBarConfig, BDPUniqueID, BDPWindowConfig, NSString, NSSet, BDPPluginWhiteDomainConfig, BDPCookieConfig, BDPNetworkTimeoutConfig, NSArray, BDPLaunchAppConfig;

@interface BDPAppConfig : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSDictionary *page;
@property (retain, nonatomic) NSMutableDictionary *finalPageConfigs;
@property (copy, nonatomic) NSDictionary *preloadRule;
@property (copy, nonatomic) NSArray *subPackages;
@property (copy, nonatomic) NSDictionary *subpackageNameToRoot;
@property (copy, nonatomic) NSSet *allSubpackagesRoot;
@property (copy, nonatomic) NSArray *skeletonPageList;
@property (copy, nonatomic) NSDictionary *skeletonConfig;
@property (copy, nonatomic) NSArray *lynxPages;
@property (copy, nonatomic) NSString *appRenderType;
@property (copy, nonatomic) NSDictionary *tabBarRawData;
@property (copy, nonatomic) NSString *menuButtonStyle;
@property (copy, nonatomic) NSString *entryPagePath;
@property (nonatomic) long long resizableType;
@property (retain, nonatomic) BDPPluginWhiteDomainConfig *whiteDomains;
@property (copy, nonatomic) NSArray *pages;
@property (nonatomic) BOOL hasVtree;
@property (retain, nonatomic) BDPWindowConfig *window;
@property (retain, nonatomic) BDPTabBarConfig *tabBar;
@property (retain, nonatomic) BDPNetworkTimeoutConfig *networkTimeout;
@property (retain, nonatomic) BDPAppRefererConfig *refererConfig;
@property (copy, nonatomic) NSArray *navigateToAppIdList;
@property (copy, nonatomic) NSArray *navigateToGameIdList;
@property (retain, nonatomic) BDPLaunchAppConfig *launchApp;
@property (copy, nonatomic) NSDictionary *plugins;
@property (copy, nonatomic) NSDictionary *permission;
@property (copy, nonatomic) NSDictionary *redirection;
@property (copy, nonatomic) NSDictionary *renderOptions;
@property (copy, nonatomic) NSString *h5RedirectStartPage;
@property (nonatomic) BOOL debug;
@property (retain, nonatomic) BDPCookieConfig *cookie;
@property (copy, nonatomic) NSDictionary *prefetchRules;
@property (nonatomic) BOOL usePrivacyCheck;
@property (copy, nonatomic) NSDictionary *codeFortifyConfig;
@property (copy, nonatomic) NSArray *preloadDataList;
@property (copy, nonatomic) NSString *preloadDataListUrl;

+ (id)modelPropertyBlacklist;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (void)bootstrapLaunch;

- (id)getPageConfigByPath:(id)a0;
- (BOOL)isTabPage:(id)a0;
- (id)useWebviewCoverPageWithPath:(id)a0;
- (BOOL)containsPage:(id)a0;
- (id)mergedWindowConfig:(id)a0 withBasePluginPage:(id)a1;
- (id)initWithDict:(id)a0 model:(id)a1;
- (long long)tabBarIndexOfPath:(id)a0;
- (BOOL)showLoadingOverlaySkeleton:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
